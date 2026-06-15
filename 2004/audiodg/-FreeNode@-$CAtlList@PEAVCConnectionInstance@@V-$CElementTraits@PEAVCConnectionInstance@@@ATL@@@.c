/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14001AC88
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000DE60 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000FFA0 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000FFA0 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 */

void __fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf

  *a2 = *(_QWORD *)(a1 + 32);
  v2 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(a1);
}
