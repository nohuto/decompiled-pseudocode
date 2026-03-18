/*
 * XREFs of ExpOsProductContentIdCacheProvider @ 0x140950440
 * Callers:
 *     <none>
 * Callees:
 *     ExpOsProductCacheProviderHelper @ 0x1407CD2F4 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpOsProductContentIdCacheProvider(
        __int64 a1,
        _DWORD *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  return ExpOsProductCacheProviderHelper(a1, (UNICODE_STRING *)L"$&", a2, a3, a4, a5, a6);
}
