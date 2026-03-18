/*
 * XREFs of SeSetSecurityDescriptorInfo @ 0x1405F64A0
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x1405F5510 (ObSetSecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1407670DC (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     RtlpSetSecurityObject @ 0x1405F64F0 (RtlpSetSecurityObject.c)
 */

NTSTATUS __stdcall SeSetSecurityDescriptorInfo(
        PVOID Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  if ( *ObjectsSecurityDescriptor )
    return RtlpSetSecurityObject(
             (_DWORD)Object,
             *SecurityInformation,
             (_DWORD)ModificationDescriptor,
             (_DWORD)ObjectsSecurityDescriptor,
             0,
             PoolType,
             (__int64)GenericMapping,
             0LL);
  else
    return -1073741609;
}
