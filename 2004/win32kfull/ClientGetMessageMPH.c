/*
 * XREFs of ClientGetMessageMPH @ 0x1C00931E8
 * Callers:
 *     NtUserGetMessage @ 0x1C0093FD0 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C00940E0 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _OWORD *v6; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  char v13; // bl
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // di
  int v19; // r12d
  __int64 v20; // rcx
  struct _KTHREAD *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v36; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v40; // rax
  int v41; // edi
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // eax
  tagDomLock *v45; // rax
  __int64 v46; // [rsp+48h] [rbp-40h] BYREF
  int v47; // [rsp+50h] [rbp-38h]
  int v48; // [rsp+54h] [rbp-34h]
  int v49; // [rsp+58h] [rbp-30h]
  int v50; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int64 v51; // [rsp+98h] [rbp+10h] BYREF
  int v52; // [rsp+A0h] [rbp+18h] BYREF

  v6 = a1;
  v51 = 0LL;
  v52 = 0;
  v46 = a2;
  v47 = a3;
  v48 = a4;
  v49 = a5;
  v50 = a6;
  if ( gdwInAtomicOperation )
  {
    a1 = (_OWORD *)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v36),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  LOBYTE(a5) = *(_BYTE *)(v8 + 1472);
  v13 = a5;
  *(_BYTE *)(v8 + 1472) = 0;
  v14 = v13 & 1;
  if ( v14 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v8 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v18 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v16, v15, v17);
  EtwTraceBeginCallback(73LL);
  v19 = KeUserModeCallback(73LL, &v46, 24LL, &v51, &v52);
  EtwTraceEndCallback(73LL);
  if ( v18 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v20)
    || (v40 = PsGetCurrentProcess(v24, v23, v25),
        v41 = PsGetProcessSessionIdEx(v40),
        v43 = PsGetCurrentThreadProcess(v42),
        v41 == (unsigned int)PsGetProcessSessionIdEx(v43)) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v26 )
      v22 = *v26;
  }
  if ( v14 )
  {
    v44 = DLT_THREADINFO::getDLT();
    v45 = (tagDomLock *)GetDomainLockRef(v44);
    tagDomLock::LockShared(v45);
    tagObjLock::LockExclusive((tagObjLock *)(v22 + 384));
  }
  *(_BYTE *)(v22 + 1472) = a5;
  if ( v19 < 0 || v52 != 24 )
    return 0LL;
  v27 = (__int64 *)v51;
  if ( v51 + 8 < v51 || v51 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  v28 = *v27;
  v29 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v29 )
  {
    if ( (*(_DWORD *)(v29 + 84) & 1) != 0 && *(_OWORD **)(v29 + 96) == v6 )
      return 0LL;
  }
  v30 = *(_OWORD **)(v51 + 16);
  if ( v30 + 3 < v30 || (unsigned __int64)(v30 + 3) > MmUserProbeAddress )
    v30 = (_OWORD *)MmUserProbeAddress;
  v31 = v30[1];
  v32 = v30[2];
  *v6 = *v30;
  v6[1] = v31;
  v6[2] = v32;
  return (unsigned int)v28;
}
