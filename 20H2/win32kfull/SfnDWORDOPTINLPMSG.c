/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C012FCB0
 * Callers:
 *     <none>
 * Callees:
 *     _W32ExceptionHandler @ 0x1C025CF44 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v17; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // r15
  struct _KTHREAD *v22; // r12
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v47; // rcx
  bool v48; // di
  int v49; // r15d
  __int64 v50; // rcx
  struct _KTHREAD *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  int v56; // edi
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 *v62; // rax
  unsigned int v63; // eax
  tagDomLock *v64; // rax
  __int64 v65; // rax
  __int64 *v66; // rax
  __int64 result; // rax
  _QWORD v68[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v69; // [rsp+48h] [rbp-C0h]
  __int64 v70; // [rsp+58h] [rbp-B0h]
  _QWORD v71[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v72; // [rsp+70h] [rbp-98h]
  unsigned __int128 v73; // [rsp+80h] [rbp-88h]
  __int128 v74; // [rsp+90h] [rbp-78h]
  __int128 v75; // [rsp+A0h] [rbp-68h]
  __int128 v76; // [rsp+B0h] [rbp-58h]
  __int64 v77; // [rsp+C0h] [rbp-48h]
  char v78; // [rsp+110h] [rbp+8h]
  int v80; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v81; // [rsp+128h] [rbp+20h] BYREF

  v9 = 0LL;
  v81 = 0LL;
  v80 = 0;
  v68[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v17),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v21 = a1[5] - *(_QWORD *)(v11 + 472);
  else
    v21 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v71[0] = v21;
  v71[1] = a2;
  v72 = a3;
  if ( a4 )
  {
    *((_DWORD *)a4 + 3) = 0;
    *((_DWORD *)a4 + 11) = 0;
  }
  DWORD2(v72) = a4 != 0LL;
  if ( a4 )
  {
    v74 = *a4;
    v75 = a4[1];
    v76 = a4[2];
  }
  v73 = __PAIR128__(a6, a5);
  v22 = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v27 = PsGetCurrentProcess(v25, v24, v26),
        v28 = PsGetProcessSessionIdEx(v27),
        v30 = PsGetCurrentThreadProcess(v29),
        v28 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
  {
    v31 = (__int64 *)PsGetThreadWin32Thread(v22);
    if ( v31 )
      v23 = *v31;
  }
  v68[0] = *(_QWORD *)(v23 + 416);
  *(_QWORD *)(v23 + 416) = v68;
  v68[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v32 = *(_QWORD *)(v11 + 480);
  v69 = *(_OWORD *)(v32 + 64);
  v70 = *(_QWORD *)(v32 + 80);
  *(_QWORD *)(v32 + 72) = v21;
  v33 = 0LL;
  if ( a1 )
    v33 = *a1;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v33;
  if ( a1 )
    v34 = *(_QWORD *)(a1[5] + 224);
  else
    v34 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v34;
  if ( gdwInAtomicOperation )
  {
    v34 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v35 = KeGetCurrentThread();
  v36 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v34)
    || (v40 = PsGetCurrentProcess(v38, v37, v39),
        v41 = PsGetProcessSessionIdEx(v40),
        v43 = PsGetCurrentThreadProcess(v42),
        v41 == (unsigned int)PsGetProcessSessionIdEx(v43)) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v44 )
      v36 = *v44;
  }
  v78 = *(_BYTE *)(v36 + 1480);
  *(_BYTE *)(v36 + 1480) = 0;
  if ( (v78 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v36 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v48 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v47);
  EtwTraceBeginCallback(4LL);
  v49 = KeUserModeCallback(4LL, v71, 96LL, &v81, &v80);
  EtwTraceEndCallback(4LL);
  if ( v48 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v51 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v50)
    || (v55 = PsGetCurrentProcess(v53, v52, v54),
        v56 = PsGetProcessSessionIdEx(v55),
        v58 = PsGetCurrentThreadProcess(v57),
        v56 == (unsigned int)PsGetProcessSessionIdEx(v58)) )
  {
    v62 = (__int64 *)PsGetThreadWin32Thread(v51);
    if ( v62 )
      v9 = *v62;
  }
  if ( (v78 & 1) != 0 )
  {
    v63 = DLT_THREADINFO::getDLT();
    v64 = (tagDomLock *)GetDomainLockRef(v63);
    tagDomLock::LockShared(v64);
    tagObjLock::LockExclusive((tagObjLock *)(v9 + 392));
  }
  *(_BYTE *)(v9 + 1480) = v78;
  ThreadUnlock1(v60, v59, v61);
  v65 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v65 + 64) = v69;
  *(_QWORD *)(v65 + 80) = v70;
  if ( v49 < 0 || v80 != 24 )
    return 0LL;
  v66 = (__int64 *)v81;
  if ( v81 + 8 < v81 || v81 + 8 > MmUserProbeAddress )
    v66 = (__int64 *)MmUserProbeAddress;
  result = *v66;
  v77 = result;
  return result;
}
