/*
 * XREFs of ??0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C002C7B0
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     <none>
 */

CIFlipPresentHistoryTokenRedirectedFlip *__fastcall CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CIFlipPresentHistoryTokenRedirectedFlip::`vftable';
  return this;
}
