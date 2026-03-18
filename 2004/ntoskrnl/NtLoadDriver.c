/*
 * XREFs of NtLoadDriver @ 0x14076DFF0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140397588 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
