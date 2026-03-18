/*
 * XREFs of ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x1C005452C
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x1C0075908 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 */

CIFlipPresentHistoryTokenFlipManager *__fastcall CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
        CIFlipPresentHistoryTokenFlipManager *this,
        const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *a2)
{
  *(_QWORD *)this = &CIFlipPresentHistoryTokenFlipManager::`vftable';
  FlipManagerTokenObject::LockForWrite((PVOID)a2->hPrivateData, (struct CFlipManagerToken **)this + 1);
  return this;
}
