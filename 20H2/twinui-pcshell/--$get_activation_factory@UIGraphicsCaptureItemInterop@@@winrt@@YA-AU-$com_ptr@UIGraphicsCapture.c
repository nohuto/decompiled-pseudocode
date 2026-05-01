/*
 * XREFs of ??$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@0@AEBUhstring@param@0@@Z @ 0x18042ECD8
 * Callers:
 *     winrt::impl::factory_cache_entry_winrt::Windows::Graphics::Capture::GraphicsCaptureItem_IGraphicsCaptureItemInterop_::call__lambda_2c048fadf96b8b63389f9249f9153b42__&_ @ 0x18042EB48 (winrt--impl--factory_cache_entry_winrt--Windows--Graphics--Capture--GraphicsCaptureItem_IGraphic.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18008E406 (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18008E746 (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<IGraphicsCaptureItemInterop>(_QWORD *a1, __int64 *a2)
{
  signed int ActivationFactory_0; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<IGraphicsCaptureItemInterop>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<IGraphicsCaptureItemInterop>::value,
                            (__int64)&v6);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
