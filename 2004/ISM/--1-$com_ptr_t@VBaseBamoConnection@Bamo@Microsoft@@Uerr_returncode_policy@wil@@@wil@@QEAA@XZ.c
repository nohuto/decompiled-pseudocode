/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800714B4
 * Callers:
 *     _Microsoft::Bamo::BaseBamoConnection::CreateServer_InputSystemServerConnection__::_1_::dtor$0 @ 0x180050E8D (_Microsoft--Bamo--BaseBamoConnection--CreateServer_InputSystemServerConnection__--_1_--dtor$0.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_AnimationDataProviderConnection__::_1_::dtor$0 @ 0x180050E9F (_Microsoft--Bamo--BaseBamoConnection--CreateClient_AnimationDataProviderConnection__--_1_--dtor$.c)
 *     _MPCManager::MPCManager_::_1_::dtor$1 @ 0x180050F0B (_MPCManager--MPCManager_--_1_--dtor$1.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x180105B0F (_Microsoft--Bamo--BaseBamoConnection--CreateClient_MPCManagerClientConnection__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033518 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  return result;
}
