/*
 * XREFs of ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x18027FD74
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801C7AB8 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x180023A90 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z @ 0x18027FBF0 (-InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CDisplayManager::ValidateLuidAndMonitor(CDisplayManager *this, struct _LUID a2, HMONITOR a3)
{
  int Adapter; // eax
  CDisplayManager *v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  CDisplayManager *v10; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIAdapter1 *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = this;
  v11 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, &v11);
  LODWORD(v10) = Adapter;
  v6 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, &dword_18038DA88, 2LL, Adapter, 0x18u);
LABEL_5:
    TranslateDXGIorD3DErrorInContext(v6, 4, &v10);
    v6 = (unsigned int)v10;
    goto LABEL_6;
  }
  v7 = CDisplayManager::InternalValidateMonitor(v5, v11, a3);
  LODWORD(v10) = v7;
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18038DA88, 2LL, v7, 0x1Cu);
    goto LABEL_5;
  }
LABEL_6:
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v11);
  return v6;
}
