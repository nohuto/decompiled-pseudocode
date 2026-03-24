/*
 * XREFs of ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800E4378
 * Callers:
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800E4244 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRen.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1800E4440 (-Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z.c)
 *     ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1800E4A4C (--0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Create(
        struct CD3DDevice *a1,
        const unsigned __int16 *a2,
        struct IRenderTargetBitmap *a3,
        void *a4,
        struct ILegacyRemotingSwapChain **a5)
{
  __int64 v9; // rcx
  HMODULE LibraryA; // rbx
  CLegacyRemotingSwapChain *v11; // rax
  __int64 v12; // rcx
  CLegacyRemotingSwapChain *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx

  *a5 = 0LL;
  LibraryA = LoadLibraryA("rdsdwmdr.dll");
  if ( LibraryA )
  {
    v11 = (CLegacyRemotingSwapChain *)DefaultHeap::Alloc(0x120uLL);
    if ( v11 )
      v13 = CLegacyRemotingSwapChain::CLegacyRemotingSwapChain(v11, a1, a3, a4, LibraryA);
    else
      v13 = 0LL;
    if ( v13 )
    {
      CMILCOMBase::InternalAddRef(v13);
      v14 = CLegacyRemotingSwapChain::Initialize(v13, a2);
      v16 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x22u, 0LL);
        CRenderTargetBitmap::Release(v13);
      }
      else
      {
        *a5 = (CLegacyRemotingSwapChain *)((char *)v13 + 56);
      }
    }
    else
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x20u, 0LL);
    }
  }
  else
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x28u, 0LL);
  }
  return v16;
}
