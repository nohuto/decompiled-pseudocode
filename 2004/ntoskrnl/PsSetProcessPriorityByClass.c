/*
 * XREFs of PsSetProcessPriorityByClass @ 0x1406F7670
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x1402F1898 (PspSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1406F76A0 (PspSetProcessForegroundBackgroundRequest.c)
 */

__int64 __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 == 2 )
    return PspSetProcessPriorityByClass(a1, 2);
  LOBYTE(a2) = (_DWORD)a2 == 1;
  return PspSetProcessForegroundBackgroundRequest(a1, a2, 0LL);
}
