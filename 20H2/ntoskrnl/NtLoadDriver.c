/*
 * XREFs of NtLoadDriver @ 0x14077CA20
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140399A08 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
