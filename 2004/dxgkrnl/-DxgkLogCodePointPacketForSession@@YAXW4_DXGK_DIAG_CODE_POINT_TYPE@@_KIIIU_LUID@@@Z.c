/*
 * XREFs of ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019438
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013BF44 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01611B0 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C0161550 (_lambda_d7c4861ef0734605370a98f05df27570_--operator().c)
 *     DxgkRegisterDwmProcess @ 0x1C0161650 (DxgkRegisterDwmProcess.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0161748 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0185698 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     _lambda_4498cf4aa093f7a41b3920419f3e92d9_::operator() @ 0x1C025A9FC (_lambda_4498cf4aa093f7a41b3920419f3e92d9_--operator().c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C02654D0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02DE0B8 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E4588 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4814 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkLogCodePointPacketForSession(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6)
{
  _QWORD v11[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v11, 0, 0x48uLL);
  if ( a6 )
  {
    memset(&v11[3], 0, 20);
    HIDWORD(v11[7]) = a5;
    v11[0] = 0x480000001ELL;
    v11[8] = a6;
  }
  else
  {
    v11[0] = 0x4000000006LL;
    memset(&v11[3], 0, 20);
    HIDWORD(v11[7]) = a5;
  }
  LODWORD(v11[7]) = a4;
  v11[6] = __PAIR64__(a3, a1);
  *(_OWORD *)&v11[1] = 0LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, a2);
}
