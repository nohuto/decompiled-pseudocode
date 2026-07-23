/*
 * XREFs of NtOpenThread @ 0x14063B580
 * Callers:
 *     <none>
 * Callees:
 *     PsOpenThread @ 0x14063B5B0 (PsOpenThread.c)
 */

NTSTATUS __cdecl NtOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return PsOpenThread(
           (int)ThreadHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)ClientId,
           PreviousMode,
           PreviousMode);
}
