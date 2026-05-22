/*
 * XREFs of ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033548
 * Callers:
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x1800148F0 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180016718 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016820 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180031790 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ?RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ @ 0x1800318A0 (-RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x180031958 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x1800323E8 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x1800331A0 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x18003337C (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180071414 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1MPCManager@@UEAA@XZ @ 0x180071568 (--1MPCManager@@UEAA@XZ.c)
 *     ??1?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BBAAC (--1-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180105984 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x1801067CC (--1MPCManagerClient@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18010AC00 (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x180111014 (--1MPCConstantManagerClient@@UEAA@XZ.c)
 *     ??_GCursorSuppressionProcessor@@UEAAPEAXI@Z @ 0x180137B60 (--_GCursorSuppressionProcessor@@UEAAPEAXI@Z.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x18014109C (--1AnimationDataProvider@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180171880 (-RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Mic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::Release(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 (__fastcall ***v1)(_QWORD); // rax

  v1 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 24LL))(this);
  return (**v1)(v1);
}
