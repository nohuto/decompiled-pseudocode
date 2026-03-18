/*
 * XREFs of _UT_GetParentDCClipBox@12 @ 0x71660
 * Callers:
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _xxxFillWindow@16 @ 0x720DE (_xxxFillWindow@16.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 */

int __fastcall UT_GetParentDCClipBox(int a1, int a2, int *a3)
{
  int v5[4]; // [esp+8h] [ebp-10h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( GreGetClipBox(a2, a3, 1) == 1 )
    return 0;
  if ( !a1 || *(char *)(*(_DWORD *)(*(_DWORD *)(a1 + 76) + 4) + 8) >= 0 )
    return 1;
  GetRect(a1, v5, 17);
  return IntersectRect(a3, a3, v5);
}
