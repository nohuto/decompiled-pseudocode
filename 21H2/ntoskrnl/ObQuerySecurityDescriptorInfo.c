/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x140722584
 * Callers:
 *     WmipSecurityMethod @ 0x1406BB860 (WmipSecurityMethod.c)
 *     SeDefaultObjectMethod @ 0x140725080 (SeDefaultObjectMethod.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x1407213B0 (SeQuerySecurityDescriptorInfo.c)
 *     ObpDereferenceSecurityDescriptorForObject @ 0x1407228BC (ObpDereferenceSecurityDescriptorForObject.c)
 *     ObpReferenceSecurityDescriptor @ 0x140722910 (ObpReferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, ULONG *a2, void *a3, ULONG *a4)
{
  __int64 v4; // r14
  PSECURITY_DESCRIPTOR v8; // rbp
  unsigned int v9; // ebx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 - 48;
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v8 = ObjectsSecurityDescriptor;
  v9 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v8 )
    ObpDereferenceSecurityDescriptorForObject(v8, v4);
  return v9;
}
