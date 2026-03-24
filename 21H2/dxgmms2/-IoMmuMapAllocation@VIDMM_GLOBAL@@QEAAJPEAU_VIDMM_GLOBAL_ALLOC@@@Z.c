/*
 * XREFs of ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B0A08
 * Callers:
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00656F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0099590 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MapAllocationsToIoMmu@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00C75B0 (-MapAllocationsToIoMmu@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00898C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::IoMmuMapAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *FullMDL; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    return 0LL;
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  if ( FullMDL )
    return DpiMapIommuIdentityRange(
             *(_QWORD *)(*((_QWORD *)this + 3) + 216LL),
             FullMDL,
             (**((_DWORD **)a2 + 64) >> 4) & 1,
             1LL,
             a2);
  v7 = WdLogNewEntry5_WdWarning(v6, 0LL);
  WdLogEvent5_WdWarning(v7);
  return 3221225495LL;
}
