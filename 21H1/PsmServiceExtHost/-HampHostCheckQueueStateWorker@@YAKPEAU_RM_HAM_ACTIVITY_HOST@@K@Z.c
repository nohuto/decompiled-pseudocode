/*
 * XREFs of ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CA10
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180005204 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180006EB8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006FE0 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x180009EB0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010720 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x180014660 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180017F70 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B090 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18001EF50 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001F680 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001FC50 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020CE0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180026A5C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800352C0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035518 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x180036AD0 (-HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003BD14 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800765F8 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007D890 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007E180 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007E434 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007FF10 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180082424 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800063F8 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180006418 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001D320 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800354DC (-HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800464F6 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800465DC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180073374 (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostCheckQueueStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v3; // rsi
  DWORD v4; // edi
  _QWORD *Value; // rbx
  unsigned int v6; // r12d
  __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // r14d
  DWORD v10; // edi
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdi
  bool v14; // bl
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // edi
  __int64 v19; // r13
  char v20; // bl
  _QWORD *v21; // r13
  unsigned int v22; // r13d
  _QWORD *v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r13
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int128 v28; // xmm1
  int v29; // ebx
  int v30; // edi
  __int64 v32; // rax
  __int64 v33; // rax
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v35; // rcx
  int v36; // eax
  DWORD dwTlsIndex; // [rsp+30h] [rbp-D0h]
  DWORD dwTlsIndexa; // [rsp+30h] [rbp-D0h]
  DWORD dwTlsIndexb; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+34h] [rbp-CCh]
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v42; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v46; // [rsp+50h] [rbp-B0h]
  char v47[8]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-A0h]
  struct _HAM_ACTIVITY *v49; // [rsp+68h] [rbp-98h] BYREF
  struct _HAM_ACTIVITY *v50; // [rsp+70h] [rbp-90h] BYREF
  __int128 v51; // [rsp+78h] [rbp-88h] BYREF
  __int128 v52; // [rsp+88h] [rbp-78h]
  __int128 v53; // [rsp+98h] [rbp-68h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-58h]
  _BYTE v55[16]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  _BYTE v58[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 v60; // [rsp+F0h] [rbp-10h]
  _OWORD Buf2[2]; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD Buf1[2]; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v63[2]; // [rsp+138h] [rbp+38h] BYREF
  _OWORD v64[2]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v65[32]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v66[32]; // [rsp+198h] [rbp+98h] BYREF

  v40 = a2 & 1;
  if ( (*((_BYTE *)a1 + 772) & 1) == 0 )
  {
    v6 = 0;
LABEL_66:
    v30 = v40;
    goto LABEL_67;
  }
  v3 = *((_QWORD *)a1 + 86);
  if ( v3 )
  {
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v3 + 8);
    v6 = 0;
    dwTlsIndex = 1;
    *(_DWORD *)(v3 + 16) = GetCurrentThreadId();
    v7 = *((_QWORD *)a1 + 86);
    v8 = *(_DWORD *)(v7 + 92) == 0;
    v42 = *(_QWORD *)(v7 + 104) < *((_QWORD *)a1 + 77);
    LODWORD(v43) = !v8;
  }
  else
  {
    v6 = 0;
    v42 = 0;
    LODWORD(v43) = 0;
    dwTlsIndex = 0;
  }
  LOWORD(v9) = 0;
  if ( (*((_BYTE *)a1 + 772) & 1) != 0 )
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v41, (union _RM_OPTIMIZATION_STATE *)v47);
    v10 = HampLockTrackerId;
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL);
    v46 = v11;
    if ( HampLockTrackerId != -1 )
    {
      v12 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v12 |= 0x40uLL;
      ++v12[7];
      v11 = v46;
    }
    v13 = v11 + 304;
    RtlAcquireSRWLockShared(v11 + 304);
    v14 = (*(_DWORD *)(v11 + 340) & 2) != 0;
    if ( HampLockTrackerId != -1 )
    {
      v15 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v15 & 0x40) == 0 )
        __int2c();
      v8 = v15[7]-- == 1LL;
      if ( v8 )
        *v15 &= ~0x40uLL;
    }
    RtlReleaseSRWLockShared(v13);
    if ( !v14 )
      goto LABEL_19;
    v35 = *((_QWORD *)a1 + 81);
    if ( (v35 & 0x20000000000000LL) != 0 )
      goto LABEL_19;
    if ( (v41 & 0x80u) != 0 || (v36 = 1, v47[0] < 0) )
      v36 = 0;
    if ( (v35 & 0x30000) != 0 || !v36 )
    {
LABEL_19:
      if ( v42 )
      {
        LOWORD(v9) = v41 & 0x188;
      }
      else
      {
        v16 = *((_QWORD *)a1 + 81);
        if ( (v16 & 0x10000000000LL) != 0 )
        {
          if ( (_DWORD)v43 )
            LOWORD(v9) = v41;
        }
        else
        {
          if ( v3 && *(_DWORD *)(v3 + 88) )
            v9 = v41 & 0x100 | 0x80;
          else
            v9 = 384;
          if ( (v16 & 0x2080000000000LL) == 0x2000000000000LL )
            v9 |= (v9 >> 5) & 8;
        }
      }
    }
  }
  else
  {
    v41 = 0;
  }
  if ( dwTlsIndex )
  {
    *(_DWORD *)(v3 + 16) = 0;
    RtlReleaseSRWLockExclusive(v3 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v17 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v17 & 8) == 0 )
        __int2c();
      v8 = v17[4]-- == 1LL;
      if ( v8 )
        *v17 &= ~8uLL;
    }
  }
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v44, (union _RM_OPTIMIZATION_STATE *)&v45);
  v18 = v44 & 0x188;
  v19 = *((_QWORD *)a1 + 97);
  v20 = v45 & 0x88;
  v43 = v19;
  dwTlsIndexa = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v21 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(dwTlsIndexa) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v21 |= 0x20uLL;
    ++v21[6];
    v19 = v43;
  }
  RtlAcquireSRWLockShared(v19 + 576);
  v22 = (*(_DWORD *)(v19 + 608) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v23 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v23 & 0x20) == 0 )
      __int2c();
    v8 = v23[6]-- == 1LL;
    if ( v8 )
      *v23 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared(v43 + 576);
  v46 = *((_QWORD *)a1 + 81) >> 62;
  v48 = v22;
  if ( (v9 & 0x188) != v18 )
    goto LABEL_81;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v43, (union _RM_OPTIMIZATION_STATE *)&v42);
  v24 = *((_QWORD *)a1 + 81);
  if ( ((v24 >> 16) & 3) != 0 )
  {
    switch ( (v24 >> 16) & 3 )
    {
      case 1uLL:
        if ( (v43 & 0x80u) == 0LL || v42 < 0 || (v24 & 0x40000000000LL) != 0 )
          goto LABEL_40;
        FirstActivity = HampHostGetFirstActivity(a1);
        if ( FirstActivity )
        {
          while ( (*((_BYTE *)FirstActivity + 544) & 0x28) != 0
               || !HampActIsStartedOrReachedPendState((__int64)FirstActivity, 5u)
               || (*((_DWORD *)FirstActivity + 28) & 0x2000) == 0 )
          {
            FirstActivity = HampHostGetNextActivity(FirstActivity);
            if ( !FirstActivity )
              goto LABEL_81;
          }
          goto LABEL_40;
        }
        break;
      case 2uLL:
        if ( ((v24 >> 52) & 1) != 0 )
          goto LABEL_40;
        break;
      case 3uLL:
        break;
      default:
        goto LABEL_40;
    }
LABEL_81:
    v40 = 1;
    goto LABEL_51;
  }
LABEL_40:
  if ( (v24 & 0x10000000000000LL) != 0 )
    goto LABEL_81;
  if ( (v24 & 0x80000000000000LL) != 0 )
  {
    v40 = 1;
    goto LABEL_51;
  }
  if ( (v24 & 0x40000000000000LL) != 0 )
    goto LABEL_81;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v51,
    (struct _RM_COMMIT_THRESHOLDS *)v65,
    (struct _RM_COMMIT_THRESHOLDS *)v55,
    &v49);
  v25 = *((_QWORD *)a1 + 81);
  if ( (v25 & 0x100000000000000LL) != 0 && (SDWORD2(v52) >= 2 || (BYTE12(v52) & 0x70) != 0 || (BYTE12(v52) & 8) != 0) )
    goto LABEL_81;
  if ( *((struct _HAM_ACTIVITY **)a1 + 125) != v49 )
    goto LABEL_81;
  v26 = *((_OWORD *)a1 + 70);
  Buf1[0] = 0uLL;
  Buf1[1] = v26;
  Buf2[0] = 0uLL;
  Buf2[1] = v52;
  if ( memcmp_0(Buf1, Buf2, 0x20uLL) )
    goto LABEL_81;
  if ( v57 != *((_QWORD *)a1 + 106) )
    goto LABEL_81;
  if ( v56 != *((_QWORD *)a1 + 107) )
    goto LABEL_81;
  if ( memcmp_0(v65, (char *)a1 + 872, 0x20uLL) )
    goto LABEL_81;
  if ( !(v25 >> 62) && !HampHostIsRunnable(a1) )
  {
    v33 = *((_QWORD *)a1 + 82);
    if ( (v33 & 1) != 0 || (v33 & 2) != 0 && (*((_QWORD *)a1 + 81) & 0x2000000000000LL) == 0 )
      goto LABEL_81;
  }
  if ( v46 > v48 )
    goto LABEL_81;
LABEL_51:
  v27 = *((_QWORD *)a1 + 81);
  if ( (v27 & 0x10000000000000LL) == 0
    || (v27 & 0xE0000000) == 0
    || (dwTlsIndexb = 1, (*((_QWORD *)a1 + 81) & 0xE0000000LL) == 0xA0000000LL) )
  {
    dwTlsIndexb = 0;
  }
  if ( (v27 & 0x80000000000000LL) != 0
    || (v27 & 0x40000000000000LL) != 0
    || (HampHostComputeStaticEnforcementSettings(
          a1,
          (struct _RM_ENFORCEMENT_SETTINGS *)&v53,
          (struct _RM_COMMIT_THRESHOLDS *)v66,
          (struct _RM_COMMIT_THRESHOLDS *)v58,
          &v50),
        (*((_QWORD *)a1 + 81) & 0x100000000000000LL) != 0)
    && (SDWORD2(v54) >= 2 || (BYTE12(v54) & 0x70) != 0 || (BYTE12(v54) & 8) != 0)
    || *((struct _HAM_ACTIVITY **)a1 + 125) != v50
    || (v28 = *((_OWORD *)a1 + 70), v64[0] = 0uLL,
                                    v64[1] = v28,
                                    v63[0] = 0uLL,
                                    v63[1] = v54,
                                    memcmp_0(v64, v63, 0x20uLL))
    || v60 != *((_QWORD *)a1 + 106)
    || v59 != *((_QWORD *)a1 + 107)
    || memcmp_0(v66, (char *)a1 + 872, 0x20uLL) )
  {
    v6 = 1;
    v29 = 1;
  }
  else
  {
    if ( (v9 & 0x80u) != 0 || ((v18 | v20) & 0x80u) == 0 )
    {
      if ( (v9 & 8) == 0 && ((v44 & 8) != 0 || (v45 & 8) != 0) )
      {
        v6 = 1;
      }
      else if ( (*((_QWORD *)a1 + 81) & 0x10000000000000LL) != 0 )
      {
        v6 = 1;
      }
      else if ( v46 > v48 )
      {
        v6 = 1;
      }
    }
    else
    {
      v6 = 1;
    }
    v29 = dwTlsIndexb;
    if ( !dwTlsIndexb && !v6 )
      goto LABEL_66;
  }
  v30 = v40;
  if ( !v40 )
    return v6;
  if ( (*((_BYTE *)a1 + 1184) & 0x27) != 0 )
    RmHamEnforcementEmptySignalAbort(a1);
  if ( v29 )
    RtlWakeAllConditionVariable((char *)a1 + 680);
LABEL_67:
  if ( v30 )
  {
    v32 = *((_QWORD *)a1 + 81);
    if ( (v32 & 0x400000000LL) == 0 )
    {
      *((_QWORD *)a1 + 81) = v32 | 0x400000000LL;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)a1 + 79));
    }
  }
  return v6;
}
