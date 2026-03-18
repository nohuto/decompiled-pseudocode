/*
 * XREFs of DpiFdoCleanupDP @ 0x1C0060624
 * Callers:
 *     DpiFdoInitializeDP @ 0x1C002621C (DpiFdoInitializeDP.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C038B234 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupDP(_QWORD *a1))(_QWORD)
{
  void *v1; // rbx
  void (__fastcall *result)(_QWORD); // rax

  v1 = a1 + 689;
  result = (void (__fastcall *)(_QWORD))a1[692];
  if ( result )
  {
    result(a1[690]);
    return (void (__fastcall *)(_QWORD))memset(v1, 0, 0x48uLL);
  }
  return result;
}
