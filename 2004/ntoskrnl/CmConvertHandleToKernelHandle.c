/*
 * XREFs of CmConvertHandleToKernelHandle @ 0x140651B44
 * Callers:
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     NtSaveMergedKeys @ 0x140866150 (NtSaveMergedKeys.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
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
