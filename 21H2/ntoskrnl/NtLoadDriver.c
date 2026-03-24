/*
 * XREFs of NtLoadDriver @ 0x140780800
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140399E78 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
