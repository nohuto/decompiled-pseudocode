/*
 * XREFs of ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x1800A27F4
 * Callers:
 *     _PnpApiWrapper::Details::EnumerateDevices_::_1_::dtor$0 @ 0x1800503DC (_PnpApiWrapper--Details--EnumerateDevices_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)2);
}
