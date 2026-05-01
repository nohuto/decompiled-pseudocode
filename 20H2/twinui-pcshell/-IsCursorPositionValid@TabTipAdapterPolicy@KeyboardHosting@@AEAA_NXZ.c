/*
 * XREFs of ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18036899C
 * Callers:
 *     ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180368744 (-IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x18035DBFC (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAUtagRECT@@@Z @ 0x180367D2C (-GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAUtagRECT@@@Z.c)
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
