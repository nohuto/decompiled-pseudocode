/*
 * XREFs of ObGetObjectSecurity @ 0x14070E040
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetObjectSecurity @ 0x140669160 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}
