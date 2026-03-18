/*
 * XREFs of ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0093BA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_ssssssqss @ 0x1C00074DC (WPP_RECORDER_SF_ssssssqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0051EC8 (AcpiDeviceResetInvokeReset.c)
 *     AcpiDeviceResetMarkDeviceRemoved @ 0x1C0052000 (AcpiDeviceResetMarkDeviceRemoved.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryPnpDeviceState(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v6; // r15
  __int64 DeviceExtension; // rax
  __int64 v8; // rbx
  bool v9; // si
  int v10; // r14d
  __int64 v11; // rcx
  char v12; // si
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rax
  const char *v16; // rsi
  const char *v17; // rbp
  const char *v18; // r11
  __int64 v19; // rax
  const char *v20; // r10
  const char *v21; // r9
  const char *v22; // r8
  const char *v23; // rdx
  const char *v24; // rcx
  const char *v25; // rax
  char *IrpText; // rax
  const char *v27; // r8
  __int64 v29; // [rsp+20h] [rbp-78h]
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF

  v30 = 0LL;
  v6 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = DeviceExtension;
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
    v9 = 0;
  else
    v9 = AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 760), 1096045407);
  v10 = ACPIGet(v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v30, 0LL);
  if ( v10 < 0 )
    goto LABEL_27;
  v11 = *(_QWORD *)(v8 + 8);
  if ( (v11 & 0x40000000) != 0 || (v11 & 0x20000000) != 0 )
  {
    *(_QWORD *)(a2 + 56) |= 2uLL;
  }
  else if ( v9 || !a4 )
  {
    *(_QWORD *)(a2 + 56) &= ~2uLL;
  }
  if ( _bittest64((const signed __int64 *)(v8 + 8), 0x37u) )
  {
    *(_QWORD *)(a2 + 56) |= 4uLL;
  }
  else if ( v9 && !a4 )
  {
    *(_QWORD *)(a2 + 56) &= ~4uLL;
  }
  if ( (*(_QWORD *)(v8 + 8) & 0x8001008040000LL) != 0 )
  {
    v13 = (*(_QWORD *)(v8 + 8) & 0x204000LL) == 0x200000;
LABEL_24:
    if ( !v13 )
      goto LABEL_26;
LABEL_25:
    *(_QWORD *)(a2 + 56) |= 0x20uLL;
    goto LABEL_26;
  }
  if ( !a4 )
  {
    v12 = 1;
    if ( (*(_DWORD *)(v8 + 1000) & 0x40000) == 0
      && (!AMLIIsNamedChildPresent(*(__int64 **)(v8 + 760), 1397310559)
       && !AMLIIsNamedChildPresent(*(__int64 **)(v8 + 760), 861098079)
       && !AMLIIsNamedChildPresent(*(__int64 **)(v8 + 760), 810700895)
       || (*(_DWORD *)(v8 + 8) & 0x204000) == 0x200000LL) )
    {
      v12 = 0;
    }
    if ( *(int *)(v8 + 740) > 0 || *(int *)(v8 + 744) > 0 )
      goto LABEL_25;
    v13 = v12 == 0;
    goto LABEL_24;
  }
  if ( *(int *)(v8 + 740) > 0 || *(int *)(v8 + 744) > 0 )
    goto LABEL_25;
LABEL_26:
  v14 = *(_QWORD *)(v8 + 952);
  if ( v14
    && (*(_DWORD *)(*(_QWORD *)(v8 + 784) + 48LL) & 0x4000000) != 0
    && (*(_BYTE *)(v14 + 18) || AcpiDeviceResetMarkDeviceRemoved(v8)) )
  {
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    AcpiDeviceResetInvokeReset(v8, a2);
    v10 = 259;
  }
LABEL_27:
  v15 = *(_QWORD *)(v8 + 8);
  v16 = (const char *)&unk_1C006FB8B;
  v17 = (const char *)&unk_1C006FB8B;
  v18 = (const char *)&unk_1C006FB8B;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v17 = *(const char **)(v8 + 608);
    if ( (v15 & 0x400000000000LL) != 0 )
      v18 = *(const char **)(v8 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = *(_QWORD *)(a2 + 56);
    v20 = " NoDisable";
    v21 = " ResourceChanged";
    if ( (v19 & 0x20) == 0 )
      v20 = (const char *)&unk_1C006FB8B;
    v22 = " Removed";
    if ( (v19 & 0x10) == 0 )
      v21 = (const char *)&unk_1C006FB8B;
    v23 = " Failed";
    v24 = " NoShowInUi";
    if ( (v19 & 8) == 0 )
      v22 = (const char *)&unk_1C006FB8B;
    if ( (v19 & 4) == 0 )
      v23 = (const char *)&unk_1C006FB8B;
    if ( (v19 & 2) == 0 )
      v24 = (const char *)&unk_1C006FB8B;
    v13 = (v19 & 1) == 0;
    v25 = " Disabled";
    if ( v13 )
      v25 = (const char *)&unk_1C006FB8B;
    WPP_RECORDER_SF_ssssssqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v23,
      (__int64)v22,
      (__int64)v21,
      v29,
      v25,
      v24,
      v23,
      v22,
      v21,
      v20,
      v8,
      v17,
      v18);
    v15 = *(_QWORD *)(v8 + 8);
  }
  if ( (v15 & 0x200000000000LL) != 0 )
    v16 = *(const char **)(v8 + 608);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(0x200000000000LL, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x17u,
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      a2,
      IrpText,
      v10,
      v8,
      v16,
      v27);
  }
  return (unsigned int)v10;
}
