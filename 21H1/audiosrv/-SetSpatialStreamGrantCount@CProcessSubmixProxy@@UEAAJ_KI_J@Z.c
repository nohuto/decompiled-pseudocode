/*
 * XREFs of ?SetSpatialStreamGrantCount@CProcessSubmixProxy@@UEAAJ_KI_J@Z @ 0x1800E7120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::SetSpatialStreamGrantCount(CProcessSubmixProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
}
