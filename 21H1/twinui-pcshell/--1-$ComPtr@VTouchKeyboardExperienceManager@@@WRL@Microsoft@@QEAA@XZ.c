/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180326300
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TouchKeyboardExperienceManager_TouchKeyboardExperienceManager__::_1_::dtor$2 @ 0x1803235CF (_Microsoft--WRL--Details--MakeAndInitialize_TouchKeyboardExperienceManager_TouchKey_ea_1803235CF.c)
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x180327572 (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(a1);
}
