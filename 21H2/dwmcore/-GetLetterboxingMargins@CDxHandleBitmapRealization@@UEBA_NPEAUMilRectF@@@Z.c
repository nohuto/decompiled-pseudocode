/*
 * XREFs of ?GetLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAUMilRectF@@@Z @ 0x180014230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::GetLetterboxingMargins(
        CDxHandleBitmapRealization *this,
        struct MilRectF *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this - 32);
  if ( (v2 & 0x8000) != 0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this - 42);
    *((_DWORD *)a2 + 1) = *((_DWORD *)this - 41);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this - 40);
    *((_DWORD *)a2 + 3) = *((_DWORD *)this - 39);
    v2 = *((_DWORD *)this - 32);
  }
  return (v2 & 0x8000) != 0;
}
