/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x180436510
 * Callers:
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1804368EC (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139DAC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??0CVirtualDesktopCollection@@QEAA@XZ @ 0x1804365D0 (--0CVirtualDesktopCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180437000 (-InternalRelease@-$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x180437214 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
        CVirtualDesktopCollection **a1,
        struct IVirtualDesktopFactory **a2,
        struct IVirtualDesktopPersistence **a3,
        bool *a4)
{
  CVirtualDesktopCollection *v8; // rax
  int v9; // ebx
  CVirtualDesktopCollection *v10; // rdi
  volatile int *v11; // rdx
  CVirtualDesktopCollection *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CVirtualDesktopCollection *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CVirtualDesktopCollection::CVirtualDesktopCollection(v8);
    v13 = v10;
    v9 = CVirtualDesktopCollection::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          (__int64)v10,
          v11);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
