/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C01303B8
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C012ECC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F020 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStretchBlt @ 0x1C012FDF0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2950 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B44D0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
