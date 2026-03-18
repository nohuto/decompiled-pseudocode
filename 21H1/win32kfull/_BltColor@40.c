/*
 * XREFs of _BltColor@40 @ 0x1ACFB1
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 */

int __fastcall BltColor(
        HDC a1,
        int a2,
        HDC a3,
        LONG a4,
        struct XDCOBJ *a5,
        int a6,
        int a7,
        struct ECLIPOBJ *a8,
        struct ECLIPOBJ *a9,
        char a10)
{
  int v12; // edi
  int v13; // ecx
  HDC v14; // eax
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]

  v12 = 0;
  v17 = GreSetTextColor(a1, 0);
  v16 = GreSetBkColor(a1, 0xFFFFFF);
  if ( a2 )
    v12 = GreSelectBrush(a1, a2);
  v13 = (a10 & 1) != 0 ? 12060490 : 14812998;
  if ( (a10 & 2) != 0 )
    v13 |= 0x80000000;
  v14 = a3;
  if ( !a3 )
    v14 = *(HDC *)(_gpDispInfo + 36);
  NtGdiBitBltInternal(a1, a4, a5, a6, a7, v14, a8, a9, v13, 0xFFFFFF, 0);
  if ( a2 )
    GreSelectBrush(a1, v12);
  GreSetTextColor(a1, v17);
  return GreSetBkColor(a1, v16);
}
