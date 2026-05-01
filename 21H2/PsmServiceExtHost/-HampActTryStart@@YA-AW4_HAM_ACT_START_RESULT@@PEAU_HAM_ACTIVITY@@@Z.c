/*
 * XREFs of ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019B80
 * Callers:
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017DB0 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18001F090 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800042DC (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180004DD4 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800082A8 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800178E8 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001D460 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001F240 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180038478 (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180047B16 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180047BFC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180086088 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampActTryStart(__int64 a1)
{
  __int64 v1; // rdi
  DWORD v3; // r14d
  __int64 v4; // r15
  _QWORD *Value; // rsi
  __int64 v6; // r14
  DWORD CurrentThreadId; // eax
  DWORD v8; // ecx
  bool v9; // si
  _QWORD *v10; // rax
  bool v11; // zf
  unsigned int v12; // r15d
  DWORD v13; // r14d
  __int64 v14; // r13
  _QWORD *v15; // rsi
  char v16; // si
  char *v17; // rax
  DWORD v18; // r14d
  __int64 v19; // r13
  _QWORD *v20; // rsi
  unsigned int v21; // esi
  _QWORD *v22; // rax
  struct _RM_HAM_ACTIVITY_HOST *v23; // rcx
  int v24; // eax
  int v25; // edx
  unsigned __int64 v26; // rcx
  int v27; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v28; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v29; // rcx
  __int64 v30; // rax
  __int128 v31; // xmm1
  struct _RM_HAM_ACTIVITY_HOST *v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rcx
  char v36[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v37[4]; // [rsp+44h] [rbp-BCh] BYREF
  struct _HAM_ACTIVITY *v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v40; // [rsp+70h] [rbp-90h]
  _DWORD v41[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+98h] [rbp-68h]
  char v45[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  _OWORD Buf2[2]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD Buf1[2]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v50[32]; // [rsp+108h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( (*(_QWORD *)(v1 + 648) & 0x20000000000000LL) != 0 && (*(_DWORD *)(a1 + 112) & 0x400) != 0 )
    return 14;
  v3 = HampLockTrackerId;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 776) + 88LL) + 88LL) + 160LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  v6 = v4 + 96;
  RtlAcquireSRWLockExclusive(v4 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v8 = HampLockTrackerId;
  *(_DWORD *)(v4 + 104) = CurrentThreadId;
  v9 = (*(_DWORD *)(v4 + 132) & 2) != 0;
  if ( v8 != -1 )
  {
    v10 = TlsGetValue(v8);
    if ( (*(_DWORD *)v10 & 0x100LL) == 0 )
      __int2c();
    v11 = v10[9]-- == 1LL;
    if ( v11 )
      *v10 &= ~0x100uLL;
  }
  v12 = 0;
  *(_DWORD *)(v6 + 8) = 0;
  RtlReleaseSRWLockExclusive(v6);
  if ( v9 )
    return 7;
  v13 = HampLockTrackerId;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 776) + 88LL) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    v15 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v15 |= 0x80uLL;
    ++v15[8];
  }
  RtlAcquireSRWLockShared(v14 + 168);
  v16 = *(_BYTE *)(v14 + 192) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v17 = (char *)TlsGetValue(HampLockTrackerId);
    if ( *v17 >= 0 )
      __int2c();
    v11 = (*((_QWORD *)v17 + 8))-- == 1LL;
    if ( v11 )
      *(_QWORD *)v17 &= ~0x80uLL;
  }
  RtlReleaseSRWLockShared(v14 + 168);
  if ( v16 )
    return 7;
  if ( (*(_DWORD *)(a1 + 544) & 8) != 0 )
    return 6;
  if ( (*(_DWORD *)(a1 + 544) & 0xC0u) >= 0x40 )
    return 5;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)v1,
    (union _RM_OPTIMIZATION_STATE *)v36,
    (union _RM_OPTIMIZATION_STATE *)v37);
  if ( ((v36[0] & 8) != 0 || (v37[0] & 8) != 0) && (*(_QWORD *)(v1 + 648) & 0x80000000000LL) != 0 )
    return 8;
  if ( *(_BYTE *)(a1 + 549) < 2u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 16LL);
    v33 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 2;
    HampHostUpdateActivityState(v33);
  }
  v18 = HampLockTrackerId;
  v19 = *(_QWORD *)(v1 + 776);
  if ( HampLockTrackerId != -1 )
  {
    v20 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v20 |= 0x20uLL;
    ++v20[6];
  }
  RtlAcquireSRWLockShared(v19 + 576);
  v21 = (*(_DWORD *)(v19 + 608) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v22 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v22 & 0x20) == 0 )
      __int2c();
    v11 = v22[6]-- == 1LL;
    if ( v11 )
      *v22 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared(v19 + 576);
  if ( v21 < ((*(_DWORD *)(a1 + 112) >> 23) & 3u) )
    return 9;
  if ( *(_BYTE *)(a1 + 549) < 3u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 24LL);
    v23 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 3;
    HampHostUpdateActivityState(v23);
  }
  if ( (*(_DWORD *)(a1 + 544) & 0x10) == 0 )
  {
    v24 = RmpImportanceToRequiredExecutionSpeed(*(_DWORD *)(a1 + 424));
    v26 = *(_DWORD *)(a1 + 480) & 3;
    if ( (int)v26 <= v24 )
      v26 = (unsigned int)v24;
    if ( (int)v26 >= 2 )
    {
      if ( (*(_QWORD *)(v1 + 648) & 0x2000000000000LL) != 0 )
      {
        if ( HampHostIsResumed((struct _RM_HAM_ACTIVITY_HOST *)v1) )
          goto LABEL_44;
        v25 = *(_DWORD *)(a1 + 544);
        v34 = 500;
      }
      else
      {
        v34 = 2000;
      }
      *(_DWORD *)(a1 + 544) = v25 | 0x10;
      if ( (int)RmpPowerBoostStartTimedBoost((struct _RM_SERVICE_GLOBALS *)v26, v34) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
    }
  }
LABEL_44:
  v27 = *(_DWORD *)(a1 + 112);
  if ( (v27 & 0x400) != 0 && v37[0] < 0 && v36[0] >= 0 )
    return 11;
  if ( *(_BYTE *)(a1 + 549) < 4u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 32LL);
    v28 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 4;
    HampHostUpdateActivityState(v28);
    v27 = *(_DWORD *)(a1 + 112);
  }
  if ( (v27 & 0x1800) == 0 && (*(_DWORD *)(v1 + 648) & 0x30000) != 0 )
    return 10;
  if ( *(_BYTE *)(a1 + 549) < 5u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 40LL);
    v29 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 5;
    HampHostUpdateActivityState(v29);
    v27 = *(_DWORD *)(a1 + 112);
  }
  if ( (v27 & 0x400) != 0 )
  {
    if ( v36[0] < 0 )
      return 12;
  }
  else if ( (v27 & 0x800) != 0
         && (((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 648LL) & 0xE0000000) - 0x80000000LL) & 0xFFFFFFFFDFFFFFFFuLL) == 0 )
  {
    HampActInvalidateAndNotify(a1, 6912);
    return 3;
  }
  v30 = *(_QWORD *)(v1 + 648);
  if ( (v30 & 0x80000000000000LL) == 0
    && (v30 & 0x40000000000000LL) == 0
    && ((HampHostComputeStaticEnforcementSettings(
           (struct _RM_HAM_ACTIVITY_HOST *)v1,
           (struct _RM_ENFORCEMENT_SETTINGS *)&v39,
           (struct _RM_COMMIT_THRESHOLDS *)v50,
           (struct _RM_COMMIT_THRESHOLDS *)v45,
           v38),
         (*(_BYTE *)(v1 + 655) & 1) == 0)
     || SDWORD2(v40) < 2 && (BYTE12(v40) & 0x70) == 0 && (BYTE12(v40) & 8) == 0)
    && *(struct _HAM_ACTIVITY **)(v1 + 1000) == v38[0]
    && (v31 = *(_OWORD *)(v1 + 1120),
        Buf1[0] = 0uLL,
        Buf1[1] = v31,
        Buf2[0] = 0uLL,
        Buf2[1] = v40,
        !memcmp_0(Buf1, Buf2, 0x20uLL))
    && v47 == *(_QWORD *)(v1 + 848)
    && v46 == *(_QWORD *)(v1 + 856)
    && !memcmp_0(v50, (const void *)(v1 + 872), 0x20uLL)
    || (*(_DWORD *)(a1 + 112) & 0x1000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 380) != 5 )
    {
      v35 = *(_QWORD *)(a1 + 32);
      v41[1] = *(_DWORD *)(a1 + 384);
      v43 = a1 + 124;
      v42 = 0LL;
      v44 = 0LL;
      v41[0] = 1;
      if ( (int)HampSystemActivationClientActivate(*(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFFCuLL) + 136), v41, a1) < 0 )
      {
        HampActInvalidateAndNotify(a1, 6912);
        return 2;
      }
      *(struct _HAM_ACTIVITY **)(a1 + 504) = v38[1];
    }
    HampActStart((struct _HAM_ACTIVITY *)a1);
  }
  else
  {
    return 13;
  }
  return v12;
}
