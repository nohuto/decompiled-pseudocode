/*
 * XREFs of ?bCheckFntFileInfo@PFFOBJ@@QAEHXZ @ 0x87B4A
 * Callers:
 *     ?QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z @ 0x85878 (-QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z @ 0x86BE2 (-QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z.c)
 * Callees:
 *     _Win32FileInfo@12 @ 0xDEF22 (_Win32FileInfo@12.c)
 */

int __thiscall PFFOBJ::bCheckFntFileInfo(PFFOBJ *this)
{
  _DWORD *v2; // edx
  int v3; // eax
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8[2]; // [esp+18h] [ebp-8h] BYREF

  v2 = *(_DWORD **)this;
  v3 = *(_DWORD *)(*(_DWORD *)this + 32);
  if ( (v3 & 0x2000) == 0 )
  {
    if ( (v3 & 0x1000) == 0 )
      return 1;
    v5 = 0;
    if ( !v2[5] )
    {
LABEL_11:
      v2[8] &= ~0x1000u;
      return 1;
    }
    while ( 1 )
    {
      v8[0] = 0;
      v6 = v2[30];
      v8[1] = 0;
      Win32FileInfo(*(PCWSTR *)(*(_DWORD *)(v6 + 4 * v5) + 48), (int)v8);
      v2 = *(_DWORD **)this;
      v7 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)this + 120) + 4 * v5);
      if ( *v7 || v7[1] || v7[4] != v8[0] )
        break;
      if ( (unsigned int)++v5 >= v2[5] )
        goto LABEL_11;
    }
    v2[8] |= 0x2000u;
  }
  return 0;
}
