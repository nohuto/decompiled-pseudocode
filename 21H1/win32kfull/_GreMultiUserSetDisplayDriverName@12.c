/*
 * XREFs of _GreMultiUserSetDisplayDriverName@12 @ 0xD22DA
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     ?StringCchCopyNW@@YGJPAGIPBGI@Z @ 0xD2330 (-StringCchCopyNW@@YGJPAGIPBGI@Z.c)
 */

int __fastcall GreMultiUserSetDisplayDriverName(int a1, int a2, size_t cchDest)
{
  int v4; // esi
  int v6; // eax
  const unsigned __int16 *v8; // [esp+0h] [ebp-Ch]
  unsigned int v9; // [esp+4h] [ebp-8h]

  v4 = 0;
  if ( *(_DWORD *)(a1 + 24) )
    Win32FreePool(*(_DWORD *)(a1 + 24));
  v6 = Win32AllocPool(2 * a2 + 2, 2037609301);
  *(_DWORD *)(a1 + 24) = v6;
  if ( v6 )
  {
    StringCchCopyNW(cchDest, (size_t *)(a2 + 1), v8, v9);
    *(_DWORD *)(a1 + 28) = a2 + 1;
    return 1;
  }
  return v4;
}
