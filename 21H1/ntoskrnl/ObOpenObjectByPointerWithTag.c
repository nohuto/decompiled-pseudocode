/*
 * XREFs of ObOpenObjectByPointerWithTag @ 0x1408D8120
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404E8EB8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointerWithTag(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           Object,
           HandleAttributes,
           PassedAccessState,
           DesiredAccess,
           ObjectType,
           AccessMode,
           Handle);
}
