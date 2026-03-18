/*
 * XREFs of PsSetProcessPriorityByClass @ 0x1406F3C80
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x1403369D8 (PspSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1406F3B80 (PspSetProcessForegroundBackgroundRequest.c)
 */

_QWORD *__fastcall PsSetProcessPriorityByClass(__int64 a1, int a2)
{
  if ( a2 == 2 )
    return (_QWORD *)PspSetProcessPriorityByClass(a1, 2);
  else
    return PspSetProcessForegroundBackgroundRequest(a1, a2 == 1, 0);
}
