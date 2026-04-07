/*
 * XREFs of ?_UpdateCaptureControllerSourceOffset@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800929E0
 * Callers:
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800919FC (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001B3A4 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?SetSourceOffset@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800BE18C (-SetSourceOffset@CCaptureControllerProxy@@QEAAJNN@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerSourceOffset(
        CProjectionBorderManager *this,
        HWND a2,
        struct CCaptureControllerProxy *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v10; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    v11 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v10 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a2,
                               &v10);
    v6 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v7 = 964LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
      return v6;
    }
    if ( v10 )
    {
      if ( *((_QWORD *)v10 + 48) )
      {
        SyncedWindowDataByHwnd = CCaptureControllerProxy::SetSourceOffset(
                                   a3,
                                   (double)*((int *)v10 + 12),
                                   (double)*((int *)v10 + 13));
        v6 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v7 = 968LL;
          goto LABEL_8;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  }
  return 0LL;
}
