/*
 * XREFs of ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x1801D5E58
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x180212E64 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801D6AC8 (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 */

__int64 __fastcall CManipulation::SetAutoReset_RenderThread(CManipulation *this)
{
  int RenderToManipulationMsgInfo; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  struct IMessageCallSendHost *v8; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(this, &v8, &v9);
  v4 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, RenderToManipulationMsgInfo, 0x366u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v5 = CoreUICallSend(v8, &v9, 1LL, 10LL, 2, &unk_1802CCE24);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x36Fu, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return v4;
}
