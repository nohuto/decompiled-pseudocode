/*
 * XREFs of _xxxSetWindowRgn@12 @ 0x9CBE8
 * Callers:
 *     _NtUserSetWindowRgn@12 @ 0x9CB58 (_NtUserSetWindowRgn@12.c)
 *     _NtUserSetWindowRgnEx@12 @ 0x16A206 (_NtUserSetWindowRgnEx@12.c)
 * Callees:
 *     _InternalBeginDeferWindowPos@4 @ 0x32DC2 (_InternalBeginDeferWindowPos@4.c)
 *     ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22 (-_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _MirrorRegion@12 @ 0x9CC70 (_MirrorRegion@12.c)
 */

int __fastcall xxxSetWindowRgn(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  _DWORD *v8; // eax

  v3 = 0;
  if ( a2 )
  {
    v5 = UserValidateCopyRgn(a2);
    v6 = v5;
    if ( !v5 )
    {
LABEL_10:
      GreDeleteObject(v6);
      return v3;
    }
    MirrorRegion(a1, v5, 0);
  }
  else
  {
    v6 = 1;
  }
  v7 = (_DWORD *)InternalBeginDeferWindowPos(1);
  if ( !v7
    || (v8 = _DeferWindowPos(v7, a1, 0, 0, 0, 0, 0, 8 * (a3 == 0) + 6199, 0)) == 0
    || (*(_DWORD *)(v8[6] + 88) = v6, (v3 = xxxEndDeferWindowPosEx((int)v8, 0)) == 0) )
  {
    if ( v6 != 1 )
      goto LABEL_10;
  }
  return v3;
}
