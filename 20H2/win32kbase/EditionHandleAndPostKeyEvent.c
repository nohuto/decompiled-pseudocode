/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C002E140
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C002D944 (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(unsigned int a1)
{
  if ( qword_1C0251420 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C0251420)(a1);
  else
    return 0LL;
}
