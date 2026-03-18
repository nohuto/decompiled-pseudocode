/*
 * XREFs of ?Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC0BC
 * Callers:
 *     ?GetOutstandingFrameCount@CLegacyRenderTarget@@UEAAIXZ @ 0x1800BBE40 (-GetOutstandingFrameCount@CLegacyRenderTarget@@UEAAIXZ.c)
 *     ?GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1800BBE9C (-GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STA.c)
 *     ?Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC030 (-Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?GetOutstandingFrameCount@CDDisplayRenderTarget@@UEAAIXZ @ 0x1801C86F0 (-GetOutstandingFrameCount@CDDisplayRenderTarget@@UEAAIXZ.c)
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801C874C (-GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_S.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CTargetStats::Update(CTargetStats *this, unsigned __int64 a2, struct IOverlaySwapChain *a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( a2 <= *((_QWORD *)this + 5) )
    return 1;
  v6 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a3 + 8LL))(a3);
  *(_DWORD *)this = v6;
  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( v6 )
  {
    if ( (*(int (__fastcall **)(struct IOverlaySwapChain *, __int128 *))(*(_QWORD *)a3 + 96LL))(a3, &v10) >= 0 )
    {
      v7 = *(_DWORD *)this;
      v8 = v10;
      if ( *(_DWORD *)this >= (unsigned int)v10 )
      {
        *((_DWORD *)this + 6) = v10;
        *((_DWORD *)this + 1) = v7 - v8;
        *((_DWORD *)this + 2) = v11;
        *((_DWORD *)this + 3) = v12;
        *((_QWORD *)this + 2) = *((_QWORD *)&v11 + 1);
        *((_DWORD *)this + 7) = DWORD1(v10);
        *((_QWORD *)this + 4) = *((_QWORD *)&v10 + 1);
        v9 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a3 + 72LL))(a3);
        *((_QWORD *)this + 5) = *((_QWORD *)&v11 + 1) + 9 * v9 / 0xAuLL;
        return 1;
      }
    }
  }
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  return 0;
}
