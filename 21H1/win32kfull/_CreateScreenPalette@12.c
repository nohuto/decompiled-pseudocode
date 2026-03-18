/*
 * XREFs of _CreateScreenPalette@12 @ 0x1A1F93
 * Callers:
 *     ?PasteScreenPalette@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181F15 (-PasteScreenPalette@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     _GreGetSystemPaletteUse@4 @ 0x125E2 (_GreGetSystemPaletteUse@4.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _GreGetSystemPaletteEntries@16 @ 0x21E38F (_GreGetSystemPaletteEntries@16.c)
 */

int __fastcall CreateScreenPalette(HDC a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // ebx
  int v5; // edi
  int DeviceCaps; // eax
  unsigned int v7; // esi
  int *v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // esi
  _BYTE *v12; // ecx
  int v13; // esi
  int Palette; // ecx
  ULONG *v16; // [esp+0h] [ebp-1Ch]
  unsigned int v17; // [esp+0h] [ebp-1Ch]
  unsigned int *v18; // [esp+4h] [ebp-18h]
  int v21; // [esp+14h] [ebp-8h]

  v4 = 0;
  v5 = 1;
  v21 = 1;
  if ( GreGetSystemPaletteUse(a1) == 1 )
  {
    v5 = GreGetDeviceCaps(a1, 106) / 2;
    v21 = v5;
  }
  DeviceCaps = GreGetDeviceCaps(a1, 104);
  v7 = DeviceCaps;
  if ( DeviceCaps < 0
    || DeviceCaps < v5
    || ULongLongToULong(4LL * (unsigned int)DeviceCaps, v16) < 0
    || (ULongAdd(0, 8u, v8, v17, v18) & 0x80000000) != 0 )
  {
    return -1073741811;
  }
  v9 = Win32AllocPoolWithQuota(0, 1650684757);
  v10 = v9;
  if ( !v9 )
    return -1073741801;
  *(_WORD *)(v9 + 2) = v7;
  *(_WORD *)v9 = 768;
  if ( !GreGetSystemPaletteEntries(a1, 0, v7, (struct tagPALETTEENTRY *)(v9 + 4)) )
    goto LABEL_13;
  v11 = v7 - v21;
  if ( v21 < v11 )
  {
    v12 = (_BYTE *)(v10 + 4 * v21 + 7);
    v13 = v11 - v21;
    do
    {
      *v12 = 4;
      v12 += 4;
      --v13;
    }
    while ( v13 );
  }
  Palette = GreCreatePalette(v10);
  if ( Palette )
  {
    *a2 = v10;
    *a3 = Palette;
  }
  else
  {
LABEL_13:
    Win32FreePool(v10);
    return -1073741823;
  }
  return v4;
}
