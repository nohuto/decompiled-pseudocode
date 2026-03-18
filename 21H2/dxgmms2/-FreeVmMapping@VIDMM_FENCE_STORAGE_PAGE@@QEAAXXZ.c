/*
 * XREFs of ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C00A7084
 * Callers:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C00A6FF8 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00E14B0 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00E03D4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping(VIDMM_FENCE_STORAGE_PAGE *this)
{
  void *v1; // rdx
  VIDMM_PROCESS *v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _BYTE v8[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]

  v1 = (void *)*((_QWORD *)this + 19);
  if ( v1 )
  {
    v3 = (VIDMM_PROCESS *)*((_QWORD *)this + 4);
    if ( !v3 )
    {
      WdLogSingleEntry1(1LL, 1394LL);
      DxgkLogInternalTriageEvent(v4, 262146LL);
      v1 = (void *)*((_QWORD *)this + 19);
      v3 = (VIDMM_PROCESS *)*((_QWORD *)this + 4);
    }
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(v3, v1, *((_QWORD *)this + 18), 0x1000uLL, 0);
    if ( *((_BYTE *)this + 160) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)(*((_QWORD *)this + 4) + 64LL), 0);
      DXGPUSHLOCK::AcquireExclusive(v9);
      v5 = (_QWORD *)((char *)this + 16);
      v10 = 2;
      v6 = *((_QWORD *)this + 2);
      if ( *(VIDMM_FENCE_STORAGE_PAGE **)(v6 + 8) != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 16)
        || (v7 = (_QWORD *)*((_QWORD *)this + 3), (_QWORD *)*v7 != v5) )
      {
        __fastfail(3u);
      }
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
      *v5 = 0LL;
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
}
