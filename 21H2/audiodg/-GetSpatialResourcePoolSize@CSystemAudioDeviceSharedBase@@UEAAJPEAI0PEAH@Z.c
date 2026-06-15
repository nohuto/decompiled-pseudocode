/*
 * XREFs of ?GetSpatialResourcePoolSize@CSystemAudioDeviceSharedBase@@UEAAJPEAI0PEAH@Z @ 0x1400443C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetSpatialResourcePoolSize(
        CSystemAudioDeviceSharedBase *this,
        unsigned int *a2,
        unsigned int *a3,
        int *a4)
{
  CSystemAudioDeviceSharedBase *v5; // rbx
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF

  v5 = this;
  v9 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v9);
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, int *))(**((_QWORD **)v5 + 41) + 160LL))(
                  *((_QWORD *)v5 + 41),
                  a2,
                  a3,
                  a4);
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v5;
}
