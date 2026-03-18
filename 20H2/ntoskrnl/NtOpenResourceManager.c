/*
 * XREFs of NtOpenResourceManager @ 0x1403CFEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return __imp_NtOpenResourceManager(
           ResourceManagerHandle,
           DesiredAccess,
           TmHandle,
           ResourceManagerGuid,
           ObjectAttributes);
}
