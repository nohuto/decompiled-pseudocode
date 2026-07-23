/*
 * XREFs of PfpRpControlRequestReset @ 0x1407C5FB0
 * Callers:
 *     PfpRpControlRequestPerform @ 0x1406B3D9C (PfpRpControlRequestPerform.c)
 *     PfpRpShutdown @ 0x1408E07F8 (PfpRpShutdown.c)
 * Callees:
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     PfpRpCHashEmpty @ 0x1407C6008 (PfpRpCHashEmpty.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  _QWORD *i; // rcx
  unsigned __int64 NextProcess; // rax

  PfpRpCHashEmpty(a1, a1 + 96, a1 + 120);
  for ( i = 0LL; ; i = (_QWORD *)NextProcess )
  {
    NextProcess = PsGetNextProcess(i);
    if ( !NextProcess )
      break;
    _InterlockedAnd((volatile signed __int32 *)(NextProcess + 1124), 0xFFFFBFFF);
  }
  PfpRpCHashEmpty(a1, a1 + 56, a1 + 88);
  *(_QWORD *)(a1 + 80) = 0LL;
  return 0LL;
}
