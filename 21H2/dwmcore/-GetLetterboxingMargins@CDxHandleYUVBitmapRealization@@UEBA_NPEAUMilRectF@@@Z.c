/*
 * XREFs of ?GetLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAUMilRectF@@@Z @ 0x1801162D4
 * Callers:
 *     ?GetLetterboxingMargins@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAUMilRectF@@@Z @ 0x18010C550 (-GetLetterboxingMargins@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetLetterboxingMargins(
        CDxHandleYUVBitmapRealization *this,
        struct MilRectF *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this - 70);
  if ( (v2 & 0x8000) != 0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this - 80);
    *((_DWORD *)a2 + 1) = *((_DWORD *)this - 79);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this - 78);
    *((_DWORD *)a2 + 3) = *((_DWORD *)this - 77);
    v2 = *((_DWORD *)this - 70);
  }
  return (v2 & 0x8000) != 0;
}
