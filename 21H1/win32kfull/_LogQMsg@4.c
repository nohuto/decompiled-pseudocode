/*
 * XREFs of _LogQMsg@4 @ 0x141ED4
 * Callers:
 *     _IPostQuitMessage@8 @ 0xABFB2 (_IPostQuitMessage@8.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 * Callees:
 *     ?EnsureQMsgLog@@YGHXZ @ 0x141B02 (-EnsureQMsgLog@@YGHXZ.c)
 *     _InitLogQMsgEntry@8 @ 0x141E33 (_InitLogQMsgEntry@8.c)
 */

unsigned int __thiscall LogQMsg(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *v3; // edx

  result = this[3];
  if ( result >= dword_273AB4 && result <= dword_273AB8 )
  {
    result = EnsureQMsgLog();
    if ( result )
    {
      v3 = (_DWORD *)(dword_273AD0 + 392 * dword_273ABC++);
      InitLogQMsgEntry(this, v3);
      result = dword_273ABC;
      if ( dword_273ABC >= (unsigned int)dword_273AC0 )
        dword_273ABC = 0;
      if ( dword_273ACC )
        __debugbreak();
    }
  }
  return result;
}
