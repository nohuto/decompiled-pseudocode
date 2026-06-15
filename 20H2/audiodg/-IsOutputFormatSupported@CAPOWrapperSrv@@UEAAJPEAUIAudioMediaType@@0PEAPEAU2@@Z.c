/*
 * XREFs of ?IsOutputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140052180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsOutputFormatSupported(
        CAPOWrapperSrv *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(*(_QWORD *)v4 + 64LL))(
             v4,
             a2,
             a3,
             a4);
  else
    return 2147500033LL;
}
