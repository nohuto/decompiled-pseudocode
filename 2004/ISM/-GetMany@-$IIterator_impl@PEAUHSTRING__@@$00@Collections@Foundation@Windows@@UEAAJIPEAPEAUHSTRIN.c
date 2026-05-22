/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x180115230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<HSTRING__ *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<HSTRING__ *,1>,HSTRING__ *>(
           a1,
           a2,
           a3,
           a4);
}
