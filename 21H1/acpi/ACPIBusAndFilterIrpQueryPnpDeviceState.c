/*
 * XREFs of ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009E450
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     WPP_RECORDER_SF_ssssssqss @ 0x1C001DAEC (WPP_RECORDER_SF_ssssssqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C001EFC0 (AMLIIsNamedChildPresent.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0052838 (AcpiDeviceResetInvokeReset.c)
 *     AcpiDeviceResetMarkDeviceRemoved @ 0x1C005295C (AcpiDeviceResetMarkDeviceRemoved.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryPnpDeviceState(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v6; // r15
  __int64 DeviceExtension; // rbx
  bool v8; // si
  int v9; // r14d
  __int64 v10; // rcx
  char v11; // si
  bool v12; // zf
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rbp
  const char *v16; // r11
  __int64 v17; // rax
  const char *v18; // r10
  const char *v19; // r9
  const char *v20; // r8
  const char *v21; // rdx
  const char *v22; // rcx
  const char *v23; // rax
  char *IrpText; // rax
  const char *v25; // r8
  __int64 v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+A8h] [rbp+10h] BYREF

  v28 = 0LL;
  v6 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) == 0
    && AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 720), 1096045407);
  v9 = ACPIGet((__int64 *)DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v28, 0LL);
  if ( v9 < 0 )
    goto LABEL_26;
  v10 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v10 & 0x40000000) != 0 || (v10 & 0x20000000) != 0 )
  {
    *(_QWORD *)(a2 + 56) |= 2uLL;
  }
  else if ( v8 || !a4 )
  {
    *(_QWORD *)(a2 + 56) &= ~2uLL;
  }
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x80000000000000LL) != 0 )
  {
    *(_QWORD *)(a2 + 56) |= 4uLL;
  }
  else if ( v8 && !a4 )
  {
    *(_QWORD *)(a2 + 56) &= ~4uLL;
  }
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8001008040000LL) != 0 )
  {
    v12 = (*(_QWORD *)(DeviceExtension + 8) & 0x204000LL) == 0x200000;
    goto LABEL_23;
  }
  if ( !a4 )
  {
    v11 = 1;
    if ( (*(_DWORD *)(DeviceExtension + 960) & 0x40000) == 0
      && (!AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 720), 1397310559)
       && !AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 720), 861098079)
       && !AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 720), 810700895)
       || (*(_DWORD *)(DeviceExtension + 8) & 0x204000) == 0x200000LL) )
    {
      v11 = 0;
    }
    if ( *(int *)(DeviceExtension + 700) > 0 || *(int *)(DeviceExtension + 704) > 0 )
      v11 = 0;
    v12 = v11 == 0;
LABEL_23:
    if ( !v12 )
      goto LABEL_25;
LABEL_24:
    *(_QWORD *)(a2 + 56) |= 0x20uLL;
    goto LABEL_25;
  }
  if ( *(int *)(DeviceExtension + 700) > 0 || *(int *)(DeviceExtension + 704) > 0 )
    goto LABEL_24;
LABEL_25:
  if ( *(_QWORD *)(DeviceExtension + 912)
    && (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 744) + 48LL) & 0x4000000) != 0
    && AcpiDeviceResetMarkDeviceRemoved(DeviceExtension) )
  {
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    AcpiDeviceResetInvokeReset(DeviceExtension, a2);
    v9 = 259;
  }
LABEL_26:
  v13 = *(_QWORD *)(DeviceExtension + 8);
  v14 = byte_1C00701BA;
  v15 = byte_1C00701BA;
  v16 = byte_1C00701BA;
  if ( (v13 & 0x200000000000LL) != 0 )
  {
    v15 = *(const char **)(DeviceExtension + 568);
    if ( (v13 & 0x400000000000LL) != 0 )
      v16 = *(const char **)(DeviceExtension + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(_QWORD *)(a2 + 56);
    v18 = " NoDisable";
    v19 = " ResourceChanged";
    if ( (v17 & 0x20) == 0 )
      v18 = byte_1C00701BA;
    v20 = " Removed";
    if ( (v17 & 0x10) == 0 )
      v19 = byte_1C00701BA;
    v21 = " Failed";
    v22 = " NoShowInUi";
    if ( (v17 & 8) == 0 )
      v20 = byte_1C00701BA;
    if ( (v17 & 4) == 0 )
      v21 = byte_1C00701BA;
    if ( (v17 & 2) == 0 )
      v22 = byte_1C00701BA;
    v12 = (v17 & 1) == 0;
    v23 = " Disabled";
    if ( v12 )
      v23 = byte_1C00701BA;
    WPP_RECORDER_SF_ssssssqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v21,
      (__int64)v20,
      (__int64)v19,
      v27,
      v23,
      v22,
      v21,
      v20,
      v19,
      v18,
      DeviceExtension,
      v15,
      v16);
    v13 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v13 & 0x200000000000LL) != 0 )
    v14 = *(const char **)(DeviceExtension + 568);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(0x200000000000LL, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x17u,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      a2,
      IrpText,
      v9,
      DeviceExtension,
      v14,
      v25);
  }
  return (unsigned int)v9;
}
