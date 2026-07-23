/*
 * XREFs of SeComputeAutoInheritByObjectType @ 0x140310160
 * Callers:
 *     <none>
 * Callees:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140257FD0 (SeComputeAutoInheritByObjectTypeEx.c)
 */

ULONG __stdcall SeComputeAutoInheritByObjectType(
        PVOID ObjectType,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR ParentSecurityDescriptor)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  SeComputeAutoInheritByObjectTypeEx(
    (__int64)ObjectType,
    (__int64)SecurityDescriptor,
    (__int64)ParentSecurityDescriptor,
    &v4,
    0LL);
  return v4;
}
