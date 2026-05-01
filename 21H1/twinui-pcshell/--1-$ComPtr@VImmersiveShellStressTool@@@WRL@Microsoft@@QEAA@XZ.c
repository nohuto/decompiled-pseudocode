/*
 * XREFs of ??1?$ComPtr@VImmersiveShellStressTool@@@WRL@Microsoft@@QEAA@XZ @ 0x1801F3888
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveShellStressTool_IUnknown__::_1_::dtor$2 @ 0x1801F34AD (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveShellStressTool_IUnknown__--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSwitchController_IUnknown__::_1_::dtor$1 @ 0x1803AA22F (_Microsoft--WRL--Details--MakeAndInitialize_CSwitchController_IUnknown__--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveShellStressTool>::~ComPtr<ImmersiveShellStressTool>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::Release(
             result,
             a2);
  }
  return result;
}
