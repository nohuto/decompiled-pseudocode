/*
 * XREFs of FilterEval @ 0x140633644
 * Callers:
 *     ValidFilter @ 0x14062DF94 (ValidFilter.c)
 *     ConstraintEval @ 0x14062E324 (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x140633724 (PiDqQueryEvaluateFilter.c)
 * Callees:
 *     FilterEvalImpliedAnd @ 0x14062F408 (FilterEvalImpliedAnd.c)
 *     FilterEvalStrict @ 0x14062FF44 (FilterEvalStrict.c)
 */

__int64 __fastcall FilterEval(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (__int64)a4, a5);
  return FilterEvalImpliedAnd(
           (__int64 (__fastcall *)(__int64, __int64, unsigned int *, unsigned int *, _QWORD *))a1,
           a2,
           a3,
           (__int64)a4,
           a5);
}
