/*
 * XREFs of ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040574
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007AD94 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ??$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x180079F54 (--$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C36C0 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800C3B50 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelZoomTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  int v7; // r11d
  int v8; // r11d
  int v9; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  if ( *((_DWORD *)a2 + 45) )
  {
    v7 = *((_DWORD *)this + 42);
    if ( (v7 & 0xFFFFFF7F) == 0 || *((_DWORD *)this + 32) == 1 && v7 == 64 )
    {
      if ( PtInRect((const RECT *)((char *)a2 + 680), a4) )
      {
        ManipulationInjector::StartZoom((MPCGestureHandler *)((char *)this + 80), &v11, 1, a3);
        *((_BYTE *)this + 972) = (*((_DWORD *)this + 42) & 0xFFFFFF7F) != 0;
        v9 = *((_DWORD *)this + 228);
        ISMTracing::MPCGestureHandler_StartZoom<long &,long &,unsigned long const &,unsigned long>(
          &v11,
          &v11.y,
          &v10,
          &v9);
      }
    }
    else if ( ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3)
           && ((v8 - 16) & 0xFFFFFFEF) == 0 )
    {
      *((_DWORD *)this + 242) = *((_DWORD *)a2 + 167);
    }
  }
}
