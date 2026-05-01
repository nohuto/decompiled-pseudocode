/*
 * XREFs of ??1?$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18034DEAC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_AccessibilityExperienceManager_AccessibilityExperienceManager__::_1_::dtor$2 @ 0x18034D30A (_Microsoft--WRL--Details--MakeAndInitialize_AccessibilityExperienceManager_Accessib_ea_18034D30A.c)
 *     _AccessibilityExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x18034E82F (_AccessibilityExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::~ComPtr<AccessibilityExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::InternalRelease(a1);
}
