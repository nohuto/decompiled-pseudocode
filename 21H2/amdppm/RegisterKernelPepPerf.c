/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0031710
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001650 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001AD4 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     PepNotifyPerfConstraints @ 0x1C000D750 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C002DEB8 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0032390 (GetPerfDomain.c)
 *     PepTranslateLimitReason @ 0x1C00363F4 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  void (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  char *v5; // r13
  int v6; // edi
  int PerfDomain; // eax
  _BYTE *v8; // r15
  SIZE_T v9; // rdi
  char *PoolWithTag; // rax
  char *v11; // r12
  _DWORD *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int16 v15; // r9
  unsigned int v16; // edi
  unsigned int v17; // r12d
  int v18; // eax
  _QWORD *v19; // rax
  int v20; // edx
  char *v21; // rax
  bool v22; // al
  bool v23; // al
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r10
  int v31; // r14d
  unsigned int v32; // eax
  _QWORD *v33; // r10
  __int64 v34; // r10
  _QWORD *v35; // r11
  _QWORD *v36; // r11
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // ecx
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // ecx
  void *v44; // rax
  __int64 v45; // r10
  int v47; // [rsp+30h] [rbp-48h]
  _DWORD *v48; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  _OWORD v50[3]; // [rsp+48h] [rbp-30h] BYREF
  int v51; // [rsp+C0h] [rbp+48h]
  int v52; // [rsp+C8h] [rbp+50h] BYREF
  int v53; // [rsp+D0h] [rbp+58h]
  unsigned int v54; // [rsp+D8h] [rbp+60h]

  v48 = 0LL;
  v2 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v52 = 0;
  memset(v50, 0, 32);
  v2(WdfDriverGlobals, qword_1C00143F8, 0LL);
  v3 = *(_QWORD *)(a1 + 1176);
  v4 = 0LL;
  v5 = 0LL;
  v47 = *(_DWORD *)(v3 + 16);
  if ( v47 )
  {
    v53 = *(_DWORD *)(v3 + 52);
    v54 = (v53 != -1) + 1;
    PerfDomain = GetPerfDomain(a1, v50, &v52);
    v8 = *(_BYTE **)(a1 + 544);
    v51 = PerfDomain;
    if ( !v8 || !v8[48] )
      v8 = 0LL;
    v9 = (unsigned int)(40 * PerfDomain);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_9;
    memset(PoolWithTag, 0, v9);
    ResetEnumerationContext((__int64 *)v50);
    v11 = v5 + 8;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v50, &v48) )
    {
      v12 = v48;
      *((_QWORD *)v11 + 1) = *((_QWORD *)v48 + 138);
      *(_QWORD *)v11 = *((_QWORD *)v12 + 147);
      v6 = PepNotifyPerfConstraints(a1, (_DWORD *)v11 + 5, (_DWORD *)v11 + 4);
      if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_65;
        v15 = 47;
        goto LABEL_19;
      }
      v13 = *((_DWORD *)v11 + 5);
      v14 = *(_DWORD *)(v3 + 4);
      if ( v13 > v14 || v13 < *(_DWORD *)(v3 + 12) )
      {
        v6 = -1073741811;
        goto LABEL_65;
      }
      *((_DWORD *)v11 + 6) = 100 * v13 / v14;
      v11 += 40;
    }
    v16 = v54;
    v17 = (32 * v51 + 439) & 0xFFFFFFF8;
    v18 = v51 * v54;
    v54 = v17 + 24 * v54;
    Size = v54 + 8 * v18;
    v19 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
    v4 = v19;
    if ( v19 )
    {
      memset(v19, 0, Size);
      if ( *(_BYTE *)(a1 + 1122) )
        v4[48] = PepParkPreference;
      if ( (*(_QWORD *)(a1 + 272) & 0x10000000000LL) != 0 )
      {
        v4[49] = PepParkMask;
        v4[50] = PepPerfCheckComplete;
        v4[9] = *(_QWORD *)(a1 + 1104);
      }
      v20 = v52;
      v4[52] = v4 + 54;
      *(_DWORD *)v4 = 62;
      v4[51] = (char *)v4 + v17;
      v21 = (char *)v4 + v54;
      *((_DWORD *)v4 + 4) = v51;
      v4[53] = v21;
      *((_DWORD *)v4 + 9) = v16;
      *((_WORD *)v4 + 2) = v20;
      if ( *(_BYTE *)(v3 + 32) )
      {
        v4[42] = PepPerfStateControlHandler;
        v4[41] = PepPerfStateSelectionHandler;
        if ( (*(_DWORD *)(a1 + 272) & 0x400000) != 0 && (v20 == 254 || v51 == 1) && v8 && v8[58] )
        {
          *((_BYTE *)v4 + 11) = 1;
          v22 = (*(_QWORD *)(a1 + 272) & 0x400000000LL) == 0 || !v8[57];
          *((_BYTE *)v4 + 12) = v22;
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
      v23 = v8 && v8[59];
      *((_BYTE *)v4 + 7) = v23;
      *((_BYTE *)v4 + 52) = 0;
      *((_DWORD *)v4 + 5) = v47;
      *((_DWORD *)v4 + 6) = *(_DWORD *)(v3 + 20);
      v24 = *(_DWORD *)(v3 + 24);
      *((_DWORD *)v4 + 7) = v24;
      v25 = *(_DWORD *)(v3 + 28);
      if ( !v24 )
        v24 = 1;
      *((_DWORD *)v4 + 7) = v24;
      if ( !v25 )
        v25 = 1;
      *((_DWORD *)v4 + 8) = v25;
      v4[7] = *(unsigned int *)(v3 + 12);
      v4[8] = *(unsigned int *)(v3 + 4);
      if ( *(_BYTE *)(v3 + 32) )
        v26 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 4LL);
      else
        v26 = (unsigned int)(*(_DWORD *)v3 * v47 + (*(_DWORD *)(v3 + 4) >> 1)) / *(_DWORD *)(v3 + 4);
      *((_DWORD *)v4 + 11) = v26;
      v27 = v4[52];
      ResetEnumerationContext((__int64 *)v50);
      v28 = EnumerateNextDevice((__int64 *)v50, &v48);
      v31 = v53;
      while ( !v28 )
      {
        v32 = PepTranslateLimitReason(*(unsigned int *)(v30 + 24), v29);
        InitCommonPerfStateContext(v48, v33, v27, *((_DWORD *)v33 + 8), v32);
        *v35 = v34;
        v36 = v35 + 1;
        if ( v31 != -1 )
          *v36 = v34;
        v27 += 32LL;
        v28 = EnumerateNextDevice((__int64 *)v50, &v48);
      }
      v37 = *(unsigned int *)(v3 + 48);
      v38 = v4[51];
      *(_QWORD *)(v38 + 8) = 100LL;
      *(_BYTE *)(v38 + 16) = *(_BYTE *)(v3 + 8 * v37 + 56) & 1;
      v39 = *(_DWORD *)(v3 + 8 * v37 + 56) & 6;
      *(_BYTE *)(v38 + 17) = v39 == 2;
      *(_BYTE *)(v38 + 18) = (*(_DWORD *)(v3 + 8 * v37 + 56) & 0x80) != 0;
      v40 = PepInstantaneousFrequencyRead;
      if ( v39 == 2 )
        v40 = PepDifferentialFrequencyRead;
      *(_QWORD *)v38 = v40;
      *((_DWORD *)v4 + 9) = 1;
      if ( v31 != -1 )
      {
        v41 = *(unsigned int *)(v3 + 52);
        v42 = v4[51];
        *(_DWORD *)(v42 + 32) = 100;
        *(_DWORD *)(v42 + 36) = 1;
        *(_BYTE *)(v42 + 40) = *(_BYTE *)(v3 + 8 * v41 + 56) & 1;
        v43 = *(_DWORD *)(v3 + 8 * v41 + 56) & 6;
        *(_BYTE *)(v42 + 41) = v43 == 2;
        *(_BYTE *)(v42 + 42) = (*(_DWORD *)(v3 + 8 * v41 + 56) & 0x80) != 0;
        v44 = PepInstantaneousPerfRead;
        if ( v43 == 2 )
          v44 = PepDifferentialPerfRead;
        *(_QWORD *)(v42 + 24) = v44;
        ++*((_DWORD *)v4 + 9);
      }
      v6 = ((__int64 (__fastcall *)(_QWORD *))qword_1C0014610)(v4);
      if ( v6 >= 0 )
      {
        ResetEnumerationContext((__int64 *)v50);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v50, &v48) )
        {
          v5 = 0LL;
          do
            *((_QWORD *)v48 + 148) = v45;
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v50, &v48) );
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 48;
LABEL_19:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          v15,
          (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
          v6);
      }
    }
    else
    {
LABEL_9:
      v6 = -1073741670;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x2Eu,
        (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids);
    v6 = -1073741823;
  }
LABEL_65:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00143F8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  return (unsigned int)v6;
}
