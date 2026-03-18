/*
 * XREFs of ?ProtectWindowBitmap@@YGHPAUtagWND@@K@Z @ 0xF5722
 * Callers:
 *     ?ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z @ 0xF55F4 (-ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z.c)
 * Callees:
 *     _ChangeRedirectionBitmapOwner@8 @ 0x153681 (_ChangeRedirectionBitmapOwner@8.c)
 *     _GreProtectSpriteContent@16 @ 0x1CE69D (_GreProtectSpriteContent@16.c)
 */

int __fastcall ProtectWindowBitmap(int a1, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax

  v3 = a2 & 1;
  v4 = ((int (*)(void))ChangeRedirectionBitmapOwner)();
  if ( v4 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 8) != 0 )
    {
      v5 = IsWindowDesktopComposed(a1);
      v4 = GreProtectSpriteContent(v5, a2);
      if ( !v4 )
      {
        if ( v3 )
          ChangeRedirectionBitmapOwner(a1, 0);
      }
    }
  }
  return v4;
}
