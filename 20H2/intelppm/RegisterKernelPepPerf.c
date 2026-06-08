/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0037A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     PepNotifyPerfConstraints @ 0x1C00100F0 (PepNotifyPerfConstraints.c)
 *     InitCommonPerfStateContext @ 0x1C00263A8 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0026628 (GetPerfDomain.c)
 *     PepTranslateLimitReason @ 0x1C003AE9C (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  void (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  char *v5; // r13
  int v6; // edi
  int v7; // edi
  int PerfDomain; // eax
  _BYTE *v9; // r15
  SIZE_T v10; // r12
  char *PoolWithTag; // rax
  char *v12; // r12
  _DWORD *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  _QWORD *v17; // rax
  int v18; // edx
  char *v19; // rax
  unsigned __int16 v20; // r9
  bool v21; // al
  bool v22; // al
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  __int64 v26; // r14
  _QWORD *v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r11
  int v31; // r15d
  unsigned int v32; // eax
  _QWORD *v33; // r11
  __int64 v34; // r11
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // ecx
  void *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // ecx
  void *v42; // rax
  __int64 v43; // r11
  int v45; // [rsp+30h] [rbp-48h]
  _DWORD *v46; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  _OWORD v48[3]; // [rsp+48h] [rbp-30h] BYREF
  int v49; // [rsp+C0h] [rbp+48h]
  int v50; // [rsp+C8h] [rbp+50h] BYREF
  int v51; // [rsp+D0h] [rbp+58h]
  unsigned int v52; // [rsp+D8h] [rbp+60h]

  v46 = 0LL;
  v2 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v50 = 0;
  memset(v48, 0, 32);
  v2(WdfDriverGlobals, qword_1C001C3E8, 0LL);
  v3 = *(_QWORD *)(a1 + 1176);
  v4 = 0LL;
  v5 = 0LL;
  v45 = *(_DWORD *)(v3 + 16);
  if ( !v45 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x2Eu,
        (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids);
    v6 = -1073741823;
    goto LABEL_66;
  }
  v51 = *(_DWORD *)(v3 + 52);
  v7 = (v51 != -1) + 1;
  v52 = v7;
  PerfDomain = GetPerfDomain(a1, (__int64)v48, &v50);
  v9 = *(_BYTE **)(a1 + 544);
  v49 = PerfDomain;
  if ( !v9 || !v9[48] )
    v9 = 0LL;
  v10 = (unsigned int)(40 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_9:
    v6 = -1073741670;
    goto LABEL_66;
  }
  memset(PoolWithTag, 0, v10);
  ResetEnumerationContext((__int64 *)v48);
  if ( (unsigned int)EnumerateNextDevice((__int64 *)v48, &v46) )
  {
LABEL_17:
    v16 = (32 * v49 + 439) & 0xFFFFFFF8;
    v52 = v16 + 24 * v7;
    Size = v52 + 8 * v49 * v7;
    v17 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
    v4 = v17;
    if ( !v17 )
      goto LABEL_9;
    memset(v17, 0, Size);
    if ( *(_BYTE *)(a1 + 1122) )
      v4[48] = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 272) & 0x10000000000LL) != 0 )
    {
      v4[49] = PepParkMask;
      v4[50] = PepPerfCheckComplete;
      v4[9] = *(_QWORD *)(a1 + 1104);
    }
    v18 = v50;
    v4[52] = v4 + 54;
    *(_DWORD *)v4 = 62;
    v4[51] = (char *)v4 + v16;
    v19 = (char *)v4 + v52;
    *((_DWORD *)v4 + 4) = v49;
    v4[53] = v19;
    *((_DWORD *)v4 + 9) = v7;
    *((_WORD *)v4 + 2) = v18;
    if ( *(_BYTE *)(v3 + 32) )
    {
      v4[42] = PepPerfStateControlHandler;
      v4[41] = PepPerfStateSelectionHandler;
      if ( (*(_DWORD *)(a1 + 272) & 0x400000) != 0 && (v18 == 254 || v49 == 1) && v9 && v9[58] )
      {
        *((_BYTE *)v4 + 11) = 1;
        v21 = (*(_QWORD *)(a1 + 272) & 0x400000000LL) == 0 || !v9[57];
        *((_BYTE *)v4 + 12) = v21;
        *((_DWORD *)v4 + 12) = 1000;
      }
    }
    else
    {
      v4[42] = PepPerfControlHandler;
      v4[41] = PepPerfSelectionHandler;
      v4[33] = PepSetTimeWindow;
    }
    *((_BYTE *)v4 + 6) = 0;
    v22 = v9 && v9[59];
    *((_BYTE *)v4 + 7) = v22;
    *((_BYTE *)v4 + 52) = 0;
    *((_DWORD *)v4 + 5) = v45;
    *((_DWORD *)v4 + 6) = *(_DWORD *)(v3 + 20);
    v23 = *(_DWORD *)(v3 + 24);
    *((_DWORD *)v4 + 7) = v23;
    v24 = *(_DWORD *)(v3 + 28);
    if ( !v23 )
      v23 = 1;
    *((_DWORD *)v4 + 7) = v23;
    if ( !v24 )
      v24 = 1;
    *((_DWORD *)v4 + 8) = v24;
    v4[7] = *(unsigned int *)(v3 + 12);
    v4[8] = *(unsigned int *)(v3 + 4);
    if ( *(_BYTE *)(v3 + 32) )
      v25 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 4LL);
    else
      v25 = (unsigned int)(*(_DWORD *)v3 * v45 + (*(_DWORD *)(v3 + 4) >> 1)) / *(_DWORD *)(v3 + 4);
    *((_DWORD *)v4 + 11) = v25;
    v26 = v4[52];
    v27 = (_QWORD *)v4[53];
    ResetEnumerationContext((__int64 *)v48);
    v28 = EnumerateNextDevice((__int64 *)v48, &v46);
    v31 = v51;
    while ( !v28 )
    {
      v32 = PepTranslateLimitReason(*(unsigned int *)(v30 + 24), v29);
      InitCommonPerfStateContext(v46, v33, v26, *((_DWORD *)v33 + 8), v32);
      *v27++ = v34;
      if ( v31 != -1 )
        *v27++ = v34;
      v26 += 32LL;
      v28 = EnumerateNextDevice((__int64 *)v48, &v46);
    }
    v35 = *(unsigned int *)(v3 + 48);
    v36 = v4[51];
    *(_QWORD *)(v36 + 8) = 100LL;
    *(_BYTE *)(v36 + 16) = *(_BYTE *)(v3 + 8 * v35 + 56) & 1;
    v37 = *(_DWORD *)(v3 + 8 * v35 + 56) & 6;
    *(_BYTE *)(v36 + 17) = v37 == 2;
    *(_BYTE *)(v36 + 18) = (*(_DWORD *)(v3 + 8 * v35 + 56) & 0x80) != 0;
    v38 = PepInstantaneousFrequencyRead;
    if ( v37 == 2 )
      v38 = PepDifferentialFrequencyRead;
    *(_QWORD *)v36 = v38;
    *((_DWORD *)v4 + 9) = 1;
    if ( v31 != -1 )
    {
      v39 = *(unsigned int *)(v3 + 52);
      v40 = v4[51];
      *(_DWORD *)(v40 + 32) = 100;
      *(_DWORD *)(v40 + 36) = 1;
      *(_BYTE *)(v40 + 40) = *(_BYTE *)(v3 + 8 * v39 + 56) & 1;
      v41 = *(_DWORD *)(v3 + 8 * v39 + 56) & 6;
      *(_BYTE *)(v40 + 41) = v41 == 2;
      *(_BYTE *)(v40 + 42) = (*(_DWORD *)(v3 + 8 * v39 + 56) & 0x80) != 0;
      v42 = PepInstantaneousPerfRead;
      if ( v41 == 2 )
        v42 = PepDifferentialPerfRead;
      *(_QWORD *)(v40 + 24) = v42;
      ++*((_DWORD *)v4 + 9);
    }
    v6 = ((__int64 (__fastcall *)(_QWORD *))qword_1C001C600)(v4);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_66;
      v20 = 48;
LABEL_27:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v20,
        (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
        v6);
      goto LABEL_66;
    }
    ResetEnumerationContext((__int64 *)v48);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v48, &v46) )
    {
      v5 = 0LL;
      do
        *((_QWORD *)v46 + 148) = v43;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v48, &v46) );
    }
  }
  else
  {
    v12 = v5 + 8;
    while ( 1 )
    {
      v13 = v46;
      *((_QWORD *)v12 + 1) = *((_QWORD *)v46 + 138);
      *(_QWORD *)v12 = *((_QWORD *)v13 + 147);
      v6 = PepNotifyPerfConstraints(a1, (_DWORD *)v12 + 5, (_DWORD *)v12 + 4);
      if ( v6 < 0 )
        break;
      v14 = *((_DWORD *)v12 + 5);
      v15 = *(_DWORD *)(v3 + 4);
      if ( v14 > v15 || v14 < *(_DWORD *)(v3 + 12) )
      {
        v6 = -1073741811;
        goto LABEL_66;
      }
      *((_DWORD *)v12 + 6) = 100 * v14 / v15;
      v12 += 40;
      if ( (unsigned int)EnumerateNextDevice((__int64 *)v48, &v46) )
      {
        v7 = v52;
        goto LABEL_17;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 47;
      goto LABEL_27;
    }
  }
LABEL_66:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C3E8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  return (unsigned int)v6;
}
