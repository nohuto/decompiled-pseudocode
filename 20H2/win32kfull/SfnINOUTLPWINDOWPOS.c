/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00EDB60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  struct _KTHREAD *v20; // r12
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rax
  char v35; // bl
  char v36; // bl
  __int64 v37; // rcx
  bool v38; // di
  int v39; // r12d
  __int64 v40; // rcx
  struct _KTHREAD *v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 *v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  ULONG64 v54; // rcx
  __int128 v55; // xmm3
  __int64 v56; // xmm0_8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v60; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // ebx
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v72; // rax
  int v73; // edi
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned int v76; // eax
  tagDomLock *v77; // rax
  __int128 v78; // [rsp+48h] [rbp-F0h]
  __int64 v79; // [rsp+58h] [rbp-E0h]
  _QWORD v80[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v81; // [rsp+80h] [rbp-B8h] BYREF
  int v82; // [rsp+88h] [rbp-B0h]
  int v83; // [rsp+8Ch] [rbp-ACh]
  __int64 v84; // [rsp+90h] [rbp-A8h]
  __int128 v85; // [rsp+98h] [rbp-A0h]
  __int128 v86; // [rsp+A8h] [rbp-90h]
  __int64 v87; // [rsp+B8h] [rbp-80h]
  __int64 v88; // [rsp+C0h] [rbp-78h]
  __int64 v89; // [rsp+C8h] [rbp-70h]
  __int64 v90; // [rsp+D0h] [rbp-68h]
  int v91; // [rsp+140h] [rbp+8h] BYREF
  char v92; // [rsp+148h] [rbp+10h]
  unsigned __int64 v93; // [rsp+150h] [rbp+18h] BYREF

  v83 = 0;
  v93 = 0LL;
  v91 = 0;
  v80[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v60),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v19 = 0LL;
  v83 = 0;
  v81 = v19;
  v82 = a2;
  v84 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v85 = *a4;
  v86 = a4[1];
  v87 = *((_QWORD *)a4 + 4);
  v88 = a5;
  v89 = a6;
  v20 = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v18)
    || (v62 = PsGetCurrentProcess(v23, v22, v24),
        v63 = PsGetProcessSessionIdEx(v62),
        v65 = PsGetCurrentThreadProcess(v64),
        v63 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v25 )
      v21 = *v25;
  }
  v80[0] = *(_QWORD *)(v21 + 416);
  *(_QWORD *)(v21 + 416) = v80;
  v80[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v26 = *(_QWORD *)(v13 + 480);
  v78 = *(_OWORD *)(v26 + 64);
  v79 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(v26 + 72) = v19;
  if ( a1 )
    v27 = *a1;
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v27;
  if ( a1 )
    v28 = *(_QWORD *)(a1[5] + 224);
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v28;
  if ( gdwInAtomicOperation )
  {
    v28 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v29 = KeGetCurrentThread();
  v30 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v28)
    || (v66 = PsGetCurrentProcess(v32, v31, v33),
        v67 = PsGetProcessSessionIdEx(v66),
        v69 = PsGetCurrentThreadProcess(v68),
        v67 == (unsigned int)PsGetProcessSessionIdEx(v69)) )
  {
    v34 = (__int64 *)PsGetThreadWin32Thread(v29);
    if ( v34 )
      v30 = *v34;
  }
  v92 = *(_BYTE *)(v30 + 1480);
  v35 = v92;
  *(_BYTE *)(v30 + 1480) = 0;
  v36 = v35 & 1;
  if ( v36 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v30 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v38 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v37);
  EtwTraceBeginCallback(22LL);
  v39 = KeUserModeCallback(22LL, &v81, 80LL, &v93, &v91);
  EtwTraceEndCallback(22LL);
  if ( v38 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v41 = KeGetCurrentThread();
  v42 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v40)
    || (v72 = PsGetCurrentProcess(v44, v43, v45),
        v73 = PsGetProcessSessionIdEx(v72),
        v75 = PsGetCurrentThreadProcess(v74),
        v73 == (unsigned int)PsGetProcessSessionIdEx(v75)) )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v46 )
      v42 = *v46;
  }
  if ( v36 )
  {
    v76 = DLT_THREADINFO::getDLT();
    v77 = (tagDomLock *)GetDomainLockRef(v76);
    tagDomLock::LockShared(v77);
    tagObjLock::LockExclusive((tagObjLock *)(v42 + 392));
  }
  *(_BYTE *)(v42 + 1480) = v92;
  ThreadUnlock1(v48, v47, v49);
  v50 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v50 + 64) = v78;
  *(_QWORD *)(v50 + 80) = v79;
  if ( v39 < 0 || v91 != 24 )
    return 0LL;
  v51 = (__int64 *)v93;
  if ( v93 + 8 < v93 || v93 + 8 > MmUserProbeAddress )
    v51 = (__int64 *)MmUserProbeAddress;
  v52 = *v51;
  v90 = *v51;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v52;
  v53 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( !v53 || (*(_DWORD *)(v53 + 84) & 1) == 0 || *(__int128 **)(v53 + 96) != a4 )
  {
    v54 = *(_QWORD *)(v93 + 16);
    if ( v54 + 40 < v54 || v54 + 40 > MmUserProbeAddress )
      v54 = MmUserProbeAddress;
    v55 = *(_OWORD *)(v54 + 16);
    v56 = *(_QWORD *)(v54 + 32);
    *a4 = *(_OWORD *)v54;
    a4[1] = v55;
    *((_QWORD *)a4 + 4) = v56;
    return v52;
  }
  return 0LL;
}
