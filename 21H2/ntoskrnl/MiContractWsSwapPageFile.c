/*
 * XREFs of MiContractWsSwapPageFile @ 0x14071068C
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140267690 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmInSwapWorkingSet @ 0x14035C504 (MmInSwapWorkingSet.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x140734690 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x140273228 (MiNumberWsSwapPagefiles.c)
 *     PsReferencePartitionSafe @ 0x1402AC004 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1402F78AC (ExQueueWorkItemToPartition.c)
 *     MiWsSwapPageFileNumber @ 0x14035C3AC (MiWsSwapPageFileNumber.c)
 */

char __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r11
  __int64 v3; // r11
  _QWORD *v4; // rcx
  __int64 v5; // r11

  LODWORD(v1) = MiNumberWsSwapPagefiles(a1);
  if ( (_DWORD)v1 )
  {
    LODWORD(v1) = MiWsSwapPageFileNumber(v2);
    v4 = *(_QWORD **)(v3 + 8LL * (unsigned int)v1 + 6944);
    if ( v4[3] >= 0x10000uLL && v4[6] >= 0x10000uLL )
    {
      v1 = *v4 - 0x10000LL;
      if ( v1 >= v4[2] )
      {
        LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1120), 1, 0);
        if ( !(_DWORD)v1 )
        {
          LOBYTE(v1) = PsReferencePartitionSafe(*(_QWORD *)(v3 + 176));
          if ( (_BYTE)v1 )
            LOBYTE(v1) = ExQueueWorkItemToPartition((_QWORD *)(v5 + 1088), 3, 0xFFFFFFFF, *(_QWORD *)(v5 + 176));
          else
            _InterlockedExchange((volatile __int32 *)(v5 + 1120), 0);
        }
      }
    }
  }
  return v1;
}
