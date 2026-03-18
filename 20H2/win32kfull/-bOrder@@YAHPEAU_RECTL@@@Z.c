/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C01325DC
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0130F60 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01312C0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStretchBlt @ 0x1C0132090 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B13D0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2F50 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
