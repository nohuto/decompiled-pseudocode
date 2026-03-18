/*
 * XREFs of ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x1801C5F2C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801C522C (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x1801C5BCC (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 *     ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z @ 0x18029F5A4 (-Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::ProcessBindData(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA *a3,
        enum DXGI_FORMAT a4)
{
  int v6; // ebx
  char v7; // dl
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rcx
  int Textures; // eax
  __int64 v13; // rcx
  void *v15; // [rsp+20h] [rbp-28h]
  struct CHolographicFrameProcessor *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  *((_QWORD *)this + 258) = *((_QWORD *)a3 + 1);
  v6 = 0;
  *(_OWORD *)((char *)this + 2072) = *((_OWORD *)a3 + 1);
  v7 = *((_BYTE *)a3 + 32);
  *((_BYTE *)this + 2088) = v7;
  *((_DWORD *)this + 523) = *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 524) = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  v8 = *((_DWORD *)a3 + 6) - *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 525) = v8;
  v9 = *((_DWORD *)a3 + 7) - *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 526) = v9;
  *((_DWORD *)this + 527) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 528) = *((_DWORD *)a3 + 5);
  if ( v7 )
  {
    if ( !*((_QWORD *)this + 265) )
    {
      *((_QWORD *)this + 265) = 0LL;
      v10 = *((_DWORD *)this + 516);
      v16 = 0LL;
      LODWORD(v15) = v8;
      v6 = CHolographicFrameProcessor::Create(
             *((struct CComposition **)this + 2),
             v10,
             *((void **)this + 244),
             a4,
             v15,
             v9,
             &v16);
      *((_QWORD *)this + 265) = v16;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v6, 0x6Fu);
        goto LABEL_10;
      }
    }
  }
  if ( *((_BYTE *)this + 2088) )
  {
    Textures = CVirtualMonitorCaptureRenderTarget::CreateTextures(this, *((_DWORD *)a3 + 9));
    v6 = Textures;
    if ( Textures < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, Textures, 0x74u);
LABEL_10:
      CCaptureRenderTarget::ReleaseRenderingResources(this);
    }
  }
  return (unsigned int)v6;
}
