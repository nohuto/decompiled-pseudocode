/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ @ 0x180376CD4
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopController@@@Z @ 0x1803761D8 (--$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualD.c)
 *     ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180377974 (-VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803773F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVir_ea_1803773F0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
