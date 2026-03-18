/*
 * XREFs of ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1C0034640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C00346A0 (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C0035AE0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 */

unsigned __int8 __fastcall FxDmaScatterGatherTransaction::Dispose(FxDmaScatterGatherTransaction *this)
{
  unsigned __int8 v2; // di

  v2 = FxDmaTransactionBase::Dispose(this);
  if ( this->m_SGListBuffer )
  {
    FxDmaScatterGatherTransaction::FreeSgListBuffer(this);
    this->m_DmaEnabler->Release(
      this->m_DmaEnabler,
      this,
      145,
      "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
  }
  return v2;
}
