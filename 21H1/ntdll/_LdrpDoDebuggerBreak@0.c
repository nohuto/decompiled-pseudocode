/*
 * XREFs of _LdrpDoDebuggerBreak@0 @ 0x4B331A37
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpForkProcess@0 @ 0x4B331A83 (_LdrpForkProcess@0.c)
 * Callees:
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __stdcall LdrpDoDebuggerBreak()
{
  NTSTATUS result; // eax
  char ThreadInformation; // [esp+13h] [ebp-19h] BYREF

  result = NtQueryInformationThread((HANDLE)0xFFFFFFFE, ThreadHideFromDebugger, &ThreadInformation, 1u, 0);
  if ( result >= 0 && !ThreadInformation )
    __debugbreak();
  return result;
}
