/*
 * XREFs of NtInitiatePowerAction @ 0x140762A00
 * Callers:
 *     IopWarmEjectDevice @ 0x1408B1510 (IopWarmEjectDevice.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409AF6A0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F21A4 (PopBsdHandleRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140762940 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall NtInitiatePowerAction(int a1, int a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS Lock; // edi
  struct _KEVENT *v6; // rbx
  char PreviousMode; // r12
  struct _KEVENT *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *p_WaitListHead; // rsi
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char **Blink; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v22[4]; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+4Ch] [rbp-14h]
  __int128 v25; // [rsp+50h] [rbp-10h]

  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Lock = 0;
  v6 = 0LL;
  Timeout.QuadPart = -1500000000LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 == 7 )
      return 3221225485LL;
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
      return 3221225569LL;
  }
  if ( a2 > 7 || a1 > 7 || (a3 & 0x10000000) != 0 || a1 == 2 && a2 >= 5 || (a3 & 0xCFFFFC0) != 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 4) > 2 && PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  v22[2] = 0;
  v22[0] = a1;
  v22[1] = a3;
  v24 = 128;
  v25 = 0LL;
  if ( !PreviousMode && a1 == 6 && (a3 & 0x3000000) != 0 )
  {
    v23 = 15;
  }
  else
  {
    v23 = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall(a1, a2);
  }
  if ( !a4 )
  {
    PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x57634150u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *(_OWORD *)&PoolWithTag->Header.Lock = 0LL;
    *(_OWORD *)&PoolWithTag->Header.WaitListHead.Blink = 0LL;
    PoolWithTag[1].Header.WaitListHead = 0LL;
    *(_QWORD *)&PoolWithTag[2].Header.Lock = &v23;
    KeInitializeEvent(PoolWithTag, NotificationEvent, 0);
    v24 |= 0x20u;
    *(_QWORD *)&v25 = v6;
  }
  if ( (unsigned int)(a1 - 4) <= 2 && (BYTE8(PopBsdPowerTransition) & 8) == 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 8u;
    LOBYTE(PopBsdPowerTransitionExtension) = dword_140C22E54;
    PopBsdHandleRequest(8);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  PopAcquirePolicyLock(a1);
  PopExecutePowerAction((unsigned int)&v23, 0, (unsigned int)v22, a2, 1);
  PopReleasePolicyLock(v14, v13);
  if ( v6 )
  {
    p_WaitListHead = (char *)&v6[1].Header.WaitListHead;
    if ( !v6[1].Header.WaitListHead.Flink )
      goto LABEL_23;
    Lock = KeWaitForSingleObject(v6, Suspended, 0, 1u, &Timeout);
    if ( Lock == 258 && (byte_140C22E41 & 3) != 0 )
      Lock = KeWaitForSingleObject(v6, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock(v16);
    v18 = *(_QWORD *)p_WaitListHead;
    if ( *(char **)(*(_QWORD *)p_WaitListHead + 8LL) != p_WaitListHead
      || (Blink = (char **)v6[1].Header.WaitListHead.Blink, *Blink != p_WaitListHead) )
    {
      __fastfail(3u);
    }
    *Blink = (char *)v18;
    *(_QWORD *)(v18 + 8) = Blink;
    PopReleasePolicyLock(v18, v17);
    if ( Lock >= 0 )
    {
LABEL_23:
      Lock = v6[1].Header.Lock;
      if ( Lock >= 0 )
        Lock = 0;
    }
    ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)Lock;
}
