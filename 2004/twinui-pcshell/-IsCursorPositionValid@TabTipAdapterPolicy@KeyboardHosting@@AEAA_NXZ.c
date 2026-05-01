/*
 * XREFs of ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18036925C
 * Callers:
 *     ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180369004 (-IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x18035E54C (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAUtagRECT@@@Z @ 0x1803685EC (-GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAUtagRECT@@@Z.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid(KeyboardHosting::TabTipAdapterPolicy *this)
{
  bool result; // al
  struct tagRECT v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct tagRECT)*((_OWORD *)this + 9);
  result = 0;
  if ( !KeyboardHosting::IsRectNull((float *)&v3.left)
    || (v3 = (struct tagRECT)*((_OWORD *)this + 11), !KeyboardHosting::IsRectNull((float *)&v3.left)) )
  {
    v3 = 0LL;
    KeyboardHosting::TabTipAdapterPolicy::GetPrimaryMonitorRect(&v3);
    if ( *((float *)this + 40) != (float)(v3.right - 1) || *((float *)this + 43) != 0.0 )
      return 1;
  }
  return result;
}
