/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x140624F24
 * Callers:
 *     PiCMOpenClassKey @ 0x140622BDC (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x140624D98 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140628AA8 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B0CB4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
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
