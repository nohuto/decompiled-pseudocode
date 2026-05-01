/*
 * XREFs of ??1?$ComPtr@VLockScreenDirectorServiceProviderImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x180216D74
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_LockScreenDirectorServiceProviderImpl_IUnknown__::_1_::dtor$1 @ 0x180216A0C (_Microsoft--WRL--Details--MakeAndInitialize_LockScreenDirectorServiceProviderImpl_I_ea_180216A0C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180217970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILo_ea_180217970.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LockScreenDirectorServiceProviderImpl>::~ComPtr<LockScreenDirectorServiceProviderImpl>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::Release(result);
  }
  return result;
}
