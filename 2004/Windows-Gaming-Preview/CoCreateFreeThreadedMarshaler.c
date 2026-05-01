/*
 * XREFs of CoCreateFreeThreadedMarshaler @ 0x180045526
 * Callers:
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoCreateFreeThreadedMarshaler(LPUNKNOWN punkOuter, LPUNKNOWN *ppunkMarshal)
{
  return __imp_CoCreateFreeThreadedMarshaler(punkOuter, ppunkMarshal);
}
