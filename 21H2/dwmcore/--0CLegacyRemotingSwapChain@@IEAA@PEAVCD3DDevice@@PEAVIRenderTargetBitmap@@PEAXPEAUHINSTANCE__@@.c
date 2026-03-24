/*
 * XREFs of ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1800E4A4C
 * Callers:
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800E4378 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILe.c)
 * Callees:
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x180025BA4 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180038E0C (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 */

CLegacyRemotingSwapChain *__fastcall CLegacyRemotingSwapChain::CLegacyRemotingSwapChain(
        CLegacyRemotingSwapChain *this,
        struct CD3DDevice *a2,
        struct IRenderTargetBitmap *a3,
        void *a4,
        HINSTANCE a5)
{
  __int64 v8; // rcx
  __int64 v9; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = &CLegacyRemotingSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 8) = &CLegacyRemotingSwapChain::`vbtable'{for `ISwapChain'};
  *((_QWORD *)this + 32) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 35) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_QWORD *)this + 2) = &CDeviceResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 20) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 7) = &ILegacyRemotingSwapChain::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CLegacyRemotingSwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CLegacyRemotingSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CLegacyRemotingSwapChain::`vftable'{for `ILegacyRemotingSwapChain'};
  *((_QWORD *)this + 9) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CLegacyRemotingSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CLegacyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  v8 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v8 + 20) = v8 - 208;
  v9 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v9 + 20) = v9 - 224;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 20) = *(_DWORD *)(*((_QWORD *)this + 3) + 12LL)
                                                                          - 248;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
    (CMILCOMBase **)this + 10,
    a2);
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)this + 11,
    (__int64)a3);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 13) = a5;
  *((_QWORD *)this + 16) = (char *)this + 136;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 25) = a4;
  *((_QWORD *)this + 26) = 0LL;
  *((_BYTE *)this + 216) = a4 != 0LL;
  return this;
}
