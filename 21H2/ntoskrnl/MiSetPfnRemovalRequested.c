/*
 * XREFs of MiSetPfnRemovalRequested @ 0x1405ADDA8
 * Callers:
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiRemoveBadPages @ 0x14058E448 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14058EB84 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14059F908 (MiMarkFileOnlyPfnBad.c)
 *     MiMakePageBad @ 0x1405C4E28 (MiMakePageBad.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddPendingBadPageNode @ 0x14058DFB8 (MiAddPendingBadPageNode.c)
 *     MiRemovePendingBadPageNode @ 0x14058E7F4 (MiRemovePendingBadPageNode.c)
 */

void __fastcall MiSetPfnRemovalRequested(unsigned __int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned __int8 v4; // bl
  __int64 v9; // rbp

  v4 = *(_BYTE *)(a1 + 35);
  if ( ((v4 >> 6) & 1) != a2 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
         + 24512LL
         * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) + 2);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 22848));
      *(_QWORD *)(v9 + 22904) += a2 != 0 ? 1LL : -1LL;
    }
    if ( (v4 & 0x40) != 0 )
    {
      if ( a3 )
        MiRemovePendingBadPageNode(a1);
    }
    else
    {
      MiAddPendingBadPageNode(a1, a4);
    }
    *(_BYTE *)(a1 + 35) = v4 ^ (v4 ^ ((_BYTE)a2 << 6)) & 0x40;
    if ( v9 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 22848));
  }
}
