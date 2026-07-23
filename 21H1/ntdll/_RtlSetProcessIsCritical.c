/*
 * XREFs of _RtlSetProcessIsCritical @ 0x4B362FD0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 */

int __cdecl RtlSetProcessIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  int result; // eax
  int ProcessInformation; // [esp+4h] [ebp-4h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( a2 )
  {
    result = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessBreakOnTermination, &ProcessInformation, 4u, 0);
    if ( result < 0 )
      return result;
    *a2 = ProcessInformation;
  }
  ProcessInformation = a1;
  return ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessBreakOnTermination, &ProcessInformation, 4u);
}
