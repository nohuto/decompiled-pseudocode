/*
 * XREFs of _anonymous_namespace_::State::State @ 0x1800DDC30
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DD5DC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1800DDEC8 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x1800DDF70 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ??R?$default_delete@VCProcessAttributionObserver@@@std@@QEBAXPEAVCProcessAttributionObserver@@@Z @ 0x1801A98A0 (--R-$default_delete@VCProcessAttributionObserver@@@std@@QEBAXPEAVCProcessAttributionObserver@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttributionObserver **__fastcall anonymous_namespace_::State::State(
        struct CProcessAttributionObserver **a1)
{
  __int64 *v1; // rdi
  void *v3; // rax
  void *v4; // rsi
  __int64 v5; // rax
  CProcessAttributionManager *v6; // rcx
  struct CProcessAttributionObserver *Observer; // rax
  struct CProcessAttributionObserver *v8; // rdx
  PTP_WORK ThreadpoolWork; // rax
  _QWORD *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int v14; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_BYTE *)a1 + 16) = 0;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v3 = operator new(0xC0uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0xC0uLL);
    v5 = anonymous_namespace_::FramesReport::FramesReport(v4);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = qword_1803D33D8;
  a1[5] = (struct CProcessAttributionObserver *)v5;
  Observer = CProcessAttributionManager::CreateObserver(v6);
  v8 = *a1;
  *a1 = Observer;
  if ( v8 )
    std::default_delete<CProcessAttributionObserver>::operator()();
  InitializeSListHead((PSLIST_HEADER)a1 + 3);
  ThreadpoolWork = CreateThreadpoolWork(anonymous_namespace_::SendFramesReports, 0LL, 0LL);
  a1[1] = ThreadpoolWork;
  if ( !ThreadpoolWork )
    RaiseFailFastException(0LL, 0LL, 0);
  v1[1] = (__int64)anonymous_namespace_::OnScreenOnStudySessionStateChange;
  v10 = v1 + 2;
  *(_BYTE *)v1 = 1;
  v11 = RtlSubscribeWnfStateChangeNotification(
          v1 + 2,
          WNF_SRUM_SCREENONSTUDY_SESSION,
          0LL,
          anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback,
          v1,
          0LL,
          0,
          0) | 0x10000000;
  if ( v11 < 0 )
  {
    *v10 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x13Au);
    if ( *(_BYTE *)v1 )
    {
      *(_BYTE *)v1 = 0;
      if ( *v10 )
      {
        v14 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
        if ( v14 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
        *v10 = 0LL;
      }
    }
  }
  return a1;
}
