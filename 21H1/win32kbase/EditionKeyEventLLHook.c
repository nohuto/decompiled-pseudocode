/*
 * XREFs of EditionKeyEventLLHook @ 0x1C006144C
 * Callers:
 *     ApiSetEditionKeyEventLLHook @ 0x1C0061324 (ApiSetEditionKeyEventLLHook.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionKeyEventLLHook(__int64 a1, unsigned __int16 a2)
{
  if ( qword_1C02593D0 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C02593D0)(a1, a2);
  else
    return 0LL;
}
