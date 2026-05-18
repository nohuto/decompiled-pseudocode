/*
 * XREFs of CreateDXGIFactory1 @ 0x180113DE4
 * Callers:
 *     _expandlocale @ 0x1800418BC (_expandlocale.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CreateDXGIFactory1(const IID *const riid, void **ppFactory)
{
  return __imp_CreateDXGIFactory1(riid, ppFactory);
}
