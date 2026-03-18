/*
 * XREFs of ESM_NotifyingUCXAboutTransferCancellation @ 0x1C000CE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_NotifyingUCXAboutTransferCancellation(__int64 a1)
{
  ((void (__fastcall *)(__int64, _QWORD))qword_1C0062800)(UcxDriverGlobals, *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 1000LL;
}
