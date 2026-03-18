/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801F529C
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x1801F45D4 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801F46CC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CManipulation *this,
        struct IMessageCallSendHost **a2,
        unsigned __int64 *a3)
{
  CComposition *v3; // rbx
  int ManipulationManager; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct CManipulationManager *v9; // rbx
  struct IMessageCallSendHost **v10; // rdi
  unsigned __int64 v11; // rax
  struct CManipulationManager *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (CComposition *)*((_QWORD *)this + 2);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v13);
  v8 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, ManipulationManager, 0x309u);
  }
  else
  {
    *a2 = 0LL;
    v9 = v13;
    v10 = (struct IMessageCallSendHost **)((char *)v13 + 64);
    if ( *((_QWORD *)v13 + 8)
      && (Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v13 + 8), (*a2 = *v10) != 0LL) )
    {
      v11 = *((_QWORD *)v9 + 4);
      *a3 = v11;
      if ( v11 )
      {
        v8 = 0;
      }
      else
      {
        v8 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147467259, 0x30Du);
      }
    }
    else
    {
      v8 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147467259, 0x30Bu);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return v8;
}
