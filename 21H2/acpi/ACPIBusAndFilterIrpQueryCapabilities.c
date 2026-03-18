/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNSObjectType @ 0x1C0001738 (AMLIGetNSObjectType.c)
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGetD3Policy @ 0x1C0009798 (ACPIGetD3Policy.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     ACPIDockIsDockDevice @ 0x1C000A480 (ACPIDockIsDockDevice.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0094310 (ACPIProcessPhysicalDeviceLocation.c)
 *     AcpiCheckSecureDevice @ 0x1C0094A0C (AcpiCheckSecureDevice.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0094A68 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryCapabilities(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // bl
  char v7; // r12
  __int64 DeviceExtension; // rax
  __int64 v10; // rcx
  ULONG_PTR v11; // rsi
  __int64 *v12; // r12
  _DWORD *v13; // rdi
  __int64 *v14; // rax
  volatile signed __int32 *v15; // r14
  const char *v16; // r15
  int DeviceCapabilities; // r14d
  __int64 v18; // rax
  char *IrpText; // rax
  const char *v20; // r8
  __int64 v21; // r10
  int v23; // ecx
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  void *v29; // rdx
  void *v30; // rcx
  unsigned __int16 v31; // r9
  __int64 v32; // rax
  bool v33; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int8 v34; // [rsp+61h] [rbp-48h]
  int v35; // [rsp+64h] [rbp-45h] BYREF
  __int64 v36; // [rsp+68h] [rbp-41h]
  __int64 v37; // [rsp+70h] [rbp-39h] BYREF
  __int128 *v38; // [rsp+78h] [rbp-31h] BYREF
  __int64 v39; // [rsp+80h] [rbp-29h] BYREF
  __int64 v40; // [rsp+88h] [rbp-21h] BYREF
  __int64 v41; // [rsp+90h] [rbp-19h] BYREF
  __int128 v42; // [rsp+98h] [rbp-11h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-1h] BYREF
  int v44; // [rsp+B8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v41 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  v35 = 0;
  v7 = a2;
  v42 = 0LL;
  v38 = 0LL;
  v44 = 0;
  v34 = *(_BYTE *)(v4 + 1);
  v36 = a2;
  v33 = 0;
  v43 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v11 = DeviceExtension;
  if ( !DeviceExtension )
  {
    v16 = (const char *)&unk_1C006FB8B;
    DeviceCapabilities = -1073741823;
    goto LABEL_33;
  }
  v12 = *(__int64 **)(DeviceExtension + 760);
  if ( (*(_DWORD *)(DeviceExtension + 1000) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v33) >= 0 && v33 )
    *(_QWORD *)(v11 + 8) &= ~0x800uLL;
  v13 = *(_DWORD **)(v4 + 8);
  if ( !_bittest64((const signed __int64 *)(v11 + 8), 0x27u) )
  {
    v14 = AMLIGetNamedChild(v12, 1447907935);
    v15 = (volatile signed __int32 *)v14;
    if ( v14 )
    {
      if ( (unsigned int)AMLIGetNSObjectType((__int64)v14) == 8 )
      {
        if ( (int)ACPIGet(v11, 1447907935, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v37, 0LL) < 0 )
          v13[1] |= 0x10u;
        else
          v13[1] = (v37 != 0 ? 0x10 : 0) | v13[1] & 0xFFFFFFEF;
        AMLIDereferenceHandleEx(v15);
      }
      else
      {
        v13[1] |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice() )
    {
      if ( AMLIIsNamedChildPresent(v12, 810173791) )
      {
        v26 = v13[1];
        if ( (v26 & 0x10) == 0 )
          v26 |= 0x40000u;
        v13[1] = v26 | 0x18;
      }
      if ( AMLIIsNamedChildPresent(v12, 826951007)
        || AMLIIsNamedChildPresent(v12, 843728223)
        || AMLIIsNamedChildPresent(v12, 860505439)
        || AMLIIsNamedChildPresent(v12, 877282655) )
      {
        v27 = v13[1];
        if ( (v27 & 0x10) == 0 )
          v27 |= 0x40000u;
        v13[1] = v27 | 0x10010;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v12, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  v16 = (const char *)&unk_1C006FB8B;
  DeviceCapabilities = ACPIGet(v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
  v10 = 0x400000000000LL;
  if ( DeviceCapabilities >= 0 )
  {
    *(_QWORD *)&v42 = v11;
    v38 = &v42;
    DWORD2(v42) = 8;
    if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v38, 1LL, &v35) >= 0 && v35 == 2 )
      goto LABEL_17;
    if ( _bittest64((const signed __int64 *)(v11 + 8), 0x36u) )
    {
      if ( !a4 )
      {
        v23 = v13[1];
        if ( (AcpiOverrideAttributes & 2) != 0 )
          v24 = v23 | 0x4000;
        else
          v24 = v23 & 0xFFFFBFFF;
        v13[1] = v24;
      }
    }
    else if ( !AMLIIsNamedChildPresent(v12, 1397900127) || AMLIIsNamedChildPresent(v12, 1397904223) )
    {
      if ( a4 )
LABEL_17:
        v13[1] &= ~0x4000u;
    }
    else
    {
      v13[1] |= 0x4000u;
    }
    if ( (v39 & 4) == 0 )
      v13[1] |= 0x20000u;
    if ( AMLIIsNamedChildPresent(v12, 1314214751)
      && (int)ACPIGet(v11, 1314214751, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v40, 0LL) >= 0 )
    {
      v13[3] = v40;
    }
    if ( AMLIIsNamedChildPresent(v12, 1380204895) )
    {
      DeviceCapabilities = ACPIGet(v11, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v41, 0LL);
      if ( DeviceCapabilities < 0 )
      {
        v28 = *(_QWORD *)(v11 + 8);
        v29 = &unk_1C006FB8B;
        v30 = &unk_1C006FB8B;
        if ( (v28 & 0x200000000000LL) != 0 )
        {
          v29 = *(void **)(v11 + 608);
          if ( (v28 & 0x400000000000LL) != 0 )
            v30 = *(void **)(v11 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v31 = 13;
        goto LABEL_76;
      }
      v13[2] = v41;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(v11);
    if ( DeviceCapabilities >= 0 )
    {
      if ( (unsigned __int8)AcpiCheckSecureDevice(v11) )
        v13[1] |= 0x100000u;
      if ( !a4 )
      {
        v13[1] |= 0x80u;
        v25 = v13[1] ^ ((unsigned __int16)v13[1] ^ (unsigned __int16)((unsigned __int64)*(unsigned int *)(v11 + 8) >> 9)) & 0x100;
        v13[1] = v25;
        v13[1] = v25 & 0xFFFFFFBF | (*(_QWORD *)(v11 + 616) != 0LL ? 0x40 : 0);
      }
      if ( (int)ACPIProcessPhysicalDeviceLocation(v11, (__int64)&v43, 0LL) >= 0 && (v43 & 0x7F) != 0 )
      {
        if ( (BYTE8(v43) & 1) == 0 )
          v13[1] |= 0x40000u;
        if ( SDWORD2(v43) < 0 )
          v13[1] |= 0x40000u;
      }
      DeviceCapabilities = 0;
      goto LABEL_31;
    }
    v32 = *(_QWORD *)(v11 + 8);
    v29 = &unk_1C006FB8B;
    v30 = &unk_1C006FB8B;
    if ( (v32 & 0x200000000000LL) != 0 )
    {
      v29 = *(void **)(v11 + 608);
      if ( (v32 & 0x400000000000LL) != 0 )
        v30 = *(void **)(v11 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v31 = 14;
LABEL_76:
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      v31,
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      DeviceCapabilities,
      v11,
      (__int64)v29,
      (__int64)v30);
LABEL_31:
    v10 = 0x400000000000LL;
  }
  v18 = *(_QWORD *)(v11 + 8);
  v7 = v36;
  v5 = v11;
  if ( (v18 & 0x200000000000LL) != 0 && (v18 & 0x400000000000LL) != 0 )
    v16 = *(const char **)(v11 + 616);
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v10, v34);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xFu,
      v21,
      v7,
      IrpText,
      DeviceCapabilities,
      v5,
      v20,
      v16);
  }
  return (unsigned int)DeviceCapabilities;
}
