/*
 * XREFs of ?Release@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F1CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD3DSurface::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - *(int *)(a1 - 4) - 248));
}
