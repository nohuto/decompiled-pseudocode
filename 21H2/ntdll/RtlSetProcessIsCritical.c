/*
 * XREFs of RtlSetProcessIsCritical @ 0x18008C0B0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D960 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x18009D9C0 (NtSetInformationProcess.c)
 */

NTSTATUS __fastcall RtlSetProcessIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  int v3; // edi
  NTSTATUS result; // eax
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( !a2 )
  {
LABEL_8:
    ProcessInformation = v3;
    return NtSetInformationProcess(-1LL, 29LL, &ProcessInformation, 4LL);
  }
  result = NtQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessBreakOnTermination,
             &ProcessInformation,
             4u,
             0LL);
  if ( result >= 0 )
  {
    *a2 = ProcessInformation;
    goto LABEL_8;
  }
  return result;
}
