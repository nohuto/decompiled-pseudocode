/*
 * XREFs of ??1?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140036F3C
 * Callers:
 *     _PublishDeviceGraphWnfState_::_1_::dtor$0 @ 0x140022850 (_PublishDeviceGraphWnfState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::~CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>(
        __int64 a1)
{
  return ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(a1);
}
