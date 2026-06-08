/*
 * XREFs of CpcSubspaceCommitPerformance @ 0x1C0004050
 * Callers:
 *     <none>
 * Callees:
 *     CpcConsolidateCommandCompletion @ 0x1C0003CD4 (CpcConsolidateCommandCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSubspaceCommitPerformance(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, __int64, __int64 (__fastcall *)(__int64, __int64), _QWORD *); // rax
  __int64 result; // rax

  v2 = (__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(__int64, __int64), _QWORD *))a1[16];
  a1[22] = a2;
  LOBYTE(a2) = 1;
  result = v2(a1[9], a2, CpcAcquirePerformanceCallback, a1);
  if ( (int)result < 0 )
    return CpcConsolidateCommandCompletion(a1[22]);
  return result;
}
