/*
 * XREFs of NtLoadDriver @ 0x14076B850
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140396978 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
