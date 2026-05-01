/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802B7B50
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001F320 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180025DC0 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800F8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8BD0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800F8BE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8BE0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800F8BF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8BF0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800F8C00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8C00.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCFA@EAAKXZ @ 0x1800F8C10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8C10.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCFI@EAAKXZ @ 0x1800F8C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8C20.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800F8C30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8C30.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1800F8C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8C40.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800F8C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8C50.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800F8C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8C60.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x1800F8C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1800F8C70.c)
 *     ??1?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B15AC (--1-$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVLegacyWindowWrapper@@@Z @ 0x1802B4428 (-Attach@-$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVLegacyWindowWrapper@@@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091EB0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 616);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 616), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
