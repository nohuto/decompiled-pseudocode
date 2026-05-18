/*
 * XREFs of D2D1CreateFactory @ 0x180113DDE
 * Callers:
 *     sub_18002EC90 @ 0x18002EC90 (sub_18002EC90.c)
 *     sub_1800443AC @ 0x1800443AC (sub_1800443AC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall D2D1CreateFactory(
        D2D1_FACTORY_TYPE factoryType,
        const IID *const riid,
        const D2D1_FACTORY_OPTIONS *pFactoryOptions,
        void **ppIFactory)
{
  return __imp_D2D1CreateFactory(factoryType, riid, pFactoryOptions, ppIFactory);
}
