/*
 * XREFs of _RtlSetThreadIsCritical @ 0x4B363040
 * Callers:
 *     <none>
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 */

int __cdecl RtlSetThreadIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  int result; // eax
  int ThreadInformation; // [esp+4h] [ebp-4h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( a2 )
  {
    result = NtQueryInformationThread((HANDLE)0xFFFFFFFE, ThreadBreakOnTermination, &ThreadInformation, 4u, 0);
    if ( result < 0 )
      return result;
    *a2 = ThreadInformation;
  }
  ThreadInformation = a1;
  return ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadBreakOnTermination, &ThreadInformation, 4u);
}
