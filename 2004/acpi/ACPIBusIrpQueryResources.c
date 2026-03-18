/*
 * XREFs of ACPIBusIrpQueryResources @ 0x1C009BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C00161D0 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIInitDosDeviceName @ 0x1C0016808 (ACPIInitDosDeviceName.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E028 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E180 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIRangeValidatePciResources @ 0x1C002B020 (ACPIRangeValidatePciResources.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C002F28C (ACPIRangeFilterPICInterrupt.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C009B7C0 (PnpIoResourceListToCmResourceList.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C009C474 (PnpBiosGetDeviceResourceList.c)
 */

__int64 __fastcall ACPIBusIrpQueryResources(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // si
  unsigned __int8 MinorFunction; // r13
  __int64 *DeviceExtension; // rbx
  const char *v8; // r12
  int Status; // edi
  __int64 v10; // rax
  int DeviceResourceList; // eax
  unsigned __int64 v12; // r8
  _DWORD *v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  char *IrpText; // rax
  const char *v18; // r8
  _DWORD *v20; // rcx
  unsigned int i; // r9d
  unsigned int v22; // r8d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  const char *v25; // rdx
  const char *v26; // rcx
  __int64 v27; // rax
  const char *v28; // rdx
  const char *v29; // rcx
  unsigned __int16 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h] BYREF
  __int128 v34; // [rsp+70h] [rbp-10h] BYREF
  int v35; // [rsp+C8h] [rbp+48h] BYREF
  PVOID P; // [rsp+D0h] [rbp+50h] BYREF
  __int128 *v37; // [rsp+D8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v33 = 0LL;
  v35 = 0;
  v34 = 0LL;
  v37 = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v32 = 0LL;
  P = 0LL;
  DeviceExtension = (__int64 *)ACPIInternalGetDeviceExtension(a1);
  ACPIInitDosDeviceName((__int64)DeviceExtension);
  v8 = byte_1C00701BA;
  Status = ACPIGet(DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v33, 0LL);
  if ( Status < 0 )
    goto LABEL_27;
  v10 = DeviceExtension[1];
  if ( (v10 & 0x40000000000000LL) != 0 )
  {
    DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 0LL, &P);
    v13 = P;
    Status = DeviceResourceList;
    if ( P )
    {
      if ( (DeviceExtension[1] & 0x2000000) == 0 )
      {
        *(_QWORD *)&v34 = DeviceExtension[90];
        DWORD2(v34) = 8;
        v37 = &v34;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_SWALLOW_OBJECT_CRS, &v37, 1LL, &v35) >= 0 && v35 == 2 )
        {
          ExFreePoolWithTag(v13, 0);
          v13 = 0LL;
        }
      }
      if ( v13 )
      {
        v14 = DeviceExtension[1];
        if ( (v14 & 0x2000000) != 0 )
        {
          ACPIRangeValidatePciResources((ULONG_PTR)DeviceExtension, (ULONG_PTR)v13, v12);
        }
        else if ( (v14 & 0x200000000LL) != 0 )
        {
          Status = ACPIRangeFilterPICInterrupt((__int64)v13);
          if ( Status < 0 )
          {
            v27 = DeviceExtension[1];
            v28 = byte_1C00701BA;
            v29 = byte_1C00701BA;
            if ( (v27 & 0x200000000000LL) != 0 )
            {
              v28 = (const char *)DeviceExtension[71];
              if ( (v27 & 0x400000000000LL) != 0 )
                v29 = (const char *)DeviceExtension[72];
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_14;
            v30 = 47;
            goto LABEL_52;
          }
        }
        if ( (DeviceExtension[1] & 0x8000) != 0 )
        {
          v20 = v13 + 8;
          for ( i = 0; i < v13[7]; v20 += 8 * v22 + 2 )
          {
            v22 = v20[1];
            v23 = (unsigned __int64)(v20 + 2);
            v24 = (unsigned __int64)&v20[8 * v22 + 2];
            if ( (unsigned __int64)(v20 + 2) < v24 )
            {
              do
              {
                if ( *(_BYTE *)(v23 + 1) == 2 )
                  *(_WORD *)(v23 + 4) |= 8u;
                v23 += 32LL;
              }
              while ( v23 < v24 );
              v22 = v20[1];
            }
            ++i;
          }
        }
        Status = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList((__int64)DeviceExtension, (__int64)v13);
        if ( Status >= 0 )
        {
          Status = PnpIoResourceListToCmResourceList(v13, &v32);
LABEL_14:
          ExFreePoolWithTag(v13, 0);
          goto LABEL_15;
        }
        v31 = DeviceExtension[1];
        v28 = byte_1C00701BA;
        v29 = byte_1C00701BA;
        if ( (v31 & 0x200000000000LL) != 0 )
        {
          v28 = (const char *)DeviceExtension[71];
          if ( (v31 & 0x400000000000LL) != 0 )
            v29 = (const char *)DeviceExtension[72];
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_14;
        v30 = 48;
LABEL_52:
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          v30,
          (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
          (char)a2,
          Status,
          (char)DeviceExtension,
          v28,
          v29);
        goto LABEL_14;
      }
    }
    if ( Status < 0 )
      goto LABEL_27;
    if ( (DeviceExtension[1] & 0x2000000) == 0 )
    {
      Status = a2->IoStatus.Status;
LABEL_15:
      if ( Status >= 0 )
        goto LABEL_16;
LABEL_27:
      if ( Status == -1073741670 )
        goto LABEL_16;
      goto LABEL_28;
    }
    Status = -1073741823;
  }
  else
  {
    v25 = byte_1C00701BA;
    v26 = byte_1C00701BA;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v25 = (const char *)DeviceExtension[71];
      if ( (v10 & 0x400000000000LL) != 0 )
        v26 = (const char *)DeviceExtension[72];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x2Eu,
        (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
        (char)a2,
        (char)DeviceExtension,
        v25,
        v26);
    Status = -1073741436;
  }
LABEL_28:
  if ( (DeviceExtension[1] & 0x2000000) != 0 )
    KeBugCheckEx(0xA5u, 2uLL, (ULONG_PTR)DeviceExtension, 0LL, (ULONG_PTR)a2);
LABEL_16:
  a2->IoStatus.Status = Status;
  v15 = 0LL;
  if ( Status >= 0 )
    v15 = v32;
  a2->IoStatus.Information = v15;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v16 = 0x200000000000LL;
    v3 = (char)DeviceExtension;
    if ( (DeviceExtension[1] & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)DeviceExtension[71];
      v16 = 0x400000000000LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v16, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x31u,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)a2,
      IrpText,
      Status,
      v3,
      v8,
      v18);
  }
  return (unsigned int)Status;
}
