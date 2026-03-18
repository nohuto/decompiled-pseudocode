/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x1406BAD74
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1406BA720 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406BA8F4 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140806A24 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenClassKey @ 0x14081C354 (PiCMOpenClassKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
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
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
