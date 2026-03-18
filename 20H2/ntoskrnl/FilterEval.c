/*
 * XREFs of FilterEval @ 0x140641D44
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140641B7C (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x1406BD1A4 (ValidFilter.c)
 *     ConstraintEval @ 0x1406D810C (ConstraintEval.c)
 * Callees:
 *     FilterEvalStrict @ 0x140641EBC (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1406D8C38 (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall FilterEval(int a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (_DWORD)a4, a5);
  return FilterEvalImpliedAnd(a1, a2, a3, (_DWORD)a4, a5);
}
