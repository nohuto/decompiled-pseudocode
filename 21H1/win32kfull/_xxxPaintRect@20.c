/*
 * XREFs of _xxxPaintRect@20 @ 0x7215C
 * Callers:
 *     _xxxFillWindow@16 @ 0x720DE (_xxxFillWindow@16.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GreSetBrushOrg@16 @ 0x721EA (_GreSetBrushOrg@16.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _xxxGetControlColor@16 @ 0xBFABC (_xxxGetControlColor@16.c)
 */

int __fastcall xxxPaintRect(_DWORD *a1, int a2, HDC a3, HDC a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax
  HDC ControlColor; // eax
  const RECT *v10; // [esp+0h] [ebp-14h]
  HBRUSH v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+8h] [ebp-Ch] BYREF
  int v13; // [esp+Ch] [ebp-8h]

  v12 = 0;
  v13 = 0;
  v5 = a1;
  if ( !a1 )
    v5 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 4) + 12);
  if ( v5 == (_DWORD *)_GetDesktopWindow(v5) )
    v7 = 0;
  else
    v7 = *(_DWORD *)(v5[5] + 72) - *(_DWORD *)(*(_DWORD *)(a2 + 20) + 72);
  GreSetBrushOrg(a3, v7, (int)&v12);
  ControlColor = a4;
  if ( (unsigned int)a4 < 7 )
    ControlColor = (HDC)xxxGetControlColor(a3, (char *)a4 + 306);
  FillRect(ControlColor, v10, v11);
  GreSetBrushOrg(a3, v13, 0);
  return 1;
}
