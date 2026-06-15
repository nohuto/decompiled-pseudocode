/*
 * XREFs of ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140010914
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006070 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD40 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000F420 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001BF54 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 *v6; // rbx
  __int64 *v7; // rdx
  __int64 v8; // rcx

  if ( !a2 )
    return ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(a1, a3);
  v6 = *a2;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)a1);
  v7 = (__int64 *)a1[4];
  v8 = *v7;
  v7[2] = *a3;
  a1[4] = v8;
  v7[1] = (__int64)a2;
  *v7 = (__int64)v6;
  ++a1[2];
  if ( *a2 )
    (*a2)[1] = (__int64)v7;
  else
    a1[1] = v7;
  *a2 = v7;
  return (__int64)v7;
}
