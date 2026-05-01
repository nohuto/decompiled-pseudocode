/*
 * XREFs of CoTaskMemAlloc @ 0x18004551A
 * Callers:
 *     sub_18003E874 @ 0x18003E874 (sub_18003E874.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall CoTaskMemAlloc(SIZE_T cb)
{
  return __imp_CoTaskMemAlloc(cb);
}
