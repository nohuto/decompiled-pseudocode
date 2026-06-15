/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeStrip@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C3EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetMasterVolumeLevel(CVolumeStrip *this, float a2, const struct _GUID *a3, int *a4)
{
  __int64 v4; // rdx

  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(**((_QWORD **)this + 30) + 88LL))(
           *((_QWORD *)this + 30),
           v4,
           a3,
           a4);
}
