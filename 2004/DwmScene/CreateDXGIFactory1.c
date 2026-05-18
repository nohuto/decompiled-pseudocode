/*
 * XREFs of CreateDXGIFactory1 @ 0x18010E514
 * Callers:
 *     _expandlocale @ 0x18003BFEC (_expandlocale.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CreateDXGIFactory1(const IID *const riid, void **ppFactory)
{
  return __imp_CreateDXGIFactory1(riid, ppFactory);
}
