/*
 * XREFs of _SetOldRedirectionBitmap@8 @ 0xA6D0A
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _DeleteOldRedirectionBitmap@4 @ 0x6E4D2 (_DeleteOldRedirectionBitmap@4.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int __fastcall SetOldRedirectionBitmap(int a1, int a2)
{
  int v3; // esi
  int Prop; // eax

  v3 = 0;
  Prop = _GetProp(a1, (unsigned __int16)atomLayer, 1);
  if ( Prop )
  {
    *(_DWORD *)(Prop + 4) = a2;
    return 1;
  }
  return v3;
}
