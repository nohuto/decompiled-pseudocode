/*
 * XREFs of ?GetPresentStats@CTargetStats@@QEBAXPEAVIOverlaySwapChain@@PEAUtagCOMPOSITION_STATS@@@Z @ 0x1800BBFA0
 * Callers:
 *     ?GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1800BBE9C (-GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STA.c)
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801C874C (-GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTargetStats::GetPresentStats(
        CTargetStats *this,
        struct IOverlaySwapChain *a2,
        struct tagCOMPOSITION_STATS *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // et2

  *(_DWORD *)a3 = *(_DWORD *)this;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 1) + *((_DWORD *)this + 2);
  v6 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 80LL))(a2);
  v7 = *((_DWORD *)this + 1) % v6;
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 3) + *((_DWORD *)this + 1) / v6;
  *((_QWORD *)a3 + 2) = *((_QWORD *)this + 2)
                      + *((unsigned int *)this + 1)
                      * (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, v7);
}
