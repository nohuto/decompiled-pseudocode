/*
 * XREFs of ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A290
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180047C50 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180004E10 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180017920 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001D460 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180029EA0 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18002A884 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A928 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x18002D3FC (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180033704 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180047B16 (memcmp_0.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x180067BC4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18006B17C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgW.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@555@Z @ 0x18007CEF8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlg_ea_18007CEF8.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180086088 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostCheckUpdateEnforcementSettings(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  struct _RM_HAM_ACTIVITY_HOST *v2; // rbx
  __int128 v3; // xmm1
  _QWORD *Value; // rax
  bool v6; // zf
  _QWORD *v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // esi
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // edx
  unsigned int *v18; // r13
  unsigned int *Heap; // rsi
  __int64 v20; // r14
  int v21; // eax
  int v22; // r15d
  unsigned int v23; // esi
  PVOID v24; // rax
  void **v25; // r14
  PVOID v26; // rax
  unsigned int *v27; // r12
  unsigned int *v28; // r15
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rsi
  struct _RM_ACTIVITY_HOST *v32; // rbx
  unsigned int *v33; // r13
  __int64 v34; // r12
  void **v35; // r15
  HANDLE *v36; // r13
  unsigned __int64 v37; // rdx
  char *v38; // r14
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // r15
  DWORD v44; // r14d
  _QWORD *v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // r11
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // r10
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  struct _HAM_ACTIVITY *v61; // rdx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rdx
  __int64 v67; // r8
  __int64 *v68; // rcx
  __int64 v69; // r10
  unsigned __int64 v70; // r9
  __int64 v71; // r8
  unsigned __int64 v72; // r9
  __int64 v73; // r8
  unsigned __int64 v74; // r9
  __int64 v75; // r8
  unsigned __int64 v76; // rdx
  _QWORD *v77; // rax
  unsigned __int64 v78; // r13
  unsigned int v79; // r15d
  DWORD v80; // r14d
  _QWORD *v81; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int64 v83; // r14
  int v84; // eax
  int v85; // esi
  DWORD v86; // esi
  _QWORD *v87; // rdi
  DWORD v88; // eax
  __int64 v89; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v90; // rdi
  unsigned __int64 v91; // r8
  __int64 v92; // r8
  BOOL v93; // r8d
  struct _HAM_ACTIVITY *FirstActivity; // rax
  int v95; // r8d
  __int64 v96; // r9
  __int64 v98; // rax
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  int v102; // r8d
  int v103; // r9d
  PVOID ProcessHeap; // rcx
  struct _HAM_DEPENDENCY_GROUP *v105; // rdi
  int v106; // r8d
  int v107; // r9d
  int v108; // r8d
  int v109; // r9d
  int v110; // r8d
  int v111; // r9d
  unsigned __int64 v112; // rtt
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rax
  unsigned int v115; // [rsp+60h] [rbp-A0h] BYREF
  char v116; // [rsp+64h] [rbp-9Ch]
  int v117; // [rsp+68h] [rbp-98h] BYREF
  BOOL v118; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v119; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v120; // [rsp+78h] [rbp-88h]
  PVOID v121[2]; // [rsp+80h] [rbp-80h]
  __int64 v122; // [rsp+90h] [rbp-70h]
  unsigned int v123; // [rsp+98h] [rbp-68h]
  __int64 v124; // [rsp+A0h] [rbp-60h]
  void *ProcessHandle; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v126; // [rsp+B0h] [rbp-50h]
  struct _RM_HAM_ACTIVITY_HOST *v127; // [rsp+B8h] [rbp-48h]
  int v128; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v129; // [rsp+C8h] [rbp-38h] BYREF
  int v130; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v131; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v132; // [rsp+E0h] [rbp-20h]
  __int64 v133; // [rsp+E8h] [rbp-18h]
  struct _HAM_ACTIVITY *v134; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v135; // [rsp+F8h] [rbp-8h]
  PVOID P; // [rsp+100h] [rbp+0h]
  struct _RM_ACTIVITY_HOST *v137; // [rsp+108h] [rbp+8h]
  unsigned __int64 v138; // [rsp+110h] [rbp+10h]
  unsigned __int64 v139; // [rsp+118h] [rbp+18h]
  unsigned __int64 v140; // [rsp+120h] [rbp+20h]
  __int64 v141; // [rsp+128h] [rbp+28h] BYREF
  struct _HAM_ACTIVITY *v142; // [rsp+130h] [rbp+30h] BYREF
  __int64 v143; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v144; // [rsp+140h] [rbp+40h] BYREF
  struct _HAM_ACTIVITY *v145; // [rsp+148h] [rbp+48h] BYREF
  __int64 v146; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v147; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v148; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v149[6]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v150; // [rsp+198h] [rbp+98h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v152; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v153; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v154; // [rsp+1D0h] [rbp+D0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1D8h] [rbp+D8h] BYREF
  char v156[16]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v157; // [rsp+218h] [rbp+118h]
  __int64 v158; // [rsp+220h] [rbp+120h]
  __int128 v159; // [rsp+228h] [rbp+128h] BYREF
  __int128 v160; // [rsp+238h] [rbp+138h]
  _OWORD Buf1[2]; // [rsp+248h] [rbp+148h] BYREF
  _QWORD v162[4]; // [rsp+268h] [rbp+168h] BYREF
  _OWORD Buf2[2]; // [rsp+288h] [rbp+188h] BYREF
  char v164[16]; // [rsp+2A8h] [rbp+1A8h] BYREF
  struct _HAM_ACTIVITY *v165; // [rsp+2B8h] [rbp+1B8h]
  __int64 v166; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v167[32]; // [rsp+2C8h] [rbp+1C8h] BYREF

  v1 = *((_QWORD *)a1 + 81);
  v2 = a1;
  v127 = a1;
  if ( (v1 & 0x80000000000000LL) == 0 && (v1 & 0x40000000000000LL) == 0 )
  {
    HampHostComputeStaticEnforcementSettings(
      a1,
      (struct _RM_ENFORCEMENT_SETTINGS *)&v152,
      (struct _RM_COMMIT_THRESHOLDS *)v167,
      (struct _RM_COMMIT_THRESHOLDS *)v156,
      &v142);
    if ( ((*((_BYTE *)v2 + 655) & 1) == 0 || SDWORD2(v153) < 2 && (BYTE12(v153) & 0x70) == 0 && (BYTE12(v153) & 8) == 0)
      && *((struct _HAM_ACTIVITY **)v2 + 125) == v142 )
    {
      v3 = *((_OWORD *)v2 + 70);
      Buf1[0] = 0uLL;
      Buf1[1] = v3;
      Buf2[0] = 0uLL;
      Buf2[1] = v153;
      if ( !memcmp_0(Buf1, Buf2, 0x20uLL)
        && v158 == *((_QWORD *)v2 + 106)
        && v157 == *((_QWORD *)v2 + 107)
        && !memcmp_0(v167, (char *)v2 + 872, 0x20uLL) )
      {
        return 0LL;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 2) == 0 )
      __int2c();
    v6 = Value[2]-- == 1LL;
    if ( v6 )
      *Value &= ~2uLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
  dword_1800B4118 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v7 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v7 & 1) == 0 )
      __int2c();
    v6 = v7[1]-- == 1LL;
    if ( v6 )
      *v7 &= ~1uLL;
  }
  v8 = *((_DWORD *)v2 + 140);
  v9 = *((_DWORD *)v2 + 139);
  v10 = *((_QWORD *)v2 - 4);
  v11 = *(_QWORD *)(*((_QWORD *)v2 - 2) + 40LL);
  v137 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 - 64);
  v135 = (__int64)v2 + 24;
  v124 = (__int64)v2 + 488;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned __int64 *, _QWORD))(v11 + 24))(
          v124,
          v9,
          v135,
          v8,
          v10,
          &v144,
          0LL);
  if ( v12 < 0 )
  {
    v17 = 1;
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v143 = v10;
      v117 = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009AB0C,
        v106,
        v107,
        (__int64)&v117,
        (__int64)&v143);
      v14 = v124;
      v126 = v119;
      v16 = v119;
LABEL_26:
      v17 = 1;
      goto LABEL_27;
    }
    v14 = v124;
  }
  else
  {
    v13 = v8;
    v14 = v124;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, unsigned __int64 *))(v11 + 96))(
            v124,
            v9,
            v135,
            v13,
            v10,
            &v129);
    if ( v12 >= 0 )
    {
      v15 = v129 << 12;
      v126 = v129 << 12;
      if ( is_mul_ok(v129, 0x1000uLL) )
      {
        v12 = 0;
      }
      else
      {
        v15 = -1LL;
        v12 = -1073741675;
        v126 = -1LL;
      }
      v129 = v15;
      v16 = v144;
      goto LABEL_26;
    }
    v17 = 1;
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v141 = v10;
      v118 = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009AAC5,
        v108,
        v109,
        (__int64)&v118,
        (__int64)&v141);
      v126 = v119;
      v16 = v119;
      goto LABEL_26;
    }
  }
  v126 = v119;
  v16 = v119;
LABEL_27:
  v120 = v16;
  if ( v12 < 0 )
  {
    v43 = v154;
    goto LABEL_69;
  }
  v115 = v17;
  v119 = 0LL;
  *(_OWORD *)v121 = 0LL;
  v122 = 0LL;
  v18 = 0LL;
  P = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v22 = -1073741801;
    goto LABEL_45;
  }
  v20 = v135;
  while ( 1 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)v2 - 2) + 40LL) + 72LL))(
            v14,
            *((unsigned int *)v2 + 139),
            v20,
            *((unsigned int *)v2 + 140),
            *((_QWORD *)v2 - 4),
            Heap,
            &v115);
    v22 = v21;
    if ( v21 >= 0 )
    {
      v18 = Heap;
      P = Heap;
      v23 = v115;
      goto LABEL_32;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v21 != -2147483643 )
      break;
    RtlFreeHeap(ProcessHeap, 0, Heap);
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v115);
    if ( !Heap )
    {
      v23 = v117;
      v22 = -1073741801;
      goto LABEL_32;
    }
  }
  RtlFreeHeap(ProcessHeap, 0, Heap);
  v23 = v117;
LABEL_32:
  if ( v22 < 0 )
  {
    v25 = (void **)v121[0];
    goto LABEL_226;
  }
  if ( !v23 )
  {
    v27 = (unsigned int *)v121[1];
    ProcessHandle = 0LL;
    v25 = (void **)v121[0];
    v31 = (unsigned int)v122;
LABEL_42:
    v22 = 0;
    goto LABEL_43;
  }
  v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v23);
  v121[0] = v24;
  v25 = (void **)v24;
  if ( !v24 )
  {
    v22 = -1073741801;
LABEL_226:
    v27 = (unsigned int *)v121[1];
    goto LABEL_227;
  }
  memset_0(v24, 0, 8 * v23);
  v26 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v23);
  v121[1] = v26;
  v27 = (unsigned int *)v26;
  if ( v26 )
  {
    memset_0(v26, 0, 4 * v23);
    ProcessHandle = 0LL;
    v25 = (void **)v121[0];
    v28 = v18;
    v29 = v124;
    v30 = v23;
    v31 = (unsigned int)v122;
    do
    {
      v123 = *v28;
      ClientId.UniqueProcess = (HANDLE)v123;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)v137 + 6) + 40LL)
                                                                                                + 80LL))(
               v29,
               *((unsigned int *)v137 + 155),
               (char *)v137 + 88,
               *((unsigned int *)v137 + 156),
               *((_QWORD *)v137 + 4),
               ProcessHandle) )
        {
          v25[v31] = ProcessHandle;
          v27[v31] = v123;
          v31 = (unsigned int)(v31 + 1);
        }
        else
        {
          NtClose(ProcessHandle);
        }
      }
      v28 += 2;
      --v30;
    }
    while ( v30 );
    v2 = v127;
    v18 = (unsigned int *)P;
    LODWORD(v122) = v31;
    goto LABEL_42;
  }
  v25 = (void **)v121[0];
  v22 = -1073741801;
LABEL_227:
  v31 = (unsigned int)v122;
LABEL_43:
  if ( v18 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
LABEL_45:
    v25 = (void **)v121[0];
    v27 = (unsigned int *)v121[1];
    v31 = (unsigned int)v122;
  }
  if ( v22 >= 0 )
  {
    if ( (_DWORD)v31 )
    {
      v32 = v137;
      v33 = v27;
      v34 = (unsigned int)v31;
      v35 = v25;
      do
      {
        RmpActivityHostCommitDebtCallback(v32, *v35++, *v33++, &v119);
        --v34;
      }
      while ( v34 );
      v2 = v127;
      v27 = (unsigned int *)v121[1];
    }
    v22 = 0;
  }
  if ( (_DWORD)v31 )
  {
    v36 = v25;
    do
    {
      NtClose(*v36++);
      --v31;
    }
    while ( v31 );
  }
  if ( v25 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v121[0]);
    v27 = (unsigned int *)v121[1];
  }
  if ( v27 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v121[1]);
  if ( v22 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v38 = (char *)v2 - 64;
      v150 = *((_QWORD *)v2 - 4);
      v128 = v22;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009EFAE,
        v110,
        v111,
        (__int64)&v128,
        (__int64)&v150);
    }
    else
    {
      v38 = (char *)v2 - 64;
    }
    v37 = 0LL;
    v119 = 0LL;
  }
  else
  {
    v37 = v119;
    v38 = (char *)v2 - 64;
  }
  v39 = v120;
  v40 = v120;
  if ( v37 < v120 )
    v40 = v37;
  v41 = v120 - v40;
  if ( v120 && v41 <= 1 )
    v41 = 1LL;
  v42 = v126;
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v123 = *((_DWORD *)v38 + 156);
    v132 = (unsigned __int64)(v38 + 88);
    v133 = *((_QWORD *)v38 + 4);
    v138 = v37;
    v139 = v126;
    v140 = v120;
    v131 = v41 + v126;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v41,
      &unk_18009C441);
  }
  v43 = v39 + v42;
LABEL_69:
  v120 = v43;
  v44 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v45 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v44) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v45 |= 2uLL;
    ++v45[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  *((_DWORD *)v2 + 2) = GetCurrentThreadId();
  v46 = *((_QWORD *)v2 + 81);
  if ( (v46 & 0x80000000000000LL) != 0 )
  {
    v46 &= ~0x80000000000000uLL;
    *((_QWORD *)v2 + 106) = 0LL;
    *((_QWORD *)v2 + 81) = v46;
    *((_QWORD *)v2 + 107) = 0LL;
  }
  v47 = (v46 >> 54) & 1;
  if ( (v46 & 0x100000000000000LL) != 0 )
  {
    LODWORD(v47) = v47 | 2;
    *((_QWORD *)v2 + 81) = v46 & 0xFEFFFFFFFFFFFFFFuLL;
  }
  HampHostComputeStaticEnforcementSettings(
    v2,
    (struct _RM_ENFORCEMENT_SETTINGS *)v162,
    (struct _RM_COMMIT_THRESHOLDS *)&v159,
    (struct _RM_COMMIT_THRESHOLDS *)v164,
    &v134);
  v48 = -1LL;
  v49 = v160;
  v127 = (struct _RM_HAM_ACTIVITY_HOST *)v160;
  v131 = *((_QWORD *)&v159 + 1);
  v132 = v159;
  if ( v43 >= (unsigned __int64)v159 )
  {
    if ( v43 < *((_QWORD *)&v159 + 1) )
    {
      v51 = *((_QWORD *)&v159 + 1);
      v50 = v159;
    }
    else if ( v43 < (unsigned __int64)v160 )
    {
      v50 = *((_QWORD *)&v159 + 1);
      v51 = v160;
    }
    else
    {
      v50 = v160;
      v51 = -1LL;
    }
  }
  else
  {
    v50 = 0LL;
    v51 = v159;
  }
  v52 = *((_QWORD *)&v160 + 1);
  v53 = v43 >> 3;
  if ( (unsigned __int64)(*((_QWORD *)&v160 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    v53 = *((_QWORD *)&v160 + 1) >> 4;
  if ( v53 <= 0x1400000 )
    v53 = 20971520LL;
  v54 = v53 + v43 - 1;
  if ( v53 == 20971520 )
    v55 = v54 / 0x1400000;
  else
    v55 = v54 / v53;
  v56 = -1LL;
  if ( is_mul_ok(v55, v53) )
    v56 = v55 * v53;
  if ( (unsigned __int64)(*((_QWORD *)&v160 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL && v56 > *((_QWORD *)&v160 + 1) )
  {
    v112 = v53 + *((_QWORD *)&v160 + 1) - 1LL;
    v113 = v112 / v53 * v53;
    v56 = -1LL;
    if ( is_mul_ok(v112 / v53, v53) )
      v56 = v113;
  }
  if ( v56 == -1LL || (v57 = v56 + v53, v56 + v53 < v56) )
    v57 = -1LL;
  if ( (unsigned __int64)(*((_QWORD *)&v160 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v114 = *((_QWORD *)&v160 + 1);
    if ( v56 < *((_QWORD *)&v160 + 1) )
      v114 = v56;
    v56 = v114;
    if ( *((_QWORD *)&v160 + 1) < v57 )
      v57 = *((_QWORD *)&v160 + 1);
  }
  v58 = 2 * v53;
  if ( 2 * v53 >= v56 )
    v58 = v56;
  v59 = v56 - v58;
  if ( v50 <= v59 )
    v50 = v59;
  if ( v43 <= *((_QWORD *)&v160 + 1) && v51 >= v57 )
    v51 = v57;
  v162[0] = v50;
  v162[1] = v51;
  if ( v51 != -1LL )
  {
    v60 = *((_QWORD *)v2 + 121);
    if ( v60 <= v51 )
      v60 = v51;
    *((_QWORD *)v2 + 121) = v60;
  }
  v61 = v134;
  if ( *((_QWORD *)v2 + 86) )
  {
    v93 = (*((_QWORD *)v2 + 81) & 0x400000000000000LL) != 0 && *((struct _HAM_ACTIVITY **)v2 + 125) != v134;
    v115 = v93;
    FirstActivity = HampHostGetFirstActivity(v2);
    if ( FirstActivity && (*((_DWORD *)FirstActivity + 28) & 0x80000) != 0 )
    {
      if ( v96 != *((_QWORD *)v2 + 139) )
        v95 = 1;
      v115 = v95;
    }
    if ( *((_QWORD *)v2 + 120) )
      v115 = 1;
  }
  else
  {
    v115 = 0;
  }
  v118 = (*((_QWORD *)v2 + 111) > v49 || *((_QWORD *)v2 + 112) > v52)
      && (*((_QWORD *)v2 + 81) & 0x200000000000000LL) == 0;
  v133 = v166;
  *((_QWORD *)v2 + 106) = v166;
  v134 = v165;
  *((_QWORD *)v2 + 107) = v165;
  *((_QWORD *)v2 + 125) = v61;
  v62 = v159;
  v63 = v160;
  *(_OWORD *)((char *)v2 + 872) = v159;
  *(_OWORD *)((char *)v2 + 888) = v63;
  if ( v61 )
    v64 = *((_QWORD *)v61 + 59);
  else
    v64 = v49;
  if ( v64 == *((_QWORD *)v2 + 108) )
  {
    v117 = 0;
  }
  else
  {
    v117 = 1;
    *((_QWORD *)v2 + 108) = v64;
  }
  if ( v49 == -1LL || (v98 = *((_QWORD *)v2 + 119), v98 == -1) )
  {
    v65 = v48;
  }
  else
  {
    v99 = v49 + v98;
    v65 = v48;
    if ( v99 >= v49 )
      v65 = v99;
  }
  *((_QWORD *)v2 + 117) = v65;
  v66 = *((_QWORD *)v2 + 117);
  if ( v66 == -1LL || (v100 = *((_QWORD *)v2 + 120), v100 == -1) )
  {
    v67 = v48;
  }
  else
  {
    v101 = v66 + v100;
    v67 = v48;
    if ( v101 >= v66 )
      v67 = v101;
  }
  *((_QWORD *)v2 + 117) = v67;
  v68 = (__int64 *)((char *)v2 + 904);
  v69 = *((_QWORD *)v2 + 120);
  *(_OWORD *)((char *)v2 + 904) = v62;
  *(_OWORD *)((char *)v2 + 920) = v63;
  v70 = *((_QWORD *)v2 + 116);
  if ( v70 == -1LL || v69 == -1 )
  {
    v71 = v48;
  }
  else
  {
    v71 = v48;
    if ( v70 + v69 >= v70 )
      v71 = v70 + v69;
  }
  *((_QWORD *)v2 + 116) = v71;
  v72 = *((_QWORD *)v2 + 115);
  if ( v72 == -1LL || v69 == -1 )
  {
    v73 = v48;
  }
  else
  {
    v73 = v48;
    if ( v72 + v69 >= v72 )
      v73 = v72 + v69;
  }
  *((_QWORD *)v2 + 115) = v73;
  v74 = *((_QWORD *)v2 + 114);
  if ( v74 == -1LL || v69 == -1 )
  {
    v75 = v48;
  }
  else
  {
    v75 = v48;
    if ( v74 + v69 >= v74 )
      v75 = v74 + v69;
  }
  *((_QWORD *)v2 + 114) = v75;
  v76 = *v68;
  if ( *v68 != -1 && v69 != -1 && v76 + v69 >= v76 )
    v48 = v76 + v69;
  *v68 = v48;
  *((_QWORD *)v2 + 81) &= ~0x40000000000000uLL;
  if ( HampLockTrackerId != -1 )
  {
    v77 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v77 & 2) == 0 )
      __int2c();
    v6 = v77[2]-- == 1LL;
    if ( v6 )
      *v77 &= ~2uLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
  v78 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v118 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)v2 - 2) + 40LL) + 192LL))(
      *((_QWORD *)v2 + 124),
      1LL);
    HampHostAcquireLockExclusiveEx(v2, 0);
    *((_QWORD *)v2 + 81) &= ~0x80000000000000uLL;
    HampHostReleaseLockExclusiveEx(v2);
    RmpSystemResourceTimerSet(v2, *(unsigned int *)(v78 + 948), *((void **)v2 + 124));
    if ( (unsigned int)dword_1800B3218 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
      {
        v145 = v134;
        v146 = v133;
        v149[0] = *((_QWORD *)v2 - 4);
        v147 = v49;
        v148 = v52;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1800B3218,
          (unsigned int)&unk_1800A1105,
          v102,
          v103,
          (__int64)v149,
          (__int64)&v148,
          (__int64)&v147,
          (__int64)&v146,
          (__int64)&v145);
      }
    }
  }
  if ( v43 >= v132 )
  {
    if ( v43 < v131 )
    {
      v79 = 2;
    }
    else
    {
      v79 = 4;
      if ( v120 < v49 )
        v79 = 3;
    }
  }
  else
  {
    v79 = 1;
  }
  v80 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v81 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v80) )
      __int2c();
    *v81 |= 1uLL;
    ++v81[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v83 = v120;
  dword_1800B4118 = CurrentThreadId;
  if ( v79 >= 4 )
    RmHamHostTryDecommitOffered((struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 - 64), v120, (unsigned __int64)v127);
  v84 = RmpActivityHostApplyEnforcementSettings((char *)v2 - 64, (struct _RM_ENFORCEMENT_SETTINGS *)v162, v47);
  v85 = v84;
  if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 584) & 1) != 0 )
    goto LABEL_252;
  if ( v84 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
LABEL_252:
    if ( v85 < 0 )
    {
      RmpReleaseGlobalLock();
      HampHostQueueTerminateEx(v2, 3u, 4865, 0LL, 0, 0);
      RmpAcquireGlobalLock();
    }
  }
  v86 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v87 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v86) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v87 |= 2uLL;
    ++v87[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  v88 = GetCurrentThreadId();
  v90 = v127;
  *((_DWORD *)v2 + 2) = v88;
  v91 = *((_QWORD *)v2 + 163);
  if ( (v90 != (struct _RM_HAM_ACTIVITY_HOST *)v91 || v117)
    && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              *(ExecutionModel::ResourceManager **)(*((_QWORD *)v2 - 2) + 2720LL),
              (struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 + 24),
              v91,
              (unsigned __int64)v90,
              *((_QWORD *)v2 + 108)) >= 0 )
  {
    *((_QWORD *)v2 + 163) = v90;
  }
  v92 = *((unsigned int *)v2 + 328);
  if ( (_DWORD)v92 != v79 )
  {
    if ( (unsigned int)dword_1800B3218 > 4
      && (byte_1800B3228 & 0x40) != 0
      && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    {
      v149[1] = v162[2];
      v149[4] = *((_QWORD *)v2 - 4);
      v130 = *((_DWORD *)v2 + 140);
      v149[5] = (char *)v2 + 24;
      v149[2] = v90;
      v149[3] = v83;
      v116 = v79;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v89,
        &unk_1800A1172);
      v92 = *((unsigned int *)v2 + 328);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(v78 + 784) + 32LL))(
      *(_QWORD *)(v78 + 784),
      (__int64)v2 - 64,
      v92,
      v79);
    *((_DWORD *)v2 + 328) = v79;
  }
  if ( v115 )
  {
    v105 = HampHostCheckEnterDependencyWorker(v2);
    if ( v105 )
    {
      HampHostReleaseLockExclusiveEx(v2);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v105);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v2, 0);
    }
  }
  return 1LL;
}
