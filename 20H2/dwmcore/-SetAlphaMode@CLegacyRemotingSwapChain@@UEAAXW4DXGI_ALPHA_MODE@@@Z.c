/*
 * XREFs of ?SetAlphaMode@CLegacyRemotingSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18024F610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800E5944 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ??$query_to@VIBitmapDest2@@@?$com_ptr_t@VIBitmapDest@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIBitmapDest2@@@Z @ 0x1800ECABC (--$query_to@VIBitmapDest2@@@-$com_ptr_t@VIBitmapDest@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     ??I?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ @ 0x1800ECADC (--I-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyRemotingSwapChain::SetAlphaMode(CLegacyRemotingSwapChain *this, unsigned int a2)
{
  __int64 *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)this + 5) )
  {
    v5 = 0LL;
    v4 = wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator&(&v5);
    if ( (int)wil::com_ptr_t<IBitmapDest,wil::err_returncode_policy>::query_to<IBitmapDest2>(
                (_QWORD *)this + 5,
                (__int64)v4) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, a2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v5);
  }
}
