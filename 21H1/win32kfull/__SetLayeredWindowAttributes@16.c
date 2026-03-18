/*
 * XREFs of __SetLayeredWindowAttributes@16 @ 0x1FB1E
 * Callers:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _NtUserSetLayeredWindowAttributes@16 @ 0x1FA2E (_NtUserSetLayeredWindowAttributes@16.c)
 * Callees:
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _GetRedirectionFlags@4 @ 0x20168 (_GetRedirectionFlags@4.c)
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall _SetLayeredWindowAttributes(int a1, int a2, char a3, int a4)
{
  int v6; // ecx
  int v7; // eax
  int RedirectionBitmap; // esi
  int result; // eax
  unsigned int v10; // eax
  int updated; // ebx
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // esi
  char v15; // [esp+13h] [ebp-2Dh]
  __int16 v16; // [esp+14h] [ebp-2Ch] BYREF
  char v17; // [esp+16h] [ebp-2Ah]
  char v18; // [esp+17h] [ebp-29h]
  int v19; // [esp+18h] [ebp-28h]
  _DWORD v20[2]; // [esp+1Ch] [ebp-24h] BYREF
  _DWORD v21[2]; // [esp+24h] [ebp-1Ch] BYREF
  _DWORD v22[4]; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v23; // [esp+4Ch] [ebp+Ch]

  v15 = 0;
  v19 = a2;
  if ( IsWindowDesktopComposed(a1) )
  {
    v6 = *(_DWORD *)(a1 + 20);
    v7 = *(_DWORD *)(v6 + 144);
    if ( (v7 & 0x40) != 0 )
      *(_DWORD *)(v6 + 144) = v7 & 0xFFFFFFBF;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 8) == 0 )
  {
    UserSetLastError(87);
    return -1073741811;
  }
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags(a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1, a4 & 0x10 | 1);
    if ( result < 0 )
      return result;
    if ( !RedirectionBitmap )
      v15 = 1;
  }
  v17 = a3;
  v16 = 0;
  v10 = a4 & 0xDFFFFFEF | 0x20000000;
  v18 = 0;
  v23 = v10;
  if ( !RedirectionBitmap )
    return UpdateSprite(*(_DWORD *)(_gpDispInfo + 20), a1, 0, 0, 0, 0, 0, 0, a2, &v16, v10, 0);
  v20[0] = 0;
  v20[1] = 0;
  memset(v22, 0, sizeof(v22));
  v12 = GreSelectBitmap(_ghdcMem, RedirectionBitmap);
  v13 = *(_DWORD **)(a1 + 20);
  v14 = v12;
  v21[0] = v13[15] - v13[13];
  v21[1] = v13[16] - v13[14];
  updated = UpdateSprite(
              *(_DWORD *)(_gpDispInfo + 20),
              a1,
              v15 != 0 ? v22 : 0,
              0,
              0,
              v21,
              _ghdcMem,
              v20,
              v19,
              &v16,
              v23,
              v15 != 0 ? v22 : 0);
  GreSelectBitmap(_ghdcMem, v14);
  return updated;
}
