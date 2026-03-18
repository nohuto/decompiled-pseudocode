/*
 * XREFs of _IsMessageOnlyWindow@4 @ 0xADBD2
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _NtUserSetBrokeredForeground@4 @ 0xE7570 (_NtUserSetBrokeredForeground@4.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall IsMessageOnlyWindow(int a1)
{
  int v1; // ecx
  int v2; // eax

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
    v1 = *(_DWORD *)(v2 + 52);
  return *(_DWORD *)(a1 + 56) == v1;
}
