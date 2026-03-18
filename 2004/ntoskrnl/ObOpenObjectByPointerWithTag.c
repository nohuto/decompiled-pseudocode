/*
 * XREFs of ObOpenObjectByPointerWithTag @ 0x1408D9490
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404E94E8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
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
