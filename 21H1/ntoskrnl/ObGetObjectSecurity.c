/*
 * XREFs of ObGetObjectSecurity @ 0x1406EA2F0
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetObjectSecurity @ 0x140613E80 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}
