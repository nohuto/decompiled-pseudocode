/*
 * XREFs of ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x18040A3AC
 * Callers:
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x18040B350 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ @ 0x18047F8B0 (-_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x18047FC40 (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x1804800AC (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 *     ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x180483E5C (-_CommitLayoutItems@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
           a2);
}
