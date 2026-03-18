/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00F37D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
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
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  bool v40; // di
  int v41; // r12d
  __int64 v42; // rcx
  struct _KTHREAD *v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  ULONG64 v56; // rcx
  __int128 v57; // xmm3
  __int64 v58; // xmm0_8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v62; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v74; // rax
  int v75; // edi
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // eax
  tagDomLock *v79; // rax
  __int128 v80; // [rsp+48h] [rbp-F0h]
  __int64 v81; // [rsp+58h] [rbp-E0h]
  _QWORD v82[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+80h] [rbp-B8h] BYREF
  int v84; // [rsp+88h] [rbp-B0h]
  int v85; // [rsp+8Ch] [rbp-ACh]
  __int64 v86; // [rsp+90h] [rbp-A8h]
  __int128 v87; // [rsp+98h] [rbp-A0h]
  __int128 v88; // [rsp+A8h] [rbp-90h]
  __int64 v89; // [rsp+B8h] [rbp-80h]
  __int64 v90; // [rsp+C0h] [rbp-78h]
  __int64 v91; // [rsp+C8h] [rbp-70h]
  __int64 v92; // [rsp+D0h] [rbp-68h]
  int v93; // [rsp+140h] [rbp+8h] BYREF
  char v94; // [rsp+148h] [rbp+10h]
  unsigned __int64 v95; // [rsp+150h] [rbp+18h] BYREF

  v85 = 0;
  v95 = 0LL;
  v93 = 0;
  v82[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v62),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(v13 + 464);
  else
    v19 = 0LL;
  v85 = 0;
  v83 = v19;
  v84 = a2;
  v86 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v87 = *a4;
  v88 = a4[1];
  v89 = *((_QWORD *)a4 + 4);
  v90 = a5;
  v91 = a6;
  v20 = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v18)
    || (v64 = PsGetCurrentProcess(v23, v22, v24),
        v65 = PsGetProcessSessionIdEx(v64),
        v67 = PsGetCurrentThreadProcess(v66),
        v65 == (unsigned int)PsGetProcessSessionIdEx(v67)) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v25 )
      v21 = *v25;
  }
  v82[0] = *(_QWORD *)(v21 + 408);
  *(_QWORD *)(v21 + 408) = v82;
  v82[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v26 = *(_QWORD *)(v13 + 472);
  v80 = *(_OWORD *)(v26 + 64);
  v81 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(v26 + 72) = v19;
  if ( a1 )
    v27 = *a1;
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v27;
  if ( a1 )
    v28 = *(_QWORD *)(a1[5] + 224);
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v28;
  if ( gdwInAtomicOperation )
  {
    v28 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v29 = KeGetCurrentThread();
  v30 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v28)
    || (v68 = PsGetCurrentProcess(v32, v31, v33),
        v69 = PsGetProcessSessionIdEx(v68),
        v71 = PsGetCurrentThreadProcess(v70),
        v69 == (unsigned int)PsGetProcessSessionIdEx(v71)) )
  {
    v34 = (__int64 *)PsGetThreadWin32Thread(v29);
    if ( v34 )
      v30 = *v34;
  }
  v94 = *(_BYTE *)(v30 + 1472);
  v35 = v94;
  *(_BYTE *)(v30 + 1472) = 0;
  v36 = v35 & 1;
  if ( v36 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v30 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v40 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v38, v37, v39);
  EtwTraceBeginCallback(22LL);
  v41 = KeUserModeCallback(22LL, &v83, 80LL, &v95, &v93);
  EtwTraceEndCallback(22LL);
  if ( v40 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v43 = KeGetCurrentThread();
  v44 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v42)
    || (v74 = PsGetCurrentProcess(v46, v45, v47),
        v75 = PsGetProcessSessionIdEx(v74),
        v77 = PsGetCurrentThreadProcess(v76),
        v75 == (unsigned int)PsGetProcessSessionIdEx(v77)) )
  {
    v48 = (__int64 *)PsGetThreadWin32Thread(v43);
    if ( v48 )
      v44 = *v48;
  }
  if ( v36 )
  {
    v78 = DLT_THREADINFO::getDLT();
    v79 = (tagDomLock *)GetDomainLockRef(v78);
    tagDomLock::LockShared(v79);
    tagObjLock::LockExclusive((tagObjLock *)(v44 + 384));
  }
  *(_BYTE *)(v44 + 1472) = v94;
  ThreadUnlock1(v50, v49, v51);
  v52 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v52 + 64) = v80;
  *(_QWORD *)(v52 + 80) = v81;
  if ( v41 < 0 || v93 != 24 )
    return 0LL;
  v53 = (__int64 *)v95;
  if ( v95 + 8 < v95 || v95 + 8 > MmUserProbeAddress )
    v53 = (__int64 *)MmUserProbeAddress;
  v54 = *v53;
  v92 = *v53;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v54;
  v55 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v55 || (*(_DWORD *)(v55 + 84) & 1) == 0 || *(__int128 **)(v55 + 96) != a4 )
  {
    v56 = *(_QWORD *)(v95 + 16);
    if ( v56 + 40 < v56 || v56 + 40 > MmUserProbeAddress )
      v56 = MmUserProbeAddress;
    v57 = *(_OWORD *)(v56 + 16);
    v58 = *(_QWORD *)(v56 + 32);
    *a4 = *(_OWORD *)v56;
    a4[1] = v57;
    *((_QWORD *)a4 + 4) = v58;
    return v54;
  }
  return 0LL;
}
