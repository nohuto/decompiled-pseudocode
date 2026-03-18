/*
 * XREFs of ?SetCompositionMode@CGdiSpriteBitmap@@$4PPPPPPPM@A@EAAX_NU_LUID@@W4BufferCompositionMode@@@Z @ 0x1800EFD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::SetCompositionMode(__int64 a1, const struct D2D1_BEZIER_SEGMENT *a2)
{
  CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)(a1 - *(int *)(a1 - 4)), a2);
}
