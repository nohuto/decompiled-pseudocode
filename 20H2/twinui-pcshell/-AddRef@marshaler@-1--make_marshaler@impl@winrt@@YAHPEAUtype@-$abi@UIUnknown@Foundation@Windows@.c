/*
 * XREFs of ?AddRef@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x180088460
 * Callers:
 *     ?AddRef@CEnumerableObjectCollection@@W7EAAKXZ @ 0x1800F08C0 (-AddRef@CEnumerableObjectCollection@@W7EAAKXZ.c)
 *     ?AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x1800F08D0 (-AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
}
