/*
 * XREFs of MiContractWsSwapPageFile @ 0x1406BECDC
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140255630 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmInSwapWorkingSet @ 0x1402A1434 (MmInSwapWorkingSet.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x140734850 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x1402611C8 (MiNumberWsSwapPagefiles.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     MiWsSwapPageFileNumber @ 0x1402A12DC (MiWsSwapPageFileNumber.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
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
