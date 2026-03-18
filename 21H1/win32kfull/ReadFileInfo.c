/*
 * XREFs of ReadFileInfo @ 0xDEED6
 * Callers:
 *     ?LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z @ 0xDE012 (-LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     _Win32FileInfo@12 @ 0xDEF22 (_Win32FileInfo@12.c)
 */

int __fastcall ReadFileInfo(int a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v5; // ecx
  int v6; // ecx
  int v8[2]; // [esp+10h] [ebp-8h] BYREF

  v3 = 0;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 4 * v3);
    v8[0] = 0;
    v8[1] = 0;
    if ( !Win32FileInfo(*(PCWSTR *)(v5 + 48), (int)v8) )
      break;
    v6 = *(_DWORD *)(a1 + 4 * v3++);
    *(_DWORD *)(v6 + 16) = v8[0];
    if ( v3 >= a2 )
      return 1;
  }
  return 0;
}
