/*
 * XREFs of ?WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z @ 0x72F42
 * Callers:
 *     _UnredirectDCEs@4 @ 0x1BEB2 (_UnredirectDCEs@4.c)
 *     _ChangeRedirectionParentInDCEs@8 @ 0x7324A (_ChangeRedirectionParentInDCEs@8.c)
 *     _RedirectDCEs@4 @ 0x73D3A (_RedirectDCEs@4.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YGXQAUtagWND@@@Z @ 0x153526 (-UnselectRedirectionBitmapsInDCEs@@YGXQAUtagWND@@@Z.c)
 * Callees:
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     __IsDescendant@8 @ 0x72F90 (__IsDescendant@8.c)
 */

BOOL __fastcall WindowMatchesDCE(int a1, int a2)
{
  int v3; // ecx

  if ( IsDesktopWindow(a1) )
    return v3 == *(_DWORD *)(a2 + 8);
  else
    return _IsDescendant(v3, *(_DWORD *)(a2 + 8)) != 0;
}
