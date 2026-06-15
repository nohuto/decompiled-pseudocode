/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAMPEBU_GUID@@PEAH@Z @ 0x1800C3E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetAllChannelVolumeLevelScalar(
        CVolumeStrip *this,
        __int64 a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *, const struct _GUID *, int *))(**((_QWORD **)this + 31)
                                                                                          + 184LL))(
           *((_QWORD *)this + 31),
           a2,
           a3,
           a4,
           a5);
}
