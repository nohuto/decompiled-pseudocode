/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x1406A1E5C
 * Callers:
 *     PiCMOpenClassKey @ 0x14069F5F4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A19FC (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406A5898 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408AC734 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PiCMDuplicateRegistryHandle(
        void *a1,
        __int64 a2,
        ACCESS_MASK a3,
        KPROCESSOR_MODE a4,
        HANDLE *Handle)
{
  NTSTATUS v7; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
    v7 = ObOpenObjectByPointer(Object, 0x440u, 0LL, a3, (POBJECT_TYPE)CmKeyObjectType, a4, Handle);
  if ( Object )
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  return (unsigned int)v7;
}
