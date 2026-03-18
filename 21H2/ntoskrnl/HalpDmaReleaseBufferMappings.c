/*
 * XREFs of HalpDmaReleaseBufferMappings @ 0x140457742
 * Callers:
 *     HalpDmaFreeMapRegisters @ 0x14045746C (HalpDmaFreeMapRegisters.c)
 *     HalpDmaSyncMapBuffers @ 0x140457A42 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaZeroMapBuffers @ 0x140513F84 (HalpDmaZeroMapBuffers.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 */

void __fastcall HalpDmaReleaseBufferMappings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a3;
  if ( *(_QWORD *)a4 )
  {
    v7 = *(void **)(a4 + 8);
    if ( *(_BYTE *)(a4 + 48) )
    {
      MmUnmapReservedMapping(v7, 0x446C6148u, *(PMDL *)a4);
      if ( !byte_140C5A858 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(a4 + 24));
        v8 = *(_QWORD *)(a4 + 16);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 24), 0xFFFFFFFF) == 1
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) )
        {
          RtlpInterlockedPushEntrySList(&stru_140D01AD0, (PSLIST_ENTRY)v8);
        }
      }
    }
    else
    {
      MmUnmapLockedPages(v7, *(PMDL *)a4);
    }
    if ( (_DWORD)v4 )
    {
      v9 = v4;
      do
      {
        if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 )
          *(_QWORD *)(a2 + 48) = *(_DWORD *)(a2 + 48) & 0xFEF;
        a2 = *(_QWORD *)(a2 + 8);
        --v9;
      }
      while ( v9 );
    }
  }
}
