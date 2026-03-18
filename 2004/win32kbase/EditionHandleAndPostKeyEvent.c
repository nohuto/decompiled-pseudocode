/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C006ADD0
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C006A5D4 (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(unsigned int a1)
{
  if ( qword_1C0253420 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C0253420)(a1);
  else
    return 0LL;
}
