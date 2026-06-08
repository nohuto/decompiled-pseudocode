/*
 * XREFs of CpcReadFeedbackAcquireCallback @ 0x1C0008FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     CpcConsolidateCommandCompletion @ 0x1C0008E84 (CpcConsolidateCommandCompletion.c)
 */

__int64 __fastcall CpcReadFeedbackAcquireCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(a2 + 128))(
             *(_QWORD *)(a2 + 72),
             0LL,
             CpcAcquirePerformanceCallback,
             a2);
  if ( (int)result < 0 )
    return CpcConsolidateCommandCompletion(*(_QWORD *)(a2 + 176));
  return result;
}
