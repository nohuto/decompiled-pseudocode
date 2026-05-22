/*
 * XREFs of ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033518
 * Callers:
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x1800148C0 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180031760 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ?RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ @ 0x180031870 (-RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x180031928 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x1800323B8 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180033170 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x18003334C (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800714B4 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1MPCManager@@UEAA@XZ @ 0x180071608 (--1MPCManager@@UEAA@XZ.c)
 *     ??1?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BBB4C (--1-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180105A14 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x18010685C (--1MPCManagerClient@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18010AC90 (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x1801110A4 (--1MPCConstantManagerClient@@UEAA@XZ.c)
 *     ??_GCursorSuppressionProcessor@@UEAAPEAXI@Z @ 0x180137BF0 (--_GCursorSuppressionProcessor@@UEAAPEAXI@Z.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x18014112C (--1AnimationDataProvider@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180171910 (-RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Mic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::Release(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 (__fastcall ***v1)(_QWORD); // rax

  v1 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 24LL))(this);
  return (**v1)(v1);
}
