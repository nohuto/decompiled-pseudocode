/*
 * XREFs of UT_GetParentDCClipBox @ 0x1C00CF94C
 * Callers:
 *     xxxFillWindow @ 0x1C00378D0 (xxxFillWindow.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 * Callees:
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     GetRect @ 0x1C005E0AC (GetRect.c)
 */

__int64 __fastcall UT_GetParentDCClipBox(__int64 a1, __int64 a2, int *a3)
{
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v6 = 0LL;
  if ( (unsigned int)GreGetClipBox(a2, a3, 1LL) == 1 )
    return 0LL;
  if ( !a1 || *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 8LL) >= 0 )
    return 1LL;
  GetRect(a1, (__int64)v6, 17);
  return IntersectRect(a3, a3, v6);
}
