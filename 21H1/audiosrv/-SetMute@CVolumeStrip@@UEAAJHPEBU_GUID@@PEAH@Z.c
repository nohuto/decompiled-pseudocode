/*
 * XREFs of ?SetMute@CVolumeStrip@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800C4AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetMute(CVolumeStrip *this, __int64 a2, const struct _GUID *a3, int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(**((_QWORD **)this + 31) + 64LL))(
           *((_QWORD *)this + 31),
           a2,
           a3,
           a4);
}
