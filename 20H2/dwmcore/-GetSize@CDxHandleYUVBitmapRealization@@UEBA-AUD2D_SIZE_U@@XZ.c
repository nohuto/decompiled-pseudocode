/*
 * XREFs of ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DF724
 * Callers:
 *     ?GetSize@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F33E0 (-GetSize@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CDxHandleYUVBitmapRealization::GetSize(CDxHandleYUVBitmapRealization *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this - 61);
  a2[1] = *((_DWORD *)this - 60);
  return (struct D2D_SIZE_U)a2;
}
