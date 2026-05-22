/*
 * XREFs of ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180002B80
 * Callers:
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180002AC4 (-RemoveAt@-$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamo.c)
 *     _Microsoft::Bamo::ListPrincipalCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy___::RemoveAt_::_1_::dtor$0 @ 0x18004DB52 (_Microsoft--Bamo--ListPrincipalCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--BamoList_Activat.c)
 *     _ForegroundManager::OnActivationObjectNotification_::_1_::dtor$9 @ 0x180050250 (_ForegroundManager--OnActivationObjectNotification_--_1_--dtor$9.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180130370 (-RemoveAt@-$ListPrincipalCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Ba.c)
 *     _Microsoft::Bamo::ListPrincipalCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy___::RemoveAt_::_1_::dtor$0 @ 0x180130472 (_Microsoft--Bamo--ListPrincipalCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--BamoList_PenDevi.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180130588 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 *     _PenDeviceManager::RepopulateActiveBamoForId_::_1_::dtor$62 @ 0x180130919 (_PenDeviceManager--RepopulateActiveBamoForId_--_1_--dtor$62.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800064C0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall Microsoft::Bamo::Lock::~Lock(Microsoft::Bamo::Lock *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rcx

  v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)this + 32LL);
  --*((_DWORD *)v2 + 43);
  if ( !*((_BYTE *)this + 8) )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v2);
  if ( *(_QWORD *)this )
    Microsoft::BamoImpl::BamoImplObject::Release(*(Microsoft::BamoImpl::BamoImplObject **)this);
}
