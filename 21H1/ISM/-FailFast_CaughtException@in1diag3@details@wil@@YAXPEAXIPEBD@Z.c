/*
 * XREFs of ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180072970
 * Callers:
 *     _Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer_::_1_::catch$31 @ 0x18003F8A3 (_Microsoft--BamoImpl--BufferingMessageCallHost--SubmitBuffer_--_1_--catch$31.c)
 *     _Microsoft::Bamo::ListPrincipalCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy___::RemoveAt_::_1_::catch$15 @ 0x18004DB64 (_Microsoft--Bamo--ListPrincipalCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--Bam_ea_18004DB64.c)
 *     _Microsoft::Bamo::ListPrincipalSimpleCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy__BamoActivatableEntityPrincipal___::InsertWorker_::_1_::catch$46 @ 0x180050294 (_Microsoft--Bamo--ListPrincipalSimpleCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamo_ea_180050294.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::catch$20 @ 0x180051A2F (_GameInputProcessor--GameInputProcessor_--_1_--catch$20.c)
 *     _Microsoft::Bamo::ListPrincipalSimpleCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy__BamoPenDevicePrincipal___::InsertWorker_::_1_::catch$15 @ 0x18012FC26 (_Microsoft--Bamo--ListPrincipalSimpleCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamo_ea_18012FC26.c)
 *     _Microsoft::Bamo::ListPrincipalCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy___::RemoveAt_::_1_::catch$15 @ 0x18013047E (_Microsoft--Bamo--ListPrincipalCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--Bam_ea_18013047E.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::catch$15 @ 0x1801663B3 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--catch$15.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::catch$8 @ 0x18017C228 (_GameInputProcessor--_GameInputProcessor_--_1_--catch$8.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180073C18 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

void __fastcall wil::details::in1diag3::FailFast_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::ReportFailure_CaughtException(this, a2, a3, a4);
}
