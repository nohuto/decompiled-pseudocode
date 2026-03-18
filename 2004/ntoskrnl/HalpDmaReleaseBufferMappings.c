/*
 * XREFs of HalpDmaReleaseBufferMappings @ 0x1404C2F9C
 * Callers:
 *     HalpDmaFreeMapRegisters @ 0x1404C2BC8 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C3304 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaZeroMapBuffers @ 0x1404C39E4 (HalpDmaZeroMapBuffers.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     MmUnmapReservedMapping @ 0x14052C7C0 (MmUnmapReservedMapping.c)
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
      MmUnmapReservedMapping(v7, 0x206C6148u, *(PMDL *)a4);
      if ( !byte_140C53D18 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(a4 + 24));
        v8 = *(_QWORD *)(a4 + 16);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 24), 0xFFFFFFFF) == 1
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) )
        {
          RtlpInterlockedPushEntrySList(&stru_140CF6320, (PSLIST_ENTRY)v8);
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
