/*
 * XREFs of ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x1C005551C
 * Callers:
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C005562C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxDmaEnabler::FreeResources(FxDmaEnabler *this, _FxDmaDescription *AdapterInfo)
{
  _DMA_ADAPTER *AdapterObject; // rcx

  AdapterObject = AdapterInfo->AdapterObject;
  if ( AdapterObject )
  {
    ((void (*)(void))AdapterObject->DmaOperations->PutDmaAdapter)();
    AdapterInfo->AdapterObject = 0LL;
  }
}
