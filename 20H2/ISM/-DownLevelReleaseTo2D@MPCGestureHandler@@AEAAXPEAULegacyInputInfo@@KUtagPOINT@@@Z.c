/*
 * XREFs of ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800402F4
 * Callers:
 *     ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040524 (-DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007AD94 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ??$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x180079D0C (--$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?ResetGestureState@MPCSpatialGestureRecognizerHandler@@QEAAXXZ @ 0x180081E4C (-ResetGestureState@MPCSpatialGestureRecognizerHandler@@QEAAXXZ.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C20AC (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C2F68 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C36C0 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelReleaseTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  unsigned int v7; // edx
  MPCSpatialGestureRecognizerHandler *v8; // rcx
  struct tagPOINT v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  if ( *((_DWORD *)this + 32) == 1 && *((_DWORD *)this + 42) == 64 )
  {
    v9 = (struct tagPOINT)*((_QWORD *)this + 28);
    ManipulationInjector::InjectDrag((MPCGestureHandler *)((char *)this + 80), &v9, a3);
    *((_BYTE *)this + 972) = ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3);
  }
  if ( ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3)
    && *((_DWORD *)this + 42) == 1 )
  {
    *((float *)this + 239) = *((float *)this + 238)
                           / (float)((double)(*((_DWORD *)a2 + 4) - *((_DWORD *)this + 236))
                                   / (double)(int)qword_1802082E8);
  }
  ManipulationInjector::EndManipulation((MPCGestureHandler *)((char *)this + 80), v7);
  if ( (*((_DWORD *)this + 42) & 0xFFFFFF7F) == 0 )
  {
    v8 = (MPCSpatialGestureRecognizerHandler *)*((_QWORD *)this + 113);
    if ( v8 )
      MPCSpatialGestureRecognizerHandler::ResetGestureState(v8);
  }
  v9.x = *((_DWORD *)this + 228);
  ISMTracing::MPCGestureHandler_InjectRelease<long &,long &,unsigned long const &,unsigned long>(
    &v11,
    &v11.y,
    &v10,
    &v9);
}
