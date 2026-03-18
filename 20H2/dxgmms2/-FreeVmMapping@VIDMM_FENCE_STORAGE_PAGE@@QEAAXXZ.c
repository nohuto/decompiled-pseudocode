/*
 * XREFs of ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C008806C
 * Callers:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C0087FE0 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00BC8B4 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00BB7E4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping(VIDMM_FENCE_STORAGE_PAGE *this, __int64 a2, __int64 a3)
{
  void *v3; // rdx
  VIDMM_PROCESS *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  v3 = (void *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    v5 = (VIDMM_PROCESS *)*((_QWORD *)this + 4);
    if ( !v5 )
    {
      v6 = WdLogNewEntry5_WdAssertion(0LL, v3, a3);
      *(_QWORD *)(v6 + 24) = 1362LL;
      WdLogEvent5_WdAssertion(v6);
      v3 = (void *)*((_QWORD *)this + 18);
      v5 = (VIDMM_PROCESS *)*((_QWORD *)this + 4);
    }
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(v5, v3, *((_QWORD *)this + 17), 0x1000uLL, 0);
    if ( *((_BYTE *)this + 152) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)this + 4) + 64LL), 0LL);
      DXGPUSHLOCK::AcquireExclusive(v11);
      v7 = (_QWORD *)((char *)this + 16);
      v12 = 2;
      v8 = *((_QWORD *)this + 2);
      if ( *(VIDMM_FENCE_STORAGE_PAGE **)(v8 + 8) != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 16)
        || (v9 = (_QWORD *)*((_QWORD *)this + 3), (_QWORD *)*v9 != v7) )
      {
        __fastfail(3u);
      }
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
      *v7 = 0LL;
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
}
