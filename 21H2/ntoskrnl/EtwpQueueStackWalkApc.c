/*
 * XREFs of EtwpQueueStackWalkApc @ 0x1406314E0
 * Callers:
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpStackTraceDispatcher @ 0x140460770 (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkDpc @ 0x140631A30 (EtwpStackWalkDpc.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     KeTryToInsertQueueApc @ 0x140570750 (KeTryToInsertQueueApc.c)
 *     EtwpPopFreeApcEntry @ 0x140631448 (EtwpPopFreeApcEntry.c)
 *     EtwpQueueStackWalkDpc @ 0x140631710 (EtwpQueueStackWalkDpc.c)
 */

char __fastcall EtwpQueueStackWalkApc(__int64 a1, unsigned __int8 a2, unsigned int *a3, char a4, _SLIST_ENTRY **a5)
{
  char v5; // r13
  struct _SLIST_ENTRY *v6; // rbp
  unsigned int v7; // esi
  PSLIST_ENTRY v12; // rax
  __int64 v13; // r15
  char inserted; // al
  signed int v16; // ecx

  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread()
    || *(_DWORD *)(*(_QWORD *)(a1 + 544) + 888LL) + ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 632LL) >> 3) & 1)
    || *(_BYTE *)(a1 + 644) )
  {
    return 0;
  }
  if ( a4 )
  {
    if ( _bittest((const signed __int32 *)(a1 + 120), 0x17u) )
      return 0;
  }
  else
  {
    v7 = (*((_WORD *)a3 + 409) & 7) + 24;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), v7) )
      return 0;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) == 0 )
    goto LABEL_18;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a3 + 137) + 448LL) + 8LL * *a3),
          1u) )
    goto LABEL_18;
  v5 = 1;
  v12 = EtwpPopFreeApcEntry((__int64)a3, a2);
  v6 = v12;
  if ( !v12 || !a3[80] )
    goto LABEL_18;
  v13 = (__int64)&v12[-7];
  *((_BYTE *)&v12[1].Next + 8) = a4;
  v12[1].Next = *a5;
  KeInitializeApc(
    (__int64)&v12[-7],
    a1,
    0,
    (__int64)EtwpStackWalkApc,
    (__int64)EtwpCancelStackWalkApc,
    (__int64)EtwpStackWalkApc,
    0,
    (__int64)a3);
  if ( a2 <= 2u )
    inserted = KeInsertQueueApc(v13, 0LL, 0LL, 0);
  else
    inserted = KeTryToInsertQueueApc(v13, 0LL);
  if ( !a3[80] )
  {
    if ( inserted && !KeRemoveQueueApc(v13) )
      return 0;
    goto LABEL_18;
  }
  if ( !inserted )
  {
    if ( a2 > 2u )
    {
      if ( a4 )
      {
LABEL_21:
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)a3 + 58, v6);
LABEL_22:
        if ( v5 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a3 + 137) + 448LL) + 8LL * *a3),
            1u);
        return 0;
      }
      EtwpQueueStackWalkDpc(a1, a3, a5);
LABEL_19:
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), v7);
LABEL_20:
      if ( !v6 )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_18:
    if ( a4 )
      goto LABEL_20;
    goto LABEL_19;
  }
  _InterlockedIncrement((volatile signed __int32 *)a3 + 243);
  v16 = a3[243];
  if ( v16 > (int)a3[244] )
    a3[244] = v16;
  return 1;
}
