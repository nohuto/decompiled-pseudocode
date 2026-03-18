/*
 * XREFs of ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0810
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00A0030 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00A0738 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00A9F98 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00D7ED8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00A0A9C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictOneAllocation(
        struct VIDMM_ALLOC **this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // si
  VIDMM_GLOBAL *v6; // rbp
  __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  struct VIDMM_ALLOC *v10; // rdx
  int v11; // [rsp+20h] [rbp-28h]

  v4 = a3;
  v6 = (VIDMM_GLOBAL *)this;
  v7 = *(_QWORD *)*a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  v8 = *((_DWORD *)a2 + 7) & 3;
  if ( v8 == 2 )
  {
    VIDMM_GLOBAL::NotifyAllocationEviction(v6, (struct VIDMM_ALLOC *)a2, v4, 0LL, 0LL);
  }
  else if ( v8 == 1 )
  {
    v9 = a2 + 7;
    this = (struct VIDMM_ALLOC **)a2[7];
    if ( this[1] != (struct VIDMM_ALLOC *)(a2 + 7) || (v10 = a2[8], *(_QWORD **)v10 != v9) )
      __fastfail(3u);
    *(_QWORD *)v10 = this;
    this[1] = v10;
    *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
    a2[8] = 0LL;
    *v9 = 0LL;
  }
  if ( !v4 || (this = (struct VIDMM_ALLOC **)*((_QWORD *)a2[1] + 1), ((_DWORD)this[14] & 2) != 0) )
  {
    if ( *(_DWORD *)(v7 + 112) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v11) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v7 + 120) + 48LL))(
        *(_QWORD *)(v7 + 120),
        v7,
        a3,
        0LL,
        v11,
        0LL);
    }
  }
  if ( bTracingEnabled )
  {
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)this, &EventEvictAllocation, a3, v7);
  }
}
