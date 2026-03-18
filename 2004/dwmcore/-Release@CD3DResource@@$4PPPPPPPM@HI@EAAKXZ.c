/*
 * XREFs of ?Release@CD3DResource@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800F1500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD3DResource::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - *(int *)(a1 - 4) - 120));
}
