/*
 * XREFs of ?SetSpatialStreamGrantCount@CSharedStreamGroupProxy@@UEAAJ_KI_J@Z @ 0x1800E7210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::SetSpatialStreamGrantCount(CSharedStreamGroupProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10));
}
