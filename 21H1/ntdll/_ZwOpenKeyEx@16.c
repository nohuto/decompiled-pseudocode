/*
 * XREFs of _ZwOpenKeyEx@16 @ 0x4B2F3B80
 * Callers:
 *     _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD (_LdrpAppxGetRemediationRegistryKey@12.c)
 *     _LdrpIsCODServiceEnabled@0 @ 0x4B32FCAA (_LdrpIsCODServiceEnabled@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return Wow64SystemServiceCall();
}
