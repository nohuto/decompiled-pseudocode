/*
 * XREFs of MiCreatePartitionNamespace @ 0x1407A0D44
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407A08D4 (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x1403FBA80 (ZwCreateDirectoryObjectEx.c)
 *     ObCleanupSecurityDescriptor @ 0x1407A0E68 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1407A0EAC (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  NTSTATUS KernelObjectsSD; // ebx
  void *v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+68h] [rbp+17h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+1Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 232), 0xF000Fu, &ObjectAttributes, 0LL, 2u);
  if ( KernelObjectsSD >= 0 )
  {
    KernelObjectsSD = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( KernelObjectsSD >= 0 )
    {
      v3 = *(void **)(a1 + 232);
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.RootDirectory = v3;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&MiKernelObjectsDirectoryName;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.Attributes = 576;
      KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 240), 0xF000Fu, &ObjectAttributes, 0LL, 0);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
