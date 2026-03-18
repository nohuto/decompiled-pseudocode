/*
 * XREFs of ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x1801C02D0
 * Callers:
 *     ?ProcessSetRoot@CRemoteAppRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x1801C2BC0 (-ProcessSetRoot@CRemoteAppRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801C034C (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CRenderTarget::ProcessSetRoot(
        CRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_SETROOT *a3)
{
  struct CVisual *Resource; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0xC3u)) != 0LL )
  {
    v9 = CRenderTarget::SetRootVisual(this, Resource);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x2Au);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2003303421, 0x26u);
  }
  return v8;
}
