/*
 * XREFs of DpiFdoCleanupDisplayDiagnostics @ 0x1C002B080
 * Callers:
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C00262E8 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DpiFdoCleanupDisplayDiagnostics(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 5608);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 5592));
    *(_OWORD *)(a1 + 5584) = 0LL;
    *(_OWORD *)(a1 + 5600) = 0LL;
    *(_OWORD *)(a1 + 5616) = 0LL;
  }
  return result;
}
