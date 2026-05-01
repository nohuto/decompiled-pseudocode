/*
 * XREFs of ??1?$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18036F3CC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_AccessibilityExperienceManager_AccessibilityExperienceManager__::_1_::dtor$2 @ 0x18036E82A (_Microsoft--WRL--Details--MakeAndInitialize_AccessibilityExperienceManager_Accessib_ea_18036E82A.c)
 *     _AccessibilityExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x18036FD4F (_AccessibilityExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::~ComPtr<AccessibilityExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::InternalRelease(a1);
}
