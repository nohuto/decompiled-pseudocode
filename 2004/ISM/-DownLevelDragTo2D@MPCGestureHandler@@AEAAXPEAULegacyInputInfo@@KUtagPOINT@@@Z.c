/*
 * XREFs of ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x18004019C
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007AE34 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C2FF8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C3750 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelDragTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v5; // rdi
  struct tagPOINT v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = a4;
  v5 = (MPCGestureHandler *)((char *)this + 80);
  if ( PtInRect((const RECT *)((char *)a2 + 680), a4) || ManipulationInjector::IsInContactForDeviceId(v5, a3) )
  {
    ManipulationInjector::InjectDrag(v5, &v7, a3);
    *((_BYTE *)this + 972) = ManipulationInjector::IsInContactForDeviceId(v5, a3);
  }
}
