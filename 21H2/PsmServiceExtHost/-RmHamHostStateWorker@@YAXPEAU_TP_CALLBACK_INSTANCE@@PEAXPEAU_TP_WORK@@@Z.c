/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800030A4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800058A0 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180006028 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006054 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006460 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800065A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D934 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FEF4 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017DB0 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018970 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019690 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800198C0 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019B80 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A290 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002228C (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023100 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180026520 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002769C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002772C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027BA0 (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180027C64 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032B08 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180033B94 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180033C18 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035638 (-HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035718 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180047BFC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18006C018 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DD7C (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007FD3C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x1800800A0 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800801E8 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18008024C (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  DWORD v6; // ebx
  char *v7; // r14
  __int64 v8; // r15
  DWORD v9; // esi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v12; // esi
  _QWORD *v13; // rbx
  char *v14; // rcx
  char *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // r8
  __int64 v20; // r13
  DWORD v21; // esi
  __int64 v22; // r15
  _QWORD *v23; // rbx
  int *v24; // r12
  unsigned int v25; // ebx
  _QWORD *v26; // rax
  bool v27; // zf
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  unsigned int v31; // r13d
  __int64 v32; // r15
  BOOL v33; // r12d
  unsigned int v34; // ebx
  DWORD v35; // r15d
  __int64 v36; // r13
  _QWORD *v37; // rsi
  bool v38; // si
  _QWORD *v39; // rax
  __int64 v40; // rax
  int v41; // eax
  int v42; // edx
  BOOL v43; // ebx
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  int v48; // eax
  _QWORD *v49; // rax
  signed __int64 v50; // rax
  bool v51; // cc
  signed __int64 v52; // rax
  DWORD v53; // ebx
  int v54; // eax
  DWORD v55; // esi
  _QWORD *v56; // rbx
  DWORD v57; // eax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v61; // rsi
  int v62; // ebx
  unsigned int v63; // r8d
  unsigned int v64; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v65; // rdx
  NTSTATUS v66; // ebx
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  int v68; // ecx
  struct _RM_PARTITION *v69; // rcx
  BOOL IsSuspendWaiter; // eax
  unsigned int v71; // ebx
  __int64 v72; // rcx
  __int64 v73; // rcx
  BOOL v74; // eax
  int v75; // ecx
  void *v76; // rcx
  unsigned int v77; // [rsp+40h] [rbp-C0h]
  unsigned int v78; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v79; // [rsp+48h] [rbp-B8h]
  BOOL v80; // [rsp+4Ch] [rbp-B4h]
  __int64 v81; // [rsp+50h] [rbp-B0h]
  int v82; // [rsp+58h] [rbp-A8h] BYREF
  int v83; // [rsp+5Ch] [rbp-A4h] BYREF
  char v84[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v85[4]; // [rsp+64h] [rbp-9Ch] BYREF
  NTSTATUS v86; // [rsp+68h] [rbp-98h]
  char v87[4]; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v88; // [rsp+70h] [rbp-90h] BYREF
  int v89; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v90; // [rsp+78h] [rbp-88h]
  __int64 v91; // [rsp+80h] [rbp-80h] BYREF
  __int64 v92; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v93[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v94; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-50h]
  __int64 v96; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v100; // [rsp+170h] [rbp+70h]
  int v101; // [rsp+178h] [rbp+78h]
  int v102; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v103; // [rsp+180h] [rbp+80h]
  __int64 v104; // [rsp+188h] [rbp+88h]
  int *v105; // [rsp+190h] [rbp+90h]
  __int64 v106; // [rsp+198h] [rbp+98h]

  memset_0(TlsValue, 0, 0x88uLL);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, TlsValue);
  }
  v7 = a2 + 64;
  v95 = *((_QWORD *)a2 + 6);
  v8 = *((_QWORD *)a2 + 4);
  v90 = v8;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
  {
    v82 = *((_DWORD *)a2 + 311);
    v91 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1800B3218,
      (int)&unk_18009D0BA,
      v4,
      v5,
      (__int64)&v91,
      (__int64)&v82);
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v9) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v12 = HampLockTrackerId;
  dword_1800B4118 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v13 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v13 |= 2uLL;
    ++v13[2];
  }
  RtlAcquireSRWLockExclusive(a2 + 64);
  *((_DWORD *)a2 + 18) = GetCurrentThreadId();
  *((_DWORD *)a2 + 176) = GetCurrentThreadId();
  while ( *((int *)a2 + 6) >= 0 )
  {
    v14 = (char *)*((_QWORD *)v7 + 75);
    v15 = 0LL;
    v16 = v14 != v7 + 600;
    if ( v14 != v7 + 600 )
      v15 = v14 - 96;
    if ( v15 )
    {
      do
      {
        if ( v15[548] == 2 )
        {
          if ( v15[549] )
          {
            v54 = HampActTryStart(v15, v16);
            if ( v54 )
            {
              if ( (unsigned int)dword_1800B3218 > 5 )
              {
                v83 = v54;
                v92 = *((_QWORD *)v15 + 5);
                v105 = &v83;
                v103 = &v92;
                *(_DWORD *)&EventDescriptor.Level = 5;
                UserData.Ptr = (ULONGLONG)off_1800B3220;
                v106 = 4LL;
                v104 = 8LL;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 0LL;
                UserData.Size = *(unsigned __int16 *)off_1800B3220;
                UserData.Reserved = 2;
                v100 = &unk_1800A14C4;
                v101 = 49;
                v102 = 1;
                v79 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
              }
            }
          }
        }
        v16 = *((_QWORD *)v15 + 12);
        v17 = *((_QWORD *)v15 + 10);
        v15 = 0LL;
        if ( v16 != v17 + 600 )
          v15 = (char *)(v16 - 96);
      }
      while ( v15 );
      v7 = a2 + 64;
    }
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)v7,
      (union _RM_OPTIMIZATION_STATE *)v84,
      (union _RM_OPTIMIZATION_STATE *)v85);
    v19 = *((_QWORD *)v7 + 81);
    switch ( (v19 >> 16) & 3 )
    {
      case 0uLL:
        goto LABEL_26;
      case 1uLL:
        if ( v84[0] >= 0 || v85[0] < 0 || (v19 & 0x40000000000LL) != 0 )
          goto LABEL_26;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v7);
        if ( FirstActivity )
        {
          while ( (*((_BYTE *)FirstActivity + 544) & 0x28) != 0
               || !HampActIsStartedOrReachedPendState((__int64)FirstActivity, 5u)
               || (*((_DWORD *)FirstActivity + 28) & 0x2000) == 0 )
          {
            FirstActivity = HampHostGetNextActivity(FirstActivity);
            if ( !FirstActivity )
              goto LABEL_148;
          }
          v19 = *((_QWORD *)a2 + 89);
          goto LABEL_26;
        }
LABEL_148:
        if ( (v19 & 0x800000000LL) == 0 )
        {
          IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v7, v18);
          *((_QWORD *)v7 + 81) |= 0x800000000uLL;
          v71 = IsSuspendWaiter;
          if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 2) <= 1 )
            __fastfail(0xEu);
          TpPostWork(*((_QWORD *)v7 + 78));
          HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v7, v71);
          v19 = *((_QWORD *)a2 + 89);
        }
        if ( (v19 & 0x30000) != 0 )
        {
          do
          {
            v93[0] = *((_QWORD *)v7 + 100);
            HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v7);
            RmpReleaseGlobalLock();
            RtlWaitOnAddress(v7 + 800, v93, 8LL);
            RmpAcquireGlobalLock();
            HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v7, 0);
          }
          while ( (*((_DWORD *)v7 + 162) & 0x30000) != 0 );
        }
        break;
      case 2uLL:
        if ( ((v19 >> 52) & 1) == 0 )
          goto LABEL_148;
        break;
      case 3uLL:
        goto LABEL_148;
      default:
LABEL_26:
        if ( (v19 & 0x10000000000000LL) != 0 )
        {
          HampHostCollectErrorReport((struct _RM_HAM_ACTIVITY_HOST *)v7);
        }
        else
        {
          v20 = *((_QWORD *)v7 + 97);
          if ( !HampAppCheckQueueLicenseUpgradeForHost(
                  (struct _HAM_APPLICATION *)v20,
                  (struct _RM_HAM_ACTIVITY_HOST *)v7) )
          {
            if ( (a2[1244] & 8) != 0 || (v7[772] & 1) == 0 )
              goto LABEL_209;
            v21 = HampLockTrackerId;
            v22 = *((_QWORD *)v7 + 81) >> 62;
            if ( HampLockTrackerId != -1 )
            {
              v23 = TlsGetValue(HampLockTrackerId);
              if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                __int2c();
              *v23 |= 0x20uLL;
              ++v23[6];
            }
            RtlAcquireSRWLockShared(v20 + 576);
            v24 = (int *)(v20 + 608);
            v25 = (*(_DWORD *)(v20 + 608) >> 23) & 3;
            if ( HampLockTrackerId != -1 )
            {
              v26 = TlsGetValue(HampLockTrackerId);
              if ( (*(_BYTE *)v26 & 0x20) == 0 )
                __int2c();
              v27 = v26[6]-- == 1LL;
              if ( v27 )
                *v26 &= ~0x20uLL;
            }
            RtlReleaseSRWLockShared(v20 + 576);
            if ( v25 < (unsigned int)v22 )
            {
              HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v7);
              RmpReleaseGlobalLock();
              HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v20);
              v64 = *v24;
              if ( (((unsigned int)*v24 >> 23) & 3) < (unsigned int)v22 )
              {
                while ( ((v64 >> 21) & 3) >= (unsigned int)v22 )
                {
                  if ( (v64 & 0x100000) == 0 )
                  {
                    *v24 = v64 | 0x100000;
                    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v20);
                    v66 = HampSystemEnsureStoreLicenseAcquisition((struct _HAM_APPLICATION *)v20, v65);
                    if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 )
                    {
                      v72 = qword_1800B3230 & 8;
                      if ( v72 == qword_1800B3230 )
                      {
                        v93[1] = *((_QWORD *)v7 - 4);
                        v93[2] = v7 + 24;
                        v86 = v66;
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                          v72,
                          &unk_1800A18D8);
                      }
                    }
                    if ( v66 < 0 )
                      HampAppRequestLicensingActivityStops((struct _HAM_APPLICATION *)v20, v66);
                    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v20);
                    *v24 &= ~0x100000u;
                    RtlWakeAddressAll(v20 + 608);
                    if ( v66 >= 0 )
                    {
                      *v24 &= 0xFE7FFFFF;
                      *v24 |= (_DWORD)v22 << 23;
                    }
                    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v20);
                    HampAppCheckQueueHostWorkersPostLicensing(
                      (struct _HAM_APPLICATION *)v20,
                      (struct _RM_HAM_ACTIVITY_HOST *)v7);
                    goto LABEL_140;
                  }
                  HampAppTraceWaitForLicenseWorkerForHost((struct _RM_HAM_ACTIVITY_HOST *)v7);
                  HampAppWaitForFlagChange((struct _HAM_APPLICATION *)v20);
                  v64 = *v24;
                  if ( (((unsigned int)*v24 >> 23) & 3) >= (unsigned int)v22 )
                    break;
                }
              }
              HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v20);
LABEL_140:
              RmpAcquireGlobalLock();
              HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v7, 0);
            }
            else
            {
LABEL_209:
              if ( !HampAppCheckDowngradeLicense((struct _HAM_APPLICATION *)v20, (struct _RM_HAM_ACTIVITY_HOST *)v7) )
              {
                v30 = *((_DWORD *)a2 + 209);
                if ( (v30 & 1) != 0 )
                {
                  v31 = HampHostCheckUpdateEnforcementSettings((struct _RM_HAM_ACTIVITY_HOST *)v7);
                  v30 = *((_DWORD *)a2 + 209);
                }
                else
                {
                  v31 = 0;
                }
                v77 = v31;
                if ( (v30 & 1) == 0 )
                {
                  v34 = 0;
                  if ( !RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)a2, 3u) )
                    goto LABEL_65;
                  goto LABEL_63;
                }
                v32 = *((_QWORD *)a2 + 94);
                v81 = v32;
                if ( v32 )
                {
                  v55 = HampLockTrackerId;
                  if ( HampLockTrackerId != -1 )
                  {
                    v56 = TlsGetValue(HampLockTrackerId);
                    if ( (*(_QWORD *)TlsGetValue(v55) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                      __int2c();
                    *v56 |= 8uLL;
                    ++v56[4];
                  }
                  RtlAcquireSRWLockExclusive(v32 + 8);
                  v57 = GetCurrentThreadId();
                  v79 = 1;
                  *(_DWORD *)(v32 + 16) = v57;
                  v58 = *((_QWORD *)a2 + 94);
                  v33 = *(_QWORD *)(v58 + 104) < *((_QWORD *)a2 + 85);
                  v80 = *(_DWORD *)(v58 + 92) != 0;
                }
                else
                {
                  v33 = 0;
                  v80 = 0;
                  v79 = 0;
                }
                v34 = 0;
                if ( (a2[836] & 1) == 0 )
                {
                  v78 = 0;
                  goto LABEL_61;
                }
                RmHamHostGetCurrentState(
                  (struct _RM_HAM_ACTIVITY_HOST *)v7,
                  (union _RM_OPTIMIZATION_STATE *)&v78,
                  (union _RM_OPTIMIZATION_STATE *)v87);
                v35 = HampLockTrackerId;
                v36 = *(_QWORD *)(*((_QWORD *)a2 + 105) + 88LL);
                if ( HampLockTrackerId != -1 )
                {
                  v37 = TlsGetValue(HampLockTrackerId);
                  if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                    __int2c();
                  *v37 |= 0x40uLL;
                  ++v37[7];
                }
                RtlAcquireSRWLockShared(v36 + 304);
                v38 = (*(_DWORD *)(v36 + 340) & 2) != 0;
                if ( HampLockTrackerId != -1 )
                {
                  v39 = TlsGetValue(HampLockTrackerId);
                  if ( (*(_BYTE *)v39 & 0x40) == 0 )
                    __int2c();
                  v27 = v39[7]-- == 1LL;
                  if ( v27 )
                    *v39 &= ~0x40uLL;
                }
                RtlReleaseSRWLockShared(v36 + 304);
                if ( v38 )
                {
                  v73 = *((_QWORD *)a2 + 89);
                  if ( (v73 & 0x20000000000000LL) == 0 )
                  {
                    v74 = (v78 & 0x80u) == 0 && v87[0] >= 0;
                    if ( (v73 & 0x30000) == 0 && v74 )
                      goto LABEL_159;
                  }
                }
                if ( v33 )
                {
                  v34 = v78 & 0x188;
LABEL_159:
                  v32 = v81;
LABEL_112:
                  v31 = v77;
                  goto LABEL_61;
                }
                v40 = *((_QWORD *)a2 + 89);
                v32 = v81;
                if ( (v40 & 0x10000000000LL) == 0 )
                {
                  if ( v81 && *(_DWORD *)(v81 + 88) )
                    v34 = v78 & 0x100 | 0x80;
                  else
                    v34 = 384;
                  if ( (v40 & 0x2080000000000LL) == 0x2000000000000LL )
                    v34 |= (v34 >> 5) & 8;
                  goto LABEL_112;
                }
                v31 = v77;
                if ( v80 )
                  v34 = v78;
LABEL_61:
                if ( v79 )
                {
                  *(_DWORD *)(v32 + 16) = 0;
                  RtlReleaseSRWLockExclusive(v32 + 8);
                  if ( HampLockTrackerId != -1 )
                  {
                    v59 = TlsGetValue(HampLockTrackerId);
                    if ( (*(_BYTE *)v59 & 8) == 0 )
                      __int2c();
                    v27 = v59[4]-- == 1LL;
                    if ( v27 )
                      *v59 &= ~8uLL;
                  }
                }
                if ( !*((_QWORD *)a2 + 82) )
                  goto LABEL_65;
LABEL_63:
                v41 = *((_DWORD *)a2 + 156);
                switch ( v41 )
                {
                  case 2:
                    goto LABEL_64;
                  case 4:
                    if ( (a2[1240] & 1) != 0 )
                      v34 |= 0x40u;
LABEL_64:
                    if ( (v34 & 8) != 0 )
                    {
                      v61 = *((_QWORD *)a2 + 6) + 400LL;
                      v62 = RmpPolicyComputeDesiredEmptyState(v61, a2, 0LL) | v34;
                      v34 = RmpPolicyGetDesiredEmptyOptimizationsForHost(v61, (__int64)a2) | v62;
                      if ( RmpPolicyIsHostCommitSaveEligible(
                             (struct _RM_POLICY *)v61,
                             (struct _RM_ACTIVITY_HOST *)a2,
                             v63) )
                      {
                        v34 ^= ((unsigned __int8)v34 ^ (unsigned __int8)(8 * *(_DWORD *)(v61 + 108))) & 0x10;
                      }
                    }
                    break;
                  case 8:
                    goto LABEL_64;
                }
LABEL_65:
                if ( (a2[1244] & 8) == 0
                  && (v34 & 8) != 0
                  && (*((_QWORD *)v7 + 81) & 0x200000000000LL) == 0
                  && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)a2) )
                {
                  *((_QWORD *)v7 + 81) |= 0x200000000000uLL;
                }
                v42 = *((_DWORD *)a2 + 311);
                if ( v42 == v34 )
                {
                  if ( !v31 || RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
                    goto LABEL_68;
                }
                else
                {
                  if ( (unsigned int)dword_1800B3218 > 4
                    && (byte_1800B3228 & 0x40) != 0
                    && (qword_1800B3230 & 0x40) == qword_1800B3230 )
                  {
                    v94 = v90;
                    v88 = v34;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                      (int)&dword_1800B3218,
                      (int)&unk_18009D03F,
                      v28,
                      v29,
                      (__int64)&v94,
                      (__int64)&v88);
                    v42 = *((_DWORD *)a2 + 311);
                  }
                  if ( (v42 & v34) == v34 )
                    RmpEnforcementUnoptimizeHost((__int64)a2, ~(_BYTE)v34 & v42);
                  else
                    RmpEnforcementOptimizeHost(a2, v34 & ~v42);
                  RtlWakeAllConditionVariable(a2 + 1232);
                }
              }
            }
          }
        }
        break;
    }
  }
LABEL_68:
  HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)v7);
  *((_DWORD *)v7 + 160) = 0;
  *((_QWORD *)v7 + 81) &= ~0x400000000uLL;
  v43 = RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2);
  if ( HampLockTrackerId != -1 )
  {
    v44 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v44 & 2) == 0 )
      __int2c();
    v27 = v44[2]-- == 1LL;
    if ( v27 )
      *v44 &= ~2uLL;
  }
  *((_DWORD *)v7 + 2) = 0;
  RtlReleaseSRWLockExclusive(v7);
  v27 = *((_QWORD *)a2 + 178) == 0LL;
  *((_DWORD *)a2 + 367) = 0;
  if ( !v27 )
    RmpActivityHostRemoveFromRemediationGroup(a2, 1u);
  v47 = *(_QWORD *)(v95 + 2720);
  v48 = *(_DWORD *)(v47 + 160);
  if ( (v48 & 3) == 0 )
  {
    *(_DWORD *)(v47 + 160) = v48 | 1;
    TpPostWork(*(_QWORD *)(v47 + 144));
  }
  if ( v43 )
    RmpActivityHostDelete((struct _RM_PARTITION **)a2);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v89 = *((_DWORD *)a2 + 311);
    v96 = v90;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1800B3218,
      (int)&unk_18009CFDF,
      v45,
      v46,
      (__int64)&v96,
      (__int64)&v89);
  }
  dword_1800B4118 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v49 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v49 & 1) == 0 )
      __int2c();
    v27 = v49[1]-- == 1LL;
    if ( v27 )
      *v49 &= ~1uLL;
  }
  RtlWakeAllConditionVariable(a2 + 1232);
  v50 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v51 = v50 <= 1;
  v52 = v50 - 1;
  if ( v51 )
  {
    if ( v52 )
      __fastfail(0xEu);
    v68 = *((_DWORD *)a2 + 10);
    if ( v68 )
    {
      v75 = v68 - 1;
      if ( v75 )
      {
        if ( v75 == 1 && !*((_DWORD *)a2 + 24) && !*((_DWORD *)a2 + 25) )
          NtDeleteWnfStateName(a2 + 96);
      }
      else
      {
        RmpPartitionRelease(*(struct _RM_PARTITION **)v7);
        v76 = (void *)*((_QWORD *)a2 + 9);
        if ( v76 )
          NtClose(v76);
      }
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(a2 + 1296));
      v69 = (struct _RM_PARTITION *)*((_QWORD *)a2 + 7);
      if ( v69 )
        RmpPartitionRelease(v69);
      HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)v7);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  v53 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v53, 0LL);
  }
}
