/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeStrip@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C3E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetChannelVolumeLevel(
        CVolumeStrip *this,
        __int64 a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, int *, const struct _GUID *, int *))(**((_QWORD **)this + 30)
                                                                                        + 120LL))(
           *((_QWORD *)this + 30),
           a2,
           a5,
           a4,
           a5);
}
