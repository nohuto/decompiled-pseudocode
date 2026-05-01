/*
 * XREFs of ??1?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801F1944
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CortanaStoreAppExperienceManager_CortanaStoreAppExperienceManager__::_1_::dtor$2 @ 0x1801F1516 (_Microsoft--WRL--Details--MakeAndInitialize_CortanaStoreAppExperienceManager_Cortan_ea_1801F1516.c)
 *     _CortanaStoreAppExperienceManagerFactory::CreateInstance_::_1_::dtor$0 @ 0x1801F294F (_CortanaStoreAppExperienceManagerFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::~ComPtr<CortanaStoreAppExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease(a1);
}
