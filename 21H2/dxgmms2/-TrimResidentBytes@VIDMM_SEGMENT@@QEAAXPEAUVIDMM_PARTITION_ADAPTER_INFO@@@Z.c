/*
 * XREFs of ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00ED69C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00865F0 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00D8948 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

void __fastcall VIDMM_SEGMENT::TrimResidentBytes(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION_ADAPTER_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_SEGMENT *v6; // rbx
  char *v7; // r14
  __int64 v8; // r9
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  if ( (*((_DWORD *)this + 20) & 0x1001) != 0 && !VIDMM_GLOBAL::VerifyGlobalResidentLimit(this, a2, a3, a4) )
  {
    v6 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
    while ( v6 != (VIDMM_SEGMENT *)((char *)this + 176) )
    {
      v7 = (char *)v6 - 400;
      v6 = *(VIDMM_SEGMENT **)v6;
      if ( *((struct VIDMM_PARTITION_ADAPTER_INFO **)v7 + 63) == a2 )
      {
        (*(void (__fastcall **)(VIDMM_SEGMENT *, char *, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
          this,
          v7,
          *((_QWORD *)v7 + 17),
          *((_QWORD *)v7 + 2));
        VIDMM_GLOBAL::NotifyAllocationReclaimed(*((VIDMM_GLOBAL **)this + 1), (struct _VIDMM_GLOBAL_ALLOC *)v7, 0LL, v8);
        if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v9, a2, v10, v11) )
          break;
      }
    }
  }
}
