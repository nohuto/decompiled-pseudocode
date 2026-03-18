/*
 * XREFs of ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180193738
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x18002F19C (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x18002F6AC (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18019233C (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180193334 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801956A4 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::Release(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 48LL))(this);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
