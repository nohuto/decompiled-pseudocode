/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018880
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800030C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005C90 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800063F8 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180006418 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006850 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006990 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D6A0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FD74 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017C30 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800187F0 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019550 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019780 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019A40 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A150 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002214C (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180022F90 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800263B0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002752C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800275BC (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027A30 (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180027AF4 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032858 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180033C5C (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035438 (-HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035518 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800465DC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18006B648 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D3AC (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007F36C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007F6D0 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007F818 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18007F87C (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  DWORD v6; // ebx
  char *v7; // r15
  __int64 v8; // rsi
  DWORD v9; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v12; // edi
  _QWORD *v13; // rbx
  unsigned int v14; // esi
  char *v15; // rcx
  char *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edx
  unsigned __int64 v20; // r8
  __int64 v21; // r13
  DWORD v22; // edi
  __int64 v23; // rsi
  _QWORD *v24; // rbx
  int *v25; // r12
  unsigned int v26; // ebx
  _QWORD *v27; // rax
  bool v28; // zf
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // r13
  BOOL v33; // r12d
  DWORD v34; // edi
  __int64 v35; // r13
  _QWORD *v36; // rbx
  bool v37; // bl
  _QWORD *v38; // rax
  __int64 v39; // rax
  int v40; // eax
  int v41; // edx
  BOOL v42; // ebx
  _QWORD *v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  int v47; // eax
  _QWORD *v48; // rax
  signed __int64 v49; // rax
  bool v50; // cc
  signed __int64 v51; // rax
  DWORD v52; // ebx
  int v53; // eax
  DWORD v54; // edi
  _QWORD *v55; // rbx
  DWORD v56; // eax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  int v60; // edi
  int v61; // ebx
  __int64 v62; // r13
  __int16 v63; // cx
  int v64; // eax
  unsigned int v65; // r8d
  unsigned int v66; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v67; // rdx
  NTSTATUS v68; // ebx
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  int v70; // ecx
  struct _RM_PARTITION *v71; // rcx
  BOOL IsSuspendWaiter; // eax
  unsigned int v73; // ebx
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // eax
  int v77; // ecx
  void *v78; // rcx
  unsigned int v79; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v80; // [rsp+44h] [rbp-BCh]
  BOOL v81; // [rsp+48h] [rbp-B8h]
  int v82; // [rsp+4Ch] [rbp-B4h]
  __int64 v83; // [rsp+50h] [rbp-B0h]
  int v84; // [rsp+58h] [rbp-A8h] BYREF
  int v85; // [rsp+5Ch] [rbp-A4h] BYREF
  char v86[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v87[4]; // [rsp+64h] [rbp-9Ch] BYREF
  NTSTATUS v88; // [rsp+68h] [rbp-98h]
  char v89[4]; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v90; // [rsp+70h] [rbp-90h] BYREF
  int v91; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v92; // [rsp+78h] [rbp-88h]
  __int64 v93; // [rsp+80h] [rbp-80h] BYREF
  __int64 v94; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v95[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v102; // [rsp+170h] [rbp+70h]
  int v103; // [rsp+178h] [rbp+78h]
  int v104; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v105; // [rsp+180h] [rbp+80h]
  __int64 v106; // [rsp+188h] [rbp+88h]
  int *v107; // [rsp+190h] [rbp+90h]
  __int64 v108; // [rsp+198h] [rbp+98h]

  memset_0(TlsValue, 0, 0x88uLL);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, TlsValue);
  }
  v7 = a2 + 64;
  v97 = *((_QWORD *)a2 + 6);
  v8 = *((_QWORD *)a2 + 4);
  v92 = v8;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
  {
    v84 = *((_DWORD *)a2 + 311);
    v93 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1800B3218,
      (int)&unk_18009D01A,
      v4,
      v5,
      (__int64)&v93,
      (__int64)&v84);
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
  dword_1800B4218 = CurrentThreadId;
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
LABEL_16:
  v14 = 0;
  while ( *((int *)a2 + 6) >= 0 )
  {
    v15 = (char *)*((_QWORD *)v7 + 75);
    v16 = 0LL;
    v17 = v15 != v7 + 600;
    if ( v15 != v7 + 600 )
      v16 = v15 - 96;
    if ( v16 )
    {
      do
      {
        if ( v16[548] == 2 )
        {
          if ( v16[549] )
          {
            v53 = HampActTryStart(v16, v17);
            if ( v53 )
            {
              if ( (unsigned int)dword_1800B3218 > 5 )
              {
                v85 = v53;
                v94 = *((_QWORD *)v16 + 5);
                v107 = &v85;
                v105 = &v94;
                *(_DWORD *)&EventDescriptor.Level = 5;
                UserData.Ptr = (ULONGLONG)off_1800B3220;
                v108 = 4LL;
                v106 = 8LL;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 0LL;
                UserData.Size = *(unsigned __int16 *)off_1800B3220;
                UserData.Reserved = 2;
                v102 = &unk_1800A1424;
                v103 = 49;
                v104 = 1;
                v80 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
              }
            }
          }
        }
        v17 = *((_QWORD *)v16 + 12);
        v18 = *((_QWORD *)v16 + 10);
        v16 = 0LL;
        if ( v17 != v18 + 600 )
          v16 = (char *)(v17 - 96);
      }
      while ( v16 );
      v7 = a2 + 64;
    }
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)v7,
      (union _RM_OPTIMIZATION_STATE *)v86,
      (union _RM_OPTIMIZATION_STATE *)v87);
    v20 = *((_QWORD *)v7 + 81);
    switch ( (v20 >> 16) & 3 )
    {
      case 0uLL:
        goto LABEL_27;
      case 1uLL:
        if ( v86[0] >= 0 || v87[0] < 0 || (v20 & 0x40000000000LL) != 0 )
          goto LABEL_27;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v7);
        if ( FirstActivity )
        {
          while ( (*((_BYTE *)FirstActivity + 544) & 0x28) != 0
               || !HampActIsStartedOrReachedPendState((__int64)FirstActivity, 5u)
               || (*((_DWORD *)FirstActivity + 28) & 0x2000) == 0 )
          {
            FirstActivity = HampHostGetNextActivity(FirstActivity);
            if ( !FirstActivity )
              goto LABEL_153;
          }
          v20 = *((_QWORD *)a2 + 89);
          goto LABEL_27;
        }
LABEL_153:
        if ( (v20 & 0x800000000LL) == 0 )
        {
          IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v7, v19);
          *((_QWORD *)v7 + 81) |= 0x800000000uLL;
          v73 = IsSuspendWaiter;
          if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 2) <= 1 )
            __fastfail(0xEu);
          TpPostWork(*((_QWORD *)v7 + 78));
          HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v7, v73);
          v20 = *((_QWORD *)a2 + 89);
        }
        if ( (v20 & 0x30000) != 0 )
        {
          do
          {
            v95[0] = *((_QWORD *)v7 + 100);
            HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v7);
            RmpReleaseGlobalLock();
            RtlWaitOnAddress(v7 + 800, v95, 8LL);
            RmpAcquireGlobalLock();
            HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v7, 0);
          }
          while ( (*((_DWORD *)v7 + 162) & 0x30000) != 0 );
        }
        break;
      case 2uLL:
        if ( ((v20 >> 52) & 1) == 0 )
          goto LABEL_153;
        break;
      case 3uLL:
        goto LABEL_153;
      default:
LABEL_27:
        if ( (v20 & 0x10000000000000LL) != 0 )
        {
          HampHostCollectErrorReport((struct _RM_HAM_ACTIVITY_HOST *)v7);
        }
        else
        {
          v21 = *((_QWORD *)v7 + 97);
          if ( !HampAppCheckQueueLicenseUpgradeForHost(
                  (struct _HAM_APPLICATION *)v21,
                  (struct _RM_HAM_ACTIVITY_HOST *)v7) )
          {
            if ( (a2[1244] & 8) == 0 && (v7[772] & 1) != 0 )
            {
              v22 = HampLockTrackerId;
              v23 = *((_QWORD *)v7 + 81) >> 62;
              if ( HampLockTrackerId != -1 )
              {
                v24 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v22) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                  __int2c();
                *v24 |= 0x20uLL;
                ++v24[6];
              }
              RtlAcquireSRWLockShared(v21 + 576);
              v25 = (int *)(v21 + 608);
              v26 = (*(_DWORD *)(v21 + 608) >> 23) & 3;
              if ( HampLockTrackerId != -1 )
              {
                v27 = TlsGetValue(HampLockTrackerId);
                if ( (*(_BYTE *)v27 & 0x20) == 0 )
                  __int2c();
                v28 = v27[6]-- == 1LL;
                if ( v28 )
                  *v27 &= ~0x20uLL;
              }
              RtlReleaseSRWLockShared(v21 + 576);
              if ( v26 < (unsigned int)v23 )
              {
                HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v7);
                RmpReleaseGlobalLock();
                HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v21);
                v66 = *v25;
                if ( (((unsigned int)*v25 >> 23) & 3) < (unsigned int)v23 )
                {
                  while ( ((v66 >> 21) & 3) >= (unsigned int)v23 )
                  {
                    if ( (v66 & 0x100000) == 0 )
                    {
                      *v25 = v66 | 0x100000;
                      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v21);
                      v68 = HampSystemEnsureStoreLicenseAcquisition((struct _HAM_APPLICATION *)v21, v67);
                      if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 )
                      {
                        v74 = qword_1800B3230 & 8;
                        if ( v74 == qword_1800B3230 )
                        {
                          v95[1] = *((_QWORD *)v7 - 4);
                          v95[2] = v7 + 24;
                          v88 = v68;
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                            v74,
                            &unk_1800A1838);
                        }
                      }
                      if ( v68 < 0 )
                        HampAppRequestLicensingActivityStops((struct _HAM_APPLICATION *)v21, v68);
                      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v21);
                      *v25 &= ~0x100000u;
                      RtlWakeAddressAll(v21 + 608);
                      if ( v68 >= 0 )
                      {
                        *v25 &= 0xFE7FFFFF;
                        *v25 |= (_DWORD)v23 << 23;
                      }
                      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v21);
                      HampAppCheckQueueHostWorkersPostLicensing(
                        (struct _HAM_APPLICATION *)v21,
                        (struct _RM_HAM_ACTIVITY_HOST *)v7);
                      goto LABEL_145;
                    }
                    HampAppTraceWaitForLicenseWorkerForHost((struct _RM_HAM_ACTIVITY_HOST *)v7);
                    HampAppWaitForFlagChange((struct _HAM_APPLICATION *)v21);
                    v66 = *v25;
                    if ( (((unsigned int)*v25 >> 23) & 3) >= (unsigned int)v23 )
                      break;
                  }
                }
                HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v21);
LABEL_145:
                RmpAcquireGlobalLock();
                HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v7, 0);
                goto LABEL_16;
              }
              v14 = 0;
            }
            if ( !HampAppCheckDowngradeLicense((struct _HAM_APPLICATION *)v21, (struct _RM_HAM_ACTIVITY_HOST *)v7) )
            {
              v31 = *((_DWORD *)a2 + 209);
              if ( (v31 & 1) != 0 )
              {
                v80 = HampHostCheckUpdateEnforcementSettings((struct _RM_HAM_ACTIVITY_HOST *)v7);
                v31 = *((_DWORD *)a2 + 209);
              }
              else
              {
                v80 = 0;
              }
              if ( (v31 & 1) != 0 )
              {
                v32 = *((_QWORD *)a2 + 94);
                v83 = v32;
                if ( v32 )
                {
                  v54 = HampLockTrackerId;
                  if ( HampLockTrackerId != -1 )
                  {
                    v55 = TlsGetValue(HampLockTrackerId);
                    if ( (*(_QWORD *)TlsGetValue(v54) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                      __int2c();
                    *v55 |= 8uLL;
                    ++v55[4];
                  }
                  RtlAcquireSRWLockExclusive(v32 + 8);
                  v56 = GetCurrentThreadId();
                  v82 = 1;
                  *(_DWORD *)(v32 + 16) = v56;
                  v57 = *((_QWORD *)a2 + 94);
                  v33 = *(_QWORD *)(v57 + 104) < *((_QWORD *)a2 + 85);
                  v81 = *(_DWORD *)(v57 + 92) != 0;
                }
                else
                {
                  v33 = 0;
                  v81 = 0;
                  v82 = 0;
                }
                if ( (a2[836] & 1) == 0 )
                {
                  v79 = 0;
                  goto LABEL_63;
                }
                RmHamHostGetCurrentState(
                  (struct _RM_HAM_ACTIVITY_HOST *)v7,
                  (union _RM_OPTIMIZATION_STATE *)&v79,
                  (union _RM_OPTIMIZATION_STATE *)v89);
                v34 = HampLockTrackerId;
                v35 = *(_QWORD *)(*((_QWORD *)a2 + 105) + 88LL);
                if ( HampLockTrackerId != -1 )
                {
                  v36 = TlsGetValue(HampLockTrackerId);
                  if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                    __int2c();
                  *v36 |= 0x40uLL;
                  ++v36[7];
                }
                RtlAcquireSRWLockShared(v35 + 304);
                v37 = (*(_DWORD *)(v35 + 340) & 2) != 0;
                if ( HampLockTrackerId != -1 )
                {
                  v38 = TlsGetValue(HampLockTrackerId);
                  if ( (*(_BYTE *)v38 & 0x40) == 0 )
                    __int2c();
                  v28 = v38[7]-- == 1LL;
                  if ( v28 )
                    *v38 &= ~0x40uLL;
                }
                RtlReleaseSRWLockShared(v35 + 304);
                if ( !v37
                  || (v75 = *((_QWORD *)a2 + 89), (v75 & 0x20000000000000LL) != 0)
                  || ((v79 & 0x80u) != 0 || v89[0] < 0 ? (v76 = 0) : (v76 = 1), (v75 & 0x30000) != 0 || !v76) )
                {
                  if ( !v33 )
                  {
                    v39 = *((_QWORD *)a2 + 89);
                    v32 = v83;
                    if ( (v39 & 0x10000000000LL) != 0 )
                    {
                      if ( v81 )
                        v14 = v79;
                    }
                    else
                    {
                      if ( v83 && *(_DWORD *)(v83 + 88) )
                        v14 = v79 & 0x100 | 0x80;
                      else
                        v14 = 384;
                      if ( (v39 & 0x2080000000000LL) == 0x2000000000000LL )
                        v14 |= (v14 >> 5) & 8;
                    }
LABEL_63:
                    if ( v82 )
                    {
                      *(_DWORD *)(v32 + 16) = 0;
                      RtlReleaseSRWLockExclusive(v32 + 8);
                      if ( HampLockTrackerId != -1 )
                      {
                        v58 = TlsGetValue(HampLockTrackerId);
                        if ( (*(_BYTE *)v58 & 8) == 0 )
                          __int2c();
                        v28 = v58[4]-- == 1LL;
                        if ( v28 )
                          *v58 &= ~8uLL;
                      }
                    }
                    if ( *((_QWORD *)a2 + 82) )
                    {
LABEL_65:
                      v40 = *((_DWORD *)a2 + 156);
                      switch ( v40 )
                      {
                        case 2:
                          goto LABEL_66;
                        case 4:
                          if ( (a2[1240] & 1) != 0 )
                            v14 |= 0x40u;
LABEL_66:
                          if ( (v14 & 8) != 0 )
                          {
                            v60 = *((_DWORD *)a2 + 311);
                            v61 = 0;
                            v62 = *((_QWORD *)a2 + 6);
                            v63 = *((_WORD *)a2 + 732);
                            if ( (v60 & 0x10) == 0 && (v63 & 0x200) == 0 )
                            {
                              v64 = *(_DWORD *)(v62 + 504);
                              v61 = 2 * (v64 & 1);
                              if ( (v63 & 0x100) == 0 )
                                v61 |= 2 * (v64 & 2);
                            }
                            v14 |= v61 | v60 & 0x27 | RmpPolicyGetDesiredEmptyOptimizationsForHost(
                                                        v62 + 400,
                                                        (__int64)a2);
                            if ( RmpPolicyIsHostCommitSaveEligible(
                                   (struct _RM_POLICY *)(v62 + 400),
                                   (struct _RM_ACTIVITY_HOST *)a2,
                                   v65) )
                            {
                              v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(8 * *(_DWORD *)(v62 + 508))) & 0x10;
                            }
                          }
                          break;
                        case 8:
                          goto LABEL_66;
                      }
                    }
LABEL_67:
                    if ( (a2[1244] & 8) == 0
                      && (v14 & 8) != 0
                      && (*((_QWORD *)v7 + 81) & 0x200000000000LL) == 0
                      && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)a2) )
                    {
                      *((_QWORD *)v7 + 81) |= 0x200000000000uLL;
                    }
                    v41 = *((_DWORD *)a2 + 311);
                    if ( v41 != v14 )
                    {
                      if ( (unsigned int)dword_1800B3218 > 4
                        && (byte_1800B3228 & 0x40) != 0
                        && (qword_1800B3230 & 0x40) == qword_1800B3230 )
                      {
                        v96 = v92;
                        v90 = v14;
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                          (int)&dword_1800B3218,
                          (int)&unk_18009CF9F,
                          v29,
                          v30,
                          (__int64)&v96,
                          (__int64)&v90);
                        v41 = *((_DWORD *)a2 + 311);
                      }
                      if ( (v41 & v14) == v14 )
                        RmpEnforcementUnoptimizeHost((__int64)a2, ~(_BYTE)v14 & v41);
                      else
                        RmpEnforcementOptimizeHost(a2, v14 & ~v41);
                      RtlWakeAllConditionVariable(a2 + 1232);
                      goto LABEL_16;
                    }
                    if ( v80 && !RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
                      goto LABEL_16;
                    goto LABEL_70;
                  }
                  v14 = v79 & 0x188;
                }
                v32 = v83;
                goto LABEL_63;
              }
              if ( RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)a2, 3u) )
                goto LABEL_65;
              goto LABEL_67;
            }
          }
        }
        break;
    }
  }
LABEL_70:
  HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)v7);
  *((_DWORD *)v7 + 160) = 0;
  *((_QWORD *)v7 + 81) &= ~0x400000000uLL;
  v42 = RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2);
  if ( HampLockTrackerId != -1 )
  {
    v43 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v43 & 2) == 0 )
      __int2c();
    v28 = v43[2]-- == 1LL;
    if ( v28 )
      *v43 &= ~2uLL;
  }
  *((_DWORD *)v7 + 2) = 0;
  RtlReleaseSRWLockExclusive(v7);
  v28 = *((_QWORD *)a2 + 178) == 0LL;
  *((_DWORD *)a2 + 367) = 0;
  if ( !v28 )
    RmpActivityHostRemoveFromRemediationGroup(a2, 1u);
  v46 = *(_QWORD *)(v97 + 2720);
  v47 = *(_DWORD *)(v46 + 160);
  if ( (v47 & 3) == 0 )
  {
    *(_DWORD *)(v46 + 160) = v47 | 1;
    TpPostWork(*(_QWORD *)(v46 + 144));
  }
  if ( v42 )
    RmpActivityHostDelete((struct _RM_PARTITION **)a2);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v91 = *((_DWORD *)a2 + 311);
    v98 = v92;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1800B3218,
      (int)&unk_18009CF3F,
      v44,
      v45,
      (__int64)&v98,
      (__int64)&v91);
  }
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v48 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v48 & 1) == 0 )
      __int2c();
    v28 = v48[1]-- == 1LL;
    if ( v28 )
      *v48 &= ~1uLL;
  }
  RtlWakeAllConditionVariable(a2 + 1232);
  v49 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v50 = v49 <= 1;
  v51 = v49 - 1;
  if ( v50 )
  {
    if ( v51 )
      __fastfail(0xEu);
    v70 = *((_DWORD *)a2 + 10);
    if ( v70 )
    {
      v77 = v70 - 1;
      if ( v77 )
      {
        if ( v77 == 1 && !*((_DWORD *)a2 + 24) && !*((_DWORD *)a2 + 25) )
          NtDeleteWnfStateName(a2 + 96);
      }
      else
      {
        RmpPartitionRelease(*(struct _RM_PARTITION **)v7);
        v78 = (void *)*((_QWORD *)a2 + 9);
        if ( v78 )
          NtClose(v78);
      }
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(a2 + 1296));
      v71 = (struct _RM_PARTITION *)*((_QWORD *)a2 + 7);
      if ( v71 )
        RmpPartitionRelease(v71);
      HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)v7);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  v52 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v52, 0LL);
  }
}
