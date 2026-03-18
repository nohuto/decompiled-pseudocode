/*
 * XREFs of ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C00EA8DC
 * Callers:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00E9B90 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C002CC40 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::FreeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PMDL *v5; // rcx
  void *v6; // rdx

  v1 = *((_QWORD *)this + 32);
  if ( v1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 6))(v1, v3);
    *((_QWORD *)this + 32) = 0LL;
  }
  v5 = (PMDL *)*((_QWORD *)this + 33);
  if ( v5 )
  {
    if ( v5[1] )
    {
      MmFreePagesFromMdl(v5[1]);
      ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)this + 33) + 8LL), 0);
      v5 = (PMDL *)*((_QWORD *)this + 33);
    }
    operator delete(v5);
    *((_QWORD *)this + 33) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 61);
  if ( v6 )
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v6);
}
