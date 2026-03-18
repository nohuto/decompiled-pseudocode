/*
 * XREFs of PfpRpControlRequestReset @ 0x140988C68
 * Callers:
 *     PfpRpControlRequestPerform @ 0x1406ADB5C (PfpRpControlRequestPerform.c)
 *     PfpRpShutdown @ 0x140988CC0 (PfpRpShutdown.c)
 * Callees:
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     PfpRpCHashEmpty @ 0x14098884C (PfpRpCHashEmpty.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  __int64 *i; // rcx
  __int64 *NextProcess; // rax

  PfpRpCHashEmpty(a1, a1 + 96, (volatile signed __int64 *)(a1 + 120));
  for ( i = 0LL; ; i = NextProcess )
  {
    NextProcess = PsGetNextProcess(i);
    if ( !NextProcess )
      break;
    _InterlockedAnd((volatile signed __int32 *)NextProcess + 281, 0xFFFFBFFF);
  }
  PfpRpCHashEmpty(a1, a1 + 56, (volatile signed __int64 *)(a1 + 88));
  *(_QWORD *)(a1 + 80) = 0LL;
  return 0LL;
}
