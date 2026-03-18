/*
 * XREFs of ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00D7968
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00852A0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00AA760 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C00027A0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::IoMmuUnmapAllocation(VIDMM_GLOBAL *this, void **a2, struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _MDL *FullMDL; // rdi
  int v6; // ebx
  unsigned __int64 LogicalAddress; // rax

  if ( ((_DWORD)a2[9] & 0x400) == 0 )
  {
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)a2, a3);
    v6 = *(_DWORD *)a2[66];
    LogicalAddress = SysMmGetLogicalAddress(a2[65]);
    SysMmUnmapIommuRange(
      *(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL),
      LogicalAddress,
      FullMDL,
      (v6 & 0x10) != 0);
  }
}
