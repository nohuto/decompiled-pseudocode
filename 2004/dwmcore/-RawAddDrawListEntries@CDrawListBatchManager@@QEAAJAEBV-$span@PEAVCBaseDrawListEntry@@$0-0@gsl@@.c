/*
 * XREFs of ?RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x180019EC8
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18007BAA4 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z @ 0x18007E7A0 (-AddMultipleAndSet@-$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::RawAddDrawListEntries(__int64 a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  v2 = DynArray<CBaseDrawListEntry *,0>::AddMultipleAndSet(a1, *((_QWORD *)a2 + 1), *a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xA3u, 0LL);
  return v4;
}
