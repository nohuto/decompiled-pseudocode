/*
 * XREFs of _NtLoadKey3@32 @ 0x4B2F46E0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtLoadKey3(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        PCM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  return Wow64SystemServiceCall();
}
