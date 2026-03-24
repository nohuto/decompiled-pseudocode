/*
 * XREFs of DpiFdoCleanupDP @ 0x1C0052C68
 * Callers:
 *     DpiFdoInitializeDP @ 0x1C00219C4 (DpiFdoInitializeDP.c)
 *     DpiFdoStartAdapter @ 0x1C018071C (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C02CBC74 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
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
