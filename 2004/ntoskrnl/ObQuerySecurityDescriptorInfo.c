/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x140667C7C
 * Callers:
 *     SeDefaultObjectMethod @ 0x1406695B0 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1406EDF50 (WmipSecurityMethod.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x1405E4BD0 (SeQuerySecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x140669000 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x140669330 (ObpReferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  PSECURITY_DESCRIPTOR v7; // rbp
  unsigned int v8; // ebx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp+8h] BYREF

  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v7 = ObjectsSecurityDescriptor;
  v8 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v7 )
    ObDereferenceSecurityDescriptor(v7, 1LL);
  return v8;
}
