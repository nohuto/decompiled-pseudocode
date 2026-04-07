/*
 * XREFs of ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x180090AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800062A0 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180091824 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x180091E80 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x180092108 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800BDA98 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateProxyWindowForCapture(
        CProjectionBorderManager *this,
        HWND a2,
        HWND a3,
        HWND a4)
{
  struct _RTL_GENERIC_TABLE *v8; // r14
  HWND *v9; // rax
  HWND v10; // rsi
  CProjectionBorderManager *v11; // rcx
  int CapturedItemRootVisual; // eax
  CProjectionBorderManager *v13; // rcx
  unsigned int v14; // ebx
  CCaptureControllerProxy **v15; // rax
  CCaptureControllerProxy **v16; // rdi
  __int64 v17; // rdx
  PVOID RestartKey; // [rsp+20h] [rbp-20h] BYREF
  struct CVisualProxy *v20; // [rsp+28h] [rbp-18h] BYREF
  PVOID v21; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v8 = (struct _RTL_GENERIC_TABLE *)((char *)this + 432);
  do
  {
    v9 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(v8, &RestartKey);
    if ( !v9 )
      goto LABEL_25;
  }
  while ( v9[2] != a2 );
  RestartKey = 0LL;
  v20 = 0LL;
  v10 = a2;
  if ( a3 )
    v10 = a3;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&RestartKey);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(
                             v11,
                             v10,
                             &v20,
                             (struct CapturedWindowSWRVisual **)&RestartKey);
  v14 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual < 0 )
  {
    if ( CapturedItemRootVisual != -2147467261 )
    {
      v17 = 616LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)CapturedItemRootVisual);
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&RestartKey);
      goto LABEL_26;
    }
  }
  else
  {
    v21 = 0LL;
    while ( 1 )
    {
      v15 = (CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(v8, &v21);
      v16 = v15;
      if ( !v15 )
        break;
      if ( v15[2] == (CCaptureControllerProxy *)a2 )
      {
        CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual(v15[1], v20);
        v14 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 602LL;
          goto LABEL_23;
        }
        CapturedItemRootVisual = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(this, v10, v16[1]);
        v14 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 603LL;
          goto LABEL_23;
        }
      }
    }
    if ( v10 == a3 )
    {
      CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v13, v10, 1);
      v14 = CapturedItemRootVisual;
      if ( CapturedItemRootVisual < 0 )
      {
        v17 = 610LL;
        goto LABEL_23;
      }
    }
  }
  if ( a4 )
  {
    CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v13, a4, 0);
    v14 = CapturedItemRootVisual;
    if ( CapturedItemRootVisual < 0 )
    {
      v17 = 624LL;
      goto LABEL_23;
    }
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&RestartKey);
LABEL_25:
  v14 = 0;
LABEL_26:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v14;
}
