/*
 * XREFs of expf @ 0x18012503C
 * Callers:
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_180112840 @ 0x180112840 (sub_180112840.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl expf(float X)
{
  return __imp_expf(X);
}
