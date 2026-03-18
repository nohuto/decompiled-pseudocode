/*
 * XREFs of ClientWaitMessageExMPH @ 0x1C00F23D0
 * Callers:
 *     NtUserWaitMessage @ 0x1C00F2360 (NtUserWaitMessage.c)
 *     xxxWaitMessageEx @ 0x1C01E30A8 (xxxWaitMessageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientWaitMessageExMPH(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // di
  int v12; // r15d
  __int64 v13; // rcx
  struct _KTHREAD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rax
  ULONG64 v20; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v28; // rax
  int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // eax
  tagDomLock *v33; // rax
  char v34; // [rsp+70h] [rbp+8h]
  int v35; // [rsp+78h] [rbp+10h] BYREF
  int v36; // [rsp+80h] [rbp+18h] BYREF
  int v37; // [rsp+84h] [rbp+1Ch]
  unsigned __int64 v38; // [rsp+88h] [rbp+20h] BYREF

  v38 = 0LL;
  v35 = 0;
  v36 = a1;
  v37 = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v34 = *(_BYTE *)(v3 + 1472);
  *(_BYTE *)(v3 + 1472) = 0;
  if ( (v34 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v3 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v11 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  EtwTraceBeginCallback(89LL);
  v12 = KeUserModeCallback(89LL, &v36, 8LL, &v38, &v35);
  EtwTraceEndCallback(89LL);
  if ( v11 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v28 = PsGetCurrentProcess(v17, v16, v18),
        v29 = PsGetProcessSessionIdEx(v28),
        v31 = PsGetCurrentThreadProcess(v30),
        v29 == (unsigned int)PsGetProcessSessionIdEx(v31)) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v19 )
      v15 = *v19;
  }
  if ( (v34 & 1) != 0 )
  {
    v32 = DLT_THREADINFO::getDLT();
    v33 = (tagDomLock *)GetDomainLockRef(v32);
    tagDomLock::LockShared(v33);
    tagObjLock::LockExclusive((tagObjLock *)(v15 + 384));
  }
  *(_BYTE *)(v15 + 1472) = v34;
  if ( v12 < 0 || v35 != 24 )
    return 0LL;
  v20 = v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v20 = MmUserProbeAddress;
  return *(_QWORD *)v20;
}
