/*
 * XREFs of ??1CCompositor@@MEAA@XZ @ 0x1800BDFA4
 * Callers:
 *     ??_GCCompositor@@MEAAPEAXI@Z @ 0x1800BE000 (--_GCCompositor@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800BE0A0 (-Shutdown@CCompositor@@IEAAXXZ.c)
 */

void __fastcall CCompositor::~CCompositor(CCompositor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CCompositor::`vftable';
  CCompositor::Shutdown(this);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
