/*
 * XREFs of ACPIBusIrpQueryResourceRequirements @ 0x1C009C190
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C00161D0 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E180 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIRangeValidatePciResources @ 0x1C002B020 (ACPIRangeValidatePciResources.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C002F28C (ACPIRangeFilterPICInterrupt.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C009C474 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetSpare @ 0x1C009C630 (ACPIInternalSetSpare.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009C6D4 (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIBusIrpQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  char v2; // si
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rdi
  const char *v7; // r14
  int DeviceResourceList; // ebx
  char *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  char *IrpText; // rax
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  _DWORD *v16; // rbp
  __int64 v17; // rcx
  char *v18; // rax
  const char *v19; // r8
  __int64 v21; // rax
  _DWORD *v22; // rcx
  unsigned int j; // r9d
  unsigned int v24; // r8d
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  const char *v29; // r8
  const char *v30; // rdx
  _DWORD *v31; // r8
  unsigned int v32; // r9d
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 i; // rax
  __int64 v37; // rax
  const char *v38; // rdx
  const char *v39; // rcx
  __int64 v40; // rax
  char *v41; // rax
  const char *v42; // r8
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  v7 = byte_1C00701BA;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1LL, &P);
  v9 = byte_1C00701BA;
  v10 = 0x400000000000LL;
  if ( DeviceExtension )
  {
    v11 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v11 & 0x200000000000LL) != 0 && (v11 & 0x400000000000LL) != 0 )
      v9 = *(char **)(DeviceExtension + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(0x400000000000LL, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x32u,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)a2,
      IrpText,
      DeviceResourceList,
      v14,
      v15,
      v13);
  }
  if ( DeviceResourceList < 0 )
    goto LABEL_70;
  v10 = *(_QWORD *)(DeviceExtension + 8);
  v16 = P;
  if ( P )
  {
    if ( (v10 & 0x2000000) != 0 )
    {
      ACPIRangeValidatePciResources(DeviceExtension, (ULONG_PTR)P, (unsigned __int64)v9);
    }
    else if ( (v10 & 0x200000000LL) != 0 )
    {
      v27 = ACPIRangeFilterPICInterrupt((__int64)P);
      if ( v27 < 0 )
      {
        v28 = *(_QWORD *)(DeviceExtension + 8);
        v29 = byte_1C00701BA;
        v30 = byte_1C00701BA;
        if ( (v28 & 0x200000000000LL) != 0 )
        {
          v29 = *(const char **)(DeviceExtension + 568);
          if ( (v28 & 0x400000000000LL) != 0 )
            v30 = *(const char **)(DeviceExtension + 576);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x33u,
            (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
            (char)a2,
            v27,
            DeviceExtension,
            v29,
            v30);
        ExFreePoolWithTag(v16, 0);
        v16 = 0LL;
      }
    }
    v21 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v21 & 0x2000000000LL) != 0 )
    {
      if ( *(_BYTE *)(DeviceExtension + 184) )
      {
        v31 = v16 + 8;
        v32 = 0;
        if ( v16[7] )
        {
          do
          {
            v33 = (unsigned int)v31[1];
            v34 = (unsigned __int64)(v31 + 2);
            v35 = (unsigned __int64)&v31[8 * v33 + 2];
            if ( (unsigned __int64)(v31 + 2) < v35 )
            {
              do
              {
                if ( ((*(_BYTE *)(v34 + 1) - 3) & 0xFB) == 0 )
                {
                  for ( i = v34 + 32; i < v35 && *(_BYTE *)(i + 1) == 0x81; i += 32LL )
                  {
                    if ( *(_WORD *)(i + 4) == 1 )
                    {
                      *(_WORD *)(v34 + 4) |= 0x100u;
                      break;
                    }
                  }
                }
                v34 += 32LL;
              }
              while ( v34 < v35 );
              v33 = (unsigned int)v31[1];
            }
            v31 += 8 * v33 + 2;
            ++v32;
          }
          while ( v32 < v16[7] );
          v21 = *(_QWORD *)(DeviceExtension + 8);
        }
      }
    }
    if ( (v21 & 0x8000) != 0 )
    {
      v22 = v16 + 8;
      for ( j = 0; j < v16[7]; v22 += 8 * v24 + 2 )
      {
        v24 = v22[1];
        v25 = (unsigned __int64)(v22 + 2);
        v26 = (unsigned __int64)&v22[8 * v24 + 2];
        if ( (unsigned __int64)(v22 + 2) < v26 )
        {
          do
          {
            if ( *(_BYTE *)(v25 + 1) == 2 )
              *(_WORD *)(v25 + 4) |= 8u;
            v25 += 32LL;
          }
          while ( v25 < v26 );
          v24 = v22[1];
        }
        ++j;
      }
    }
    DeviceResourceList = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(DeviceExtension, (__int64)v16);
    if ( DeviceResourceList < 0 )
    {
      v37 = *(_QWORD *)(DeviceExtension + 8);
      v38 = byte_1C00701BA;
      v39 = byte_1C00701BA;
      if ( (v37 & 0x200000000000LL) != 0 )
      {
        v38 = *(const char **)(DeviceExtension + 568);
        if ( (v37 & 0x400000000000LL) != 0 )
          v39 = *(const char **)(DeviceExtension + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x34u,
          (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
          (char)a2,
          DeviceResourceList,
          DeviceExtension,
          v38,
          v39);
      ExFreePoolWithTag(v16, 0);
    }
    else
    {
      a2->IoStatus.Information = (unsigned __int64)v16;
    }
  }
  else if ( (v10 & 0x2000000) != 0 )
  {
    DeviceResourceList = -1073741823;
  }
  if ( DeviceResourceList < 0 )
  {
LABEL_70:
    if ( DeviceResourceList != -1073741670 )
    {
      v40 = *(_QWORD *)(DeviceExtension + 8);
      if ( (v40 & 0x2000000) != 0 )
      {
        if ( (v40 & 0x200000000000LL) != 0 )
        {
          v7 = *(const char **)(DeviceExtension + 568);
          v10 = 0x400000000000LL;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v41 = ACPIDebugGetIrpText(v10, MinorFunction);
          WPP_RECORDER_SF_qsLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x35u,
            (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
            (char)a2,
            v41,
            DeviceResourceList,
            DeviceExtension,
            v7,
            v42);
        }
        KeBugCheckEx(0xA5u, 2uLL, DeviceExtension, 1uLL, (ULONG_PTR)a2);
      }
    }
  }
  a2->IoStatus.Status = DeviceResourceList;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v17 = 0x200000000000LL;
    v2 = DeviceExtension;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(DeviceExtension + 568);
      v17 = 0x400000000000LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = ACPIDebugGetIrpText(v17, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x36u,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)a2,
      v18,
      DeviceResourceList,
      v2,
      v7,
      v19);
  }
  return (unsigned int)DeviceResourceList;
}
