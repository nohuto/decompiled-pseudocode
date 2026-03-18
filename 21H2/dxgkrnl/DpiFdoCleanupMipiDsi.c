/*
 * XREFs of DpiFdoCleanupMipiDsi @ 0x1C00261F4
 * Callers:
 *     DpiFdoInitializeMipiDsi @ 0x1C0026160 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C038B234 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupMipiDsi(__int64 a1))(_QWORD)
{
  void (__fastcall *result)(_QWORD); // rax

  result = *(void (__fastcall **)(_QWORD))(a1 + 5480);
  if ( result )
  {
    result(*(_QWORD *)(a1 + 5464));
    result = 0LL;
    *(_OWORD *)(a1 + 5456) = 0LL;
    *(_OWORD *)(a1 + 5472) = 0LL;
    *(_OWORD *)(a1 + 5488) = 0LL;
    *(_QWORD *)(a1 + 5504) = 0LL;
  }
  return result;
}
