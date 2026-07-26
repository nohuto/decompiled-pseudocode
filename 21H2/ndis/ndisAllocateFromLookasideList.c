/*
 * XREFs of ndisAllocateFromLookasideList @ 0x1C0018298
 * Callers:
 *     ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0018154 (-ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall ndisAllocateFromLookasideList(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  KIRQL v4; // al
  __int64 v5; // r8

  ++*(_DWORD *)(a1 + 20);
  v2 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(a1 + 192));
  if ( !v2 )
  {
    if ( ExQueryDepthSList(*(PSLIST_HEADER *)(a1 + 200)) < 0xAu
      || (v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 208)),
          v5 = *(_QWORD *)(a1 + 192),
          *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200),
          *(_QWORD *)(a1 + 200) = v5,
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 208), v4),
          (v2 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(a1 + 192))) == 0LL) )
    {
      ++*(_DWORD *)(a1 + 24);
    }
  }
  return v2;
}
