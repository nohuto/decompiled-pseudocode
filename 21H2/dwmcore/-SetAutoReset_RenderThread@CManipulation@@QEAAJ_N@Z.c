/*
 * XREFs of ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x1801F45D4
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x180264B5C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801F529C (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, RenderToManipulationMsgInfo, 0x364u);
  }
  else
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v5 = CoreUICallSend(v8, &v9, 1LL, 12LL, 2, &unk_18032C3FA);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x36Du);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return v4;
}
