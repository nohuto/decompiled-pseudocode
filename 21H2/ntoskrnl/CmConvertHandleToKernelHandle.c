/*
 * XREFs of CmConvertHandleToKernelHandle @ 0x14066F224
 * Callers:
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 *     CmUnloadKey @ 0x140719C78 (CmUnloadKey.c)
 *     NtSaveMergedKeys @ 0x1408697A0 (NtSaveMergedKeys.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140706880 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall CmConvertHandleToKernelHandle(
        void *a1,
        void *a2,
        KPROCESSOR_MODE a3,
        ACCESS_MASK a4,
        PHANDLE Handle)
{
  POBJECT_TYPE *v5; // rsi
  NTSTATUS v8; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  v5 = CmKeyObjectType;
  if ( a1 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(a1, a4, (POBJECT_TYPE)CmKeyObjectType, a3, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v8 = ObOpenObjectByPointer(Object, 0x200u, 0LL, a4, (POBJECT_TYPE)v5, 0, Handle);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
    return (unsigned int)v8;
  }
  else
  {
    *Handle = 0LL;
    return 0LL;
  }
}
