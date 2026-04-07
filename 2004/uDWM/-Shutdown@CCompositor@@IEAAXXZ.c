/*
 * XREFs of ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800BE0A0
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180085670 (--1CDesktopManager@@EEAA@XZ.c)
 *     ??1CCompositor@@MEAA@XZ @ 0x1800BDFA4 (--1CCompositor@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositor::Shutdown(CCompositor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
    v3 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
