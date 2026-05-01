/*
 * XREFs of ??$MakeAndInitialize@VAppResizeView@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeView@@AEA_N@Z @ 0x1800BA46C
 * Callers:
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x1800BA500 (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x1803818B8 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppResizeView@@QEAA@XZ @ 0x1804123A8 (--0AppResizeView@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEBAXXZ @ 0x180412F90 (-InternalAddRef@-$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeView,AppResizeView,bool &>(_QWORD *a1, char *a2)
{
  unsigned int v4; // ebx
  void *v5; // rax
  AppResizeView *v6; // rax
  char v7; // cl
  __int64 v8; // r10
  AppResizeView *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  if ( v5 )
  {
    v6 = AppResizeView::AppResizeView((AppResizeView *)v5);
    v7 = *a2;
    v10 = v6;
    v11 = 0LL;
    *((_BYTE *)v6 + 468) = v7;
    Microsoft::WRL::ComPtr<AppResizeView>::InternalAddRef(&v10);
    *a1 = v8;
    Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v10);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return v4;
}
