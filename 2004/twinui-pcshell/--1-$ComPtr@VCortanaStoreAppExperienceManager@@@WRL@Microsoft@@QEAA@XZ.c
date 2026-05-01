/*
 * XREFs of ??1?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801F25F0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CortanaStoreAppExperienceManager_CortanaStoreAppExperienceManager__::_1_::dtor$2 @ 0x1801F2316 (_Microsoft--WRL--Details--MakeAndInitialize_CortanaStoreAppExperienceManager_Cortan_ea_1801F2316.c)
 *     _CortanaStoreAppExperienceManagerFactory::CreateInstance_::_1_::dtor$0 @ 0x1801F352F (_CortanaStoreAppExperienceManagerFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::~ComPtr<CortanaStoreAppExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease(a1);
}
