/*
 * XREFs of ZwOpenProcess @ 0x1403F3A80
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1405BE6D0 (BiLogFileOwnerProcess.c)
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
