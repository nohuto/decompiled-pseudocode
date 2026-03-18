/*
 * XREFs of _ChangeRedirectionParentInDCEs@8 @ 0x7324A
 * Callers:
 *     _UnredirectDCEs@4 @ 0x1BEB2 (_UnredirectDCEs@4.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     ?RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z @ 0x1534DB (-RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z @ 0x72F42 (-WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z.c)
 *     _UpdateRedirectedDCE@8 @ 0x83AE6 (_UpdateRedirectedDCE@8.c)
 */

int __fastcall ChangeRedirectionParentInDCEs(int a1, int a2)
{
  _DWORD *i; // esi
  int v5; // ecx

  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
  {
    v5 = i[8];
    if ( (v5 & 0x4404800) == 0x4000 && i[2] && (v5 & 0x1000) != 0 && WindowMatchesDCE(a1, (int)i) )
      UpdateRedirectedDCE(i, a2);
  }
  return GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
}
