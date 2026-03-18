/*
 * XREFs of ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C007C35C
 * Callers:
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C007C090 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C007D8AC (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0081498 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00A32BC (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00E6A40 (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00E7558 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C00E7680 (-UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z.c)
 *     ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C00F2AC0 (-UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z @ 0x1C00F2BF0 (-UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F09C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C007C5C4 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmUnmapViewAsync(struct _EPROCESS *a1, void *a2, void *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, 0x48uLL);
  if ( (byte_1C006E941 & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v6, &BeginVidMmUnmapViewAsync, v7, a1, a2, a3);
  ObfReferenceObject(a2);
  v11[8] = 0LL;
  LODWORD(v11[4]) = 2;
  v11[5] = a1;
  v11[6] = a2;
  v11[7] = a3;
  if ( a1 )
    v11[8] = PsGetProcessDxgProcess(a1);
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v11) )
  {
    if ( a1 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(struct _EPROCESS *, void *))VirtualMemoryInterface + 4))(a1, a3);
    }
    else
    {
      MmUnmapViewInSystemSpace(a3);
    }
    ObfDereferenceObject(a2);
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v9, &EndVidMmUnmapViewAsync, v10, a1, a2, a3);
  }
}
