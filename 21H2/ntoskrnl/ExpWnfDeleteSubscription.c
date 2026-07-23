/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1406A2BD8
 * Callers:
 *     ExUnsubscribeWnfStateChange @ 0x140611AD0 (ExUnsubscribeWnfStateChange.c)
 *     NtUnsubscribeWnfStateChange @ 0x1406A1090 (NtUnsubscribeWnfStateChange.c)
 *     ExpWnfDeleteProcessContext @ 0x1406A2998 (ExpWnfDeleteProcessContext.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, PEPROCESS a2)
{
  unsigned __int64 v2; // r15
  int v4; // esi
  _RTL_BALANCED_NODE *v5; // rax
  _RTL_BALANCED_NODE *v6; // rbp
  __int64 Count; // rbp
  int v8; // r13d
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // r14
  struct _EX_RUNDOWN_REF **v11; // rdx
  PVOID *v12; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v14; // rdx
  PVOID *v15; // rcx
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // r12
  int v18; // ecx
  int v19; // r12d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  BOOL v23; // [rsp+70h] [rbp+18h]

  v2 = a2[1].EndPadding[7];
  v4 = 1;
  if ( v2 )
  {
    v5 = KeAbPreAcquire(v2 + 80, 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 80), v5, v2 + 80);
    if ( v6 )
      BYTE2(v6[1].Left) |= 1u;
  }
  if ( !P[5].Count )
  {
    v4 = 0;
    goto LABEL_42;
  }
  Count = P[6].Count;
  v8 = 0;
  v23 = 0;
  if ( Count )
  {
    v9 = KeAbPreAcquire(Count + 112, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v9, Count + 112);
    if ( v10 )
      BYTE2(v10[1].Left) |= 1u;
    v11 = (struct _EX_RUNDOWN_REF **)P[8].Count;
    if ( v11[1] != &P[8] )
      goto LABEL_60;
    v12 = (PVOID *)P[9].Count;
    if ( *v12 != &P[8] )
      goto LABEL_60;
    *v12 = v11;
    v11[1] = (struct _EX_RUNDOWN_REF *)v12;
    Ptr_high = HIDWORD(P[12].Ptr);
    P[6].Count = 0LL;
    if ( (Ptr_high & 1) != 0 )
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
  }
  v14 = (struct _EX_RUNDOWN_REF **)P[3].Count;
  if ( v14[1] != &P[3] )
    goto LABEL_60;
  v15 = (PVOID *)P[4].Count;
  if ( *v15 != &P[3] )
    goto LABEL_60;
  *v15 = v14;
  v14[1] = (struct _EX_RUNDOWN_REF *)v15;
  v16 = KeAbPreAcquire(v2 + 104, 0LL, 0);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 104), v16, v2 + 104);
  if ( v17 )
    BYTE2(v17[1].Left) |= 1u;
  v18 = P[15].Count;
  if ( v18 != 1 && ((PEPROCESS)P[5].Count == PsInitialSystemProcess || !v18) )
    goto LABEL_25;
  v20 = (struct _EX_RUNDOWN_REF **)P[13].Count;
  if ( v20[1] != &P[13] || (v21 = (PVOID *)P[14].Count, *v21 != &P[13]) )
LABEL_60:
    __fastfail(3u);
  *v21 = v20;
  v20[1] = (struct _EX_RUNDOWN_REF *)v21;
  if ( Count && (BYTE4(P[12].Ptr) & 1) != 0 && ((BYTE4(P[15].Ptr) & 1) != 0 || (P[16].Count & 1) != 0) )
    LOBYTE(v8) = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 164), 0xFFFFFFFF) == 1;
LABEL_25:
  P[5].Count = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2 + 104);
  KeAbPostRelease(v2 + 104);
  if ( Count )
  {
    v19 = 0;
    if ( v23 || v8 )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(Count + 8)) )
      {
        v19 = 1;
      }
      else
      {
        v23 = 0;
        v8 = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Count + 112);
    KeAbPostRelease(Count + 112);
    if ( v2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v2 + 80);
      KeAbPostRelease(v2 + 80);
      v2 = 0LL;
    }
    if ( v8 )
      ExpWnfNotifyNameSubscribers(Count, 8u, 1, a2 != PsInitialSystemProcess);
    if ( v23 )
      ExpWnfNotifyNameSubscribers(Count, 4u, 1, a2 != PsInitialSystemProcess);
    if ( v19 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(Count + 8));
  }
LABEL_42:
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 + 80);
    KeAbPostRelease(v2 + 80);
  }
  ExReleaseRundownProtection(P + 1);
  if ( v4 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
