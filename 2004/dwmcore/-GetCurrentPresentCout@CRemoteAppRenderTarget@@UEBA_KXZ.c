/*
 * XREFs of ?GetCurrentPresentCout@CRemoteAppRenderTarget@@UEBA_KXZ @ 0x1801875A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CRemoteAppRenderTarget::GetCurrentPresentCout(CRemoteAppRenderTarget *this)
{
  _DWORD v2[8]; // [rsp+20h] [rbp-38h] BYREF

  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v2);
  return v2[0];
}
