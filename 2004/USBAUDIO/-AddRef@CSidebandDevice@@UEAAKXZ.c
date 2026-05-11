/*
 * XREFs of ?AddRef@CSidebandDevice@@UEAAKXZ @ 0x1C0009020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::AddRef(CSidebandDevice *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
}
