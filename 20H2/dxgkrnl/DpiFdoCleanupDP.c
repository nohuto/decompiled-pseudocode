/*
 * XREFs of DpiFdoCleanupDP @ 0x1C0051D58
 * Callers:
 *     DpiFdoInitializeDP @ 0x1C0021598 (DpiFdoInitializeDP.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C02CA904 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
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
