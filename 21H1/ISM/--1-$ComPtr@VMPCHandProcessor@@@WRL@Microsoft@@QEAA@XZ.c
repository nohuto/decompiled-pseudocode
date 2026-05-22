/*
 * XREFs of ??1?$ComPtr@VMPCHandProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180136764
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x1801364E2 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputP_ea_1801364E2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHomeGestureProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x180136614 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHomeGestureProcessor_IInputProcessor_ea_180136614.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCVoiceProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x18013674F (_Microsoft--WRL--Details--MakeAndInitialize_MPCVoiceProcessor_IInputProcessor_Input_ea_18013674F.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCSixDofProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x18018ABE5 (_Microsoft--WRL--Details--MakeAndInitialize_MPCSixDofProcessor_IInputProcessor_Inpu_ea_18018ABE5.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCEyeGazeProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801976FB (_Microsoft--WRL--Details--MakeAndInitialize_MPCEyeGazeProcessor_IInputProcessor_Inp_ea_1801976FB.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x180197D38 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputP_ea_180197D38.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCClickerProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x180198341 (_Microsoft--WRL--Details--MakeAndInitialize_MPCClickerProcessor_IInputProcessor_Inp_ea_180198341.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_18007F1F0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCHandProcessor>::~ComPtr<MPCHandProcessor>(__int64 *a1, volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(
             result,
             a2);
  }
  return result;
}
