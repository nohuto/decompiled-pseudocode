/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C0061EA0
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C00616A4 (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(unsigned int a1)
{
  if ( qword_1C02593E0 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C02593E0)(a1);
  else
    return 0LL;
}
