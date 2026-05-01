/*
 * XREFs of ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x18033CD94
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x180336B58 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 *     ??1?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x180339660 (--1-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x1803399BC (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x180341774 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@UIDesktopKeyboardHostingPolicy@KeyboardHosting@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180341350 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShe_ea_180341350.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
