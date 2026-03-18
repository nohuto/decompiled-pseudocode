/*
 * XREFs of ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x1800B06D0
 * Callers:
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800B0604 (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800B0BB4 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

DiagnosticCallbacksManager *__fastcall DiagnosticCallbacksManager::DiagnosticCallbacksManager(
        DiagnosticCallbacksManager *this)
{
  __int64 v2; // rax

  *(_QWORD *)this = &DiagnosticCallbacks_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (DiagnosticCallbacksManager *)((char *)this + 8),
    this);
  *((_QWORD *)this + 1) = &BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl::`vftable';
  *(_QWORD *)this = &DiagnosticCallbacksManager::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 24) = v2;
  return this;
}
