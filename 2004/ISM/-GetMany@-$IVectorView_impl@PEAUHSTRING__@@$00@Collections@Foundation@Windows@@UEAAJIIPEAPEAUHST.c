/*
 * XREFs of ?GetMany@?$IVectorView_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x180115240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVectorView_impl<HSTRING__ *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<HSTRING__ *,1>,HSTRING__ *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
