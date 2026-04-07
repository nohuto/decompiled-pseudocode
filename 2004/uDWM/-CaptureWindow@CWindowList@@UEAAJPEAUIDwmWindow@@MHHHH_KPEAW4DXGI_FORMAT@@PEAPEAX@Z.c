/*
 * XREFs of ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180096570
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18001D644 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x1800BD6BC (--$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCa.c)
 *     ?SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800BE2BC (-SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_.c)
 */

__int64 __fastcall CWindowList::CaptureWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        float a3,
        int a4,
        int a5,
        void *a6,
        int a7,
        unsigned __int64 a8,
        enum DXGI_FORMAT *a9,
        void **a10)
{
  int SyncedWindowData; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  const struct CVisualProxy *v16; // rsi
  int v17; // eax
  CLegacyVisualCaptureRenderTargetProxy *v18; // rbx
  int v19; // eax
  struct CWindowData *v21; // [rsp+50h] [rbp-38h] BYREF
  CLegacyVisualCaptureRenderTargetProxy *v22; // [rsp+58h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+60h] [rbp-28h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v22 = 0LL;
  v21 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v21);
  v14 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    if ( !v21 )
      goto LABEL_14;
    v15 = *((_QWORD *)v21 + 48);
    if ( !v15 )
      goto LABEL_14;
    v16 = *(const struct CVisualProxy **)(v15 + 264);
    if ( v16 )
      v16 = (const struct CVisualProxy *)*((_QWORD *)v16 + 2);
    if ( v16 )
    {
      v17 = CCompositor::CreateProxy<CLegacyVisualCaptureRenderTargetProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v22);
      v18 = v22;
      v14 = v17;
      if ( v17 >= 0 )
      {
        v19 = CLegacyVisualCaptureRenderTargetProxy::SyncCaptureBits(v22, v16, a3, a4, a5, (int)a6, a7, a8, a9, a10);
        v14 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x153Cu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x153Bu);
      }
      if ( v18 )
        CBaseObject::Release(v18);
    }
    else
    {
LABEL_14:
      v14 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0x153Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1534u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v14;
}
