/*
 * XREFs of __GetLayeredWindowAttributes@16 @ 0x153A92
 * Callers:
 *     _NtUserGetLayeredWindowAttributes@16 @ 0x1635F9 (_NtUserGetLayeredWindowAttributes@16.c)
 *     ?zzzApplyShadow@@YGHPAUtagWND@@0@Z @ 0x19D1DB (-zzzApplyShadow@@YGHPAUtagWND@@0@Z.c)
 *     _zzzUpdateShadowAlpha@4 @ 0x19D6F9 (_zzzUpdateShadowAlpha@4.c)
 * Callees:
 *     _GetRedirectionFlags@4 @ 0x20168 (_GetRedirectionFlags@4.c)
 *     _GreGetSpriteAttributes@28 @ 0x20186 (_GreGetSpriteAttributes@28.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall _GetLayeredWindowAttributes(int a1, HWND a2, _BYTE *a3, unsigned int *a4)
{
  int SpriteAttributes; // edi
  struct HWND__ *v7; // eax
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-4h] BYREF

  SpriteAttributes = 0;
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 8) != 0 )
  {
    if ( (GetRedirectionFlags() & 1) != 0 )
    {
      v10 = 0;
      v7 = (struct HWND__ *)IsWindowDesktopComposed(a1);
      SpriteAttributes = GreGetSpriteAttributes(
                           *(struct PDEVOBJ **)(_gpDispInfo + 20),
                           *(HWND *)a1,
                           v8,
                           a2,
                           &v10,
                           a4,
                           v7);
      if ( SpriteAttributes )
        *a3 = BYTE2(v10);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  return SpriteAttributes;
}
