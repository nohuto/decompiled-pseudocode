/*
 * XREFs of ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18001D4F0
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18001D2B0 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x18001D5B8 (--0CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18004243C (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CFrameApplicationPresentation,CFrameApplicationPresentation,unsigned short const * &,unsigned long &,bool &,IIAMServiceProvider * &,IImmersiveApplicationInternal * &>(
        CFrameApplicationPresentation **a1,
        const unsigned __int16 **a2,
        unsigned int *a3,
        bool *a4,
        struct IIAMServiceProvider **a5,
        struct IImmersiveApplicationInternal **a6)
{
  CFrameApplicationPresentation *v10; // rax
  CFrameApplicationPresentation *v11; // rsi
  int v12; // ebx
  CFrameApplicationPresentation *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CFrameApplicationPresentation *)operator new(0x280uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = CFrameApplicationPresentation::CFrameApplicationPresentation(v10);
    v14 = v11;
    v12 = CFrameApplicationPresentation::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
      *a1 = v11;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
