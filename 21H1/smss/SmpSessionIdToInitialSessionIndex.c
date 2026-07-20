/*
 * XREFs of SmpSessionIdToInitialSessionIndex @ 0x140002704
 * Callers:
 *     SmpExecPgm @ 0x1400023C0 (SmpExecPgm.c)
 *     SmpSetCoreProcessIds @ 0x14000260C (SmpSetCoreProcessIds.c)
 *     SmpDestroyControlBlock @ 0x140003BE4 (SmpDestroyControlBlock.c)
 *     SmpTerminateCSR @ 0x1400058B4 (SmpTerminateCSR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpSessionIdToInitialSessionIndex(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( !SmpNumberInitialSessions )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)SmpCoreProcessIds; a1 != *i; i += 10 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= SmpNumberInitialSessions )
      return 0xFFFFFFFFLL;
  }
  return result;
}
