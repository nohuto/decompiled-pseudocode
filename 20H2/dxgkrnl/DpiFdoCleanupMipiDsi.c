/*
 * XREFs of DpiFdoCleanupMipiDsi @ 0x1C0021570
 * Callers:
 *     DpiFdoInitializeMipiDsi @ 0x1C00214D8 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C02CA904 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupMipiDsi(__int64 a1))(_QWORD)
{
  void (__fastcall *result)(_QWORD); // rax

  result = *(void (__fastcall **)(_QWORD))(a1 + 5552);
  if ( result )
  {
    result(*(_QWORD *)(a1 + 5536));
    result = 0LL;
    *(_OWORD *)(a1 + 5528) = 0LL;
    *(_OWORD *)(a1 + 5544) = 0LL;
    *(_OWORD *)(a1 + 5560) = 0LL;
    *(_QWORD *)(a1 + 5576) = 0LL;
  }
  return result;
}
