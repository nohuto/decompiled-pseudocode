/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1406510F0
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140650EB0 (ExpWnfDeleteProcessContext.c)
 *     NtUnsubscribeWnfStateChange @ 0x140651490 (NtUnsubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x1406D4F50 (ExUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140653290 (ExpWnfNotifyNameSubscribers.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, __int64 a2)
{
  __int64 v2; // r15
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 Count; // rbp
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r14
  struct _EX_RUNDOWN_REF **v11; // rdx
  PVOID *v12; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v14; // rdx
  PVOID *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r12
  int v18; // ecx
  int v19; // r12d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  BOOL v22; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 2152);
  v4 = 1;
  if ( v2 )
  {
    v5 = KeAbPreAcquire(v2 + 80, 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 80), v5, v2 + 80);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
  }
  if ( !P[5].Count )
  {
    v4 = 0;
    goto LABEL_42;
  }
  Count = P[6].Count;
  v8 = 0;
  v22 = 0;
  if ( Count )
  {
    v9 = KeAbPreAcquire(Count + 112, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v9, Count + 112);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
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
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
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
    *(_BYTE *)(v17 + 26) |= 1u;
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
    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
  KeAbPostRelease(v2 + 104);
  if ( Count )
  {
    v19 = 0;
    if ( v22 || v8 )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8)) )
      {
        v19 = 1;
      }
      else
      {
        v22 = 0;
        v8 = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Count + 112));
    KeAbPostRelease(Count + 112);
    if ( v2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
      KeAbPostRelease(v2 + 80);
      v2 = 0LL;
    }
    if ( v8 )
      ExpWnfNotifyNameSubscribers(Count, 8LL, 1LL);
    if ( v22 )
      ExpWnfNotifyNameSubscribers(Count, 4LL, 1LL);
    if ( v19 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8));
  }
LABEL_42:
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
    KeAbPostRelease(v2 + 80);
  }
  ExReleaseRundownProtection_0(P + 1);
  if ( v4 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
