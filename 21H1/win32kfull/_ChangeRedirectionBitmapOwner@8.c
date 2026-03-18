/*
 * XREFs of _ChangeRedirectionBitmapOwner@8 @ 0x153681
 * Callers:
 *     ?ProtectWindowBitmap@@YGHPAUtagWND@@K@Z @ 0xF5722 (-ProtectWindowBitmap@@YGHPAUtagWND@@K@Z.c)
 * Callees:
 *     _GreSetRedirectionBitmapOwner@12 @ 0x20A60 (_GreSetRedirectionBitmapOwner@12.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 */

int __fastcall ChangeRedirectionBitmapOwner(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  int RedirectionBitmap; // eax

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  if ( (*(_BYTE *)(v2 + 19) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v2 + 18) & 0x20) != 0 )
    {
      return 1;
    }
    else
    {
      RedirectionBitmap = GetRedirectionBitmap(a1);
      if ( RedirectionBitmap )
        return GreSetRedirectionBitmapOwner(RedirectionBitmap, -1, a2);
    }
  }
  return v3;
}
