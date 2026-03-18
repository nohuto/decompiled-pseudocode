/*
 * XREFs of ?UnselectRedirectionBitmapsInDCEs@@YGXQAUtagWND@@@Z @ 0x153526
 * Callers:
 *     _UserRecreateRedirectionBitmap@4 @ 0x1539FA (_UserRecreateRedirectionBitmap@4.c)
 * Callees:
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 *     ?WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z @ 0x72F42 (-WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z.c)
 */

void __thiscall UnselectRedirectionBitmapsInDCEs(void *this)
{
  _DWORD *i; // esi
  int v3; // ecx

  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
  {
    v3 = i[8];
    if ( (v3 & 0x4404800) == 0x4000
      && i[2]
      && (v3 & 0x1000) != 0
      && WindowMatchesDCE((int)this, (int)i)
      && !GreSelectRedirectionBitmap(i[1], 0) )
    {
      GreSelectVisRgn(i[1], 0, 1);
    }
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
}
