/*
 * XREFs of ??1?$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801AE4C4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CActionCenterExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801ADC96 (_Microsoft--WRL--Details--MakeAndInitialize_CActionCenterExperienceManager_IInspect_ea_1801ADC96.c)
 * Callees:
 *     ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x18007CB40 (-Release@CActionCenterExperienceManager@@UEAAKXZ.c)
 */

CActionCenterExperienceManager *__fastcall Microsoft::WRL::ComPtr<CActionCenterExperienceManager>::~ComPtr<CActionCenterExperienceManager>(
        CActionCenterExperienceManager **a1)
{
  CActionCenterExperienceManager *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CActionCenterExperienceManager *)CActionCenterExperienceManager::Release(result);
  }
  return result;
}
