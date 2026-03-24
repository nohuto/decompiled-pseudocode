/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x14062FEA4
 * Callers:
 *     PiCMOpenDeviceKey @ 0x14062FD18 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406338E0 (PiCMOpenObjectKey.c)
 *     PiCMOpenClassKey @ 0x1406BEA68 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B0B54 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140706880 (ObOpenObjectByPointer.c)
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
