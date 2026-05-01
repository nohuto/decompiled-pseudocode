/*
 * XREFs of ??$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChromeManager@@AEAPEAUIUnknown@@@Z @ 0x180406020
 * Callers:
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180406300 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18014D9E0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014D9E0.c)
 *     ??0ChromeManager@@QEAA@XZ @ 0x1804060CC (--0ChromeManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1804064C4 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x1804065B8 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ChromeManager,ChromeManager,IUnknown * &>(
        ChromeManager **a1,
        struct IUnknown **a2)
{
  ChromeManager *v4; // rax
  int v5; // ebx
  ChromeManager *v6; // rdi
  volatile int *v7; // rdx
  ChromeManager *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (ChromeManager *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ChromeManager::ChromeManager(v4);
    v9 = v6;
    v10 = 0LL;
    v5 = ChromeManager::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
          (__int64)v6,
          v7);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
