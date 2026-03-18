/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::ReserveTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    v6 = WdLogNewEntry5_WdTrace(v5);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = a2;
  }
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_QWORD *)a2 + 30) = -1LL;
  *((_QWORD *)a2 + 31) = 0LL;
  *((_QWORD *)a2 + 32) = this;
  return 0LL;
}
