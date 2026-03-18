/*
 * XREFs of ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18027F930
 * Callers:
 *     ?EnsureValidVidPnTargetId@CLegacySwapChain@@IEBAXXZ @ 0x18001C050 (-EnsureValidVidPnTargetId@CLegacySwapChain@@IEBAXXZ.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x1800D914C (-GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ.c)
 *     ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x18028BDD0 (-UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x180023A90 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18027F9EC (-InternalGetDXGIOutput@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@IPEAPEAUIDXGIOutputDWM@@@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIOutput(
        CDisplayManager *this,
        struct _LUID a2,
        unsigned int a3,
        struct IDXGIOutputDWM **a4)
{
  int Adapter; // eax
  CDisplayManager *v7; // rcx
  unsigned int v8; // ebx
  int DXGIOutput; // eax
  __int64 v10; // rcx
  CDisplayManager *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIAdapter1 *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = this;
  *a4 = 0LL;
  v13 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, &v13);
  LODWORD(v12) = Adapter;
  v8 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, &dword_18038DA88, 2LL, Adapter, 0x6Cu);
LABEL_5:
    TranslateDXGIorD3DErrorInContext(v8, 4, &v12);
    v8 = (unsigned int)v12;
    goto LABEL_6;
  }
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(v7, v13, a3, a4);
  LODWORD(v12) = DXGIOutput;
  v8 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18038DA88, 2LL, DXGIOutput, 0x72u);
    goto LABEL_5;
  }
LABEL_6:
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v13);
  return v8;
}
