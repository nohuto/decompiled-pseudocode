/*
 * XREFs of ?ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR@@@Z @ 0x180189E58
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801892D8 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::ProcessBoundsInMonitor(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // r9d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v4 = 0;
  *((_OWORD *)this + 131) = *(_OWORD *)((char *)a3 + 8);
  v5 = (unsigned int)(*((_DWORD *)a3 + 4) - *((_DWORD *)a3 + 2));
  *((_DWORD *)this + 531) = v5;
  v6 = *((_DWORD *)a3 + 5) - *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 532) = v6;
  *((_DWORD *)this + 533) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 534) = *((_DWORD *)a3 + 3);
  v7 = *((_QWORD *)this + 268);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, v5, v6);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x92u, 0LL);
      CCaptureRenderTarget::ReleaseRenderingResources(this);
    }
  }
  return v4;
}
