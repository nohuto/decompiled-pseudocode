/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x1406455BC
 * Callers:
 *     PiCMOpenObjectKey @ 0x140641670 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceKey @ 0x140645930 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1406DEBF0 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B3584 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
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
