/*
 * XREFs of ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x18018CA74
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18018BFD8 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x18018C754 (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 *     ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z @ 0x18025D56C (-Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::ProcessBindData(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA *a3)
{
  int v3; // edi
  char v6; // dl
  unsigned int v7; // eax
  enum DXGI_FORMAT v8; // r9d
  void *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rcx
  int Textures; // eax
  __int64 v13; // rcx
  void *v15; // [rsp+20h] [rbp-28h]
  struct CHolographicFrameProcessor *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v3 = 0;
  *((_QWORD *)this + 261) = *((_QWORD *)a3 + 1);
  *((_OWORD *)this + 131) = *((_OWORD *)a3 + 1);
  v6 = *((_BYTE *)a3 + 32);
  *((_BYTE *)this + 2112) = v6;
  *((_DWORD *)this + 529) = *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 530) = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 531) = *((_DWORD *)a3 + 6) - *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 532) = *((_DWORD *)a3 + 7) - *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 533) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 534) = *((_DWORD *)a3 + 5);
  if ( !v6 )
    goto LABEL_13;
  if ( *((_QWORD *)this + 268) )
    goto LABEL_13;
  *((_QWORD *)this + 268) = 0LL;
  v7 = *((_DWORD *)this + 532);
  v8 = *((_DWORD *)this + 531);
  v9 = (void *)*((_QWORD *)this + 246);
  v10 = *((_DWORD *)this + 522);
  v16 = 0LL;
  LODWORD(v15) = v8;
  v3 = CHolographicFrameProcessor::Create(*((struct CComposition **)this + 2), v10, v9, v8, v15, v7, &v16);
  *((_QWORD *)this + 268) = v16;
  if ( v3 >= 0 )
  {
LABEL_13:
    if ( *((_BYTE *)this + 2112) )
    {
      Textures = CVirtualMonitorCaptureRenderTarget::CreateTextures(this, *((_DWORD *)a3 + 9));
      v3 = Textures;
      if ( Textures >= 0 )
        return (unsigned int)v3;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Textures, 0x77u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0x72u, 0LL);
  }
  if ( v3 < 0 )
    CCaptureRenderTarget::ReleaseRenderingResources(this);
  return (unsigned int)v3;
}
