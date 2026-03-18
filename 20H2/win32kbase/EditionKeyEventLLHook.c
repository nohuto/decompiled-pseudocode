/*
 * XREFs of EditionKeyEventLLHook @ 0x1C002D6EC
 * Callers:
 *     ApiSetEditionKeyEventLLHook @ 0x1C002D5C4 (ApiSetEditionKeyEventLLHook.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionKeyEventLLHook(__int64 a1, unsigned __int16 a2)
{
  if ( qword_1C0251410 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0251410)(a1, a2);
  else
    return 0LL;
}
