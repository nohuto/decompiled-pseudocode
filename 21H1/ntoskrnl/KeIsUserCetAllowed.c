/*
 * XREFs of KeIsUserCetAllowed @ 0x140337FD8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsUserCetAllowed()
{
  return KiUserCetAllowed != 0;
}
