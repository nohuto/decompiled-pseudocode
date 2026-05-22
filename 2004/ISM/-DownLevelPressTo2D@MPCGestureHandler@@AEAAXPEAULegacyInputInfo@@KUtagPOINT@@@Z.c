/*
 * XREFs of ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800402B4
 * Callers:
 *     ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800405B4 (-DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007AE34 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180075A9C (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ??$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x180079D44 (--$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C2FF8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C3750 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelPressTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v4; // rbp
  __int64 v8; // r11
  MPCHolographicInputManager *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v4 = (MPCGestureHandler *)((char *)this + 80);
  if ( !ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3) )
  {
    if ( PtInRect((const RECT *)(v8 + 680), a4) )
    {
      ManipulationInjector::InjectDrag(v4, &v13, a3);
      *((_BYTE *)this + 972) = ManipulationInjector::IsInContactForDeviceId(v4, a3);
      Instance = MPCHolographicInputManager::GetInstance();
      PostProcessor = MPCHolographicInputManager::GetPostProcessor(Instance);
      (*(void (__fastcall **)(struct IMPCInputPostProcessor *, struct tagPOINT))(*(_QWORD *)PostProcessor + 64LL))(
        PostProcessor,
        a4);
      v11 = *((_DWORD *)this + 228);
      ISMTracing::MPCGestureHandler_InjectPress<long &,long &,unsigned long const &,unsigned long>(
        &v13,
        &v13.y,
        &v12,
        &v11);
    }
  }
}
