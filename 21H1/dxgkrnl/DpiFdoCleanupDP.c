/*
 * XREFs of DpiFdoCleanupDP @ 0x1C0050E08
 * Callers:
 *     DpiFdoInitializeDP @ 0x1C002219C (DpiFdoInitializeDP.c)
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C02C7344 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupDP(_QWORD *a1))(_QWORD)
{
  void *v1; // rbx
  void (__fastcall *result)(_QWORD); // rax

  v1 = a1 + 698;
  result = (void (__fastcall *)(_QWORD))a1[701];
  if ( result )
  {
    result(a1[699]);
    return (void (__fastcall *)(_QWORD))memset(v1, 0, 0x48uLL);
  }
  return result;
}
