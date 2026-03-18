/*
 * XREFs of ?GetDesktopTree@CDDisplayRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x180170070
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x1800268A8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::GetDesktopTree(CDDisplayRenderTarget *this, struct CDesktopTree **a2)
{
  CMILCOMBase *v3; // rdx
  unsigned int v4; // edi
  CRenderTargetBitmap *v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = (CMILCOMBase *)*((_QWORD *)this + 3);
  v4 = 0;
  if ( v3 )
  {
    wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(&v6, v3);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x74u, 0LL);
  }
  *a2 = 0LL;
  return v4;
}
