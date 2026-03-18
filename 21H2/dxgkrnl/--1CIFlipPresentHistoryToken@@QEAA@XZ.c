/*
 * XREFs of ??1CIFlipPresentHistoryToken@@QEAA@XZ @ 0x1C0315B48
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken(CIFlipPresentHistoryToken *this)
{
  if ( this )
    (**(void (__fastcall ***)(CIFlipPresentHistoryToken *, __int64))this)(this, 1LL);
}
