/*
 * XREFs of ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00C3AD8
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0077A58 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00C3118 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00C3BA0 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0012C04 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0060E30 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unmap(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // r9
  unsigned __int64 SmallAllocationSize; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  void *v6; // rbx
  void *v7; // rax
  __int64 CurrentProcess; // rax

  v2 = *((_QWORD *)this + 10);
  if ( *((_BYTE *)this + 152) )
  {
    SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                            this,
                            (unsigned int)(**(_DWORD **)(v2 + 32) - 5) <= 1);
    if ( *(_QWORD *)(v4 + 40) - *(_QWORD *)(v4 + 32) <= SmallAllocationSize )
    {
      CurrentProcess = PsGetCurrentProcess(v4);
      MmUnmapViewOfSection(CurrentProcess, *((_QWORD *)this + 20));
    }
    else
    {
      v6 = *(void **)(v5 + 56);
      v7 = (void *)PsGetCurrentProcess(v4);
      VidMmUnmapViewAsync(v7, v6, *((PVOID *)this + 20));
    }
    *((_BYTE *)this + 152) = 0;
  }
  else
  {
    VidMmUnmapViewAsync(0LL, *(PVOID *)(v2 + 56), *((PVOID *)this + 20));
    *((_BYTE *)this + 153) = 0;
  }
  *((_QWORD *)this + 20) = 0LL;
}
