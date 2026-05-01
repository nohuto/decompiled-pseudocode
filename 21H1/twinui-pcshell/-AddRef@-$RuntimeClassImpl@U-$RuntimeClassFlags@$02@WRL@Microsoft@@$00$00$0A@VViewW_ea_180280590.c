/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180280590
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800D15C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D15C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800D15D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D15D0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800D15E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D15E0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800D15F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D15F0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WCBA@EAAKXZ @ 0x1800D1600 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D1600.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WCBI@EAAKXZ @ 0x1800D1610 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D1610.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WCCA@EAAKXZ @ 0x1800D1620 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D1620.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800D1630 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D1630.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1800D1640 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D1640.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800D1650 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D1650.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800D1660 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewW_ea_1800D1660.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 560);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 560), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
