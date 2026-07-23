/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x140617368
 * Callers:
 *     SeDefaultObjectMethod @ 0x1406142D0 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1406CCC50 (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x140614050 (ObpReferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14061A1F0 (SeQuerySecurityDescriptorInfo.c)
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
    ObDereferenceSecurityDescriptor((__int64)v7, 1u);
  return v8;
}
