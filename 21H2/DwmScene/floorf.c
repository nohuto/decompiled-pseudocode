/*
 * XREFs of floorf @ 0x180125060
 * Callers:
 *     sub_180103D18 @ 0x180103D18 (sub_180103D18.c)
 *     sub_18010489C @ 0x18010489C (sub_18010489C.c)
 *     sub_18011AA48 @ 0x18011AA48 (sub_18011AA48.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
