/*
 * XREFs of ?ReclaimAllocationForVPRCallback@@YAEPEAX0@Z @ 0x1C00EC44C
 * Callers:
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00EC4AC (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00D8948 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

unsigned __int8 __fastcall ReclaimAllocationForVPRCallback(void *a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  VIDMM_GLOBAL *v4; // rbx
  __int64 v5; // r9

  v2 = (_QWORD *)a2[15];
  v4 = (VIDMM_GLOBAL *)v2[1];
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD, _QWORD))(*v2 + 24LL))(v2, a2, a2[17], a2[2]);
  a2[17] = 0LL;
  *((_DWORD *)a2 + 28) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(v4, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0LL, v5);
  return 1;
}
