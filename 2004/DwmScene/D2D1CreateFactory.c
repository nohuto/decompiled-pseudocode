/*
 * XREFs of D2D1CreateFactory @ 0x18010E50E
 * Callers:
 *     sub_1800293C0 @ 0x1800293C0 (sub_1800293C0.c)
 *     sub_18003EADC @ 0x18003EADC (sub_18003EADC.c)
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
