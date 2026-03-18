/*
 * XREFs of ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C0227E04
 * Callers:
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C01028C8 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0226858 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C024C38C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C023778C (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnGuest(struct DXGALLOCATION *a1, __int64 a2)
{
  PMDL *v2; // rdi
  void *v4; // rcx
  char v5; // bp
  struct DXGGLOBAL *Global; // rax
  char v7; // al

  v2 = (PMDL *)((char *)a1 + 112);
  v4 = (void *)*((_QWORD *)a1 + 14);
  v5 = a2;
  if ( v4 )
  {
    if ( (*((_DWORD *)a1 + 18) & 0x80000) != 0 )
    {
      MmRotatePhysicalView(v4, (PSIZE_T)a1 + 15, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
      *((_DWORD *)a1 + 18) &= ~0x80000u;
    }
    if ( v5 )
    {
      if ( *((_DWORD *)a1 + 32) )
      {
        Global = DXGGLOBAL::GetGlobal((__int64)v4, a2);
        DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 197), *((_DWORD *)a1 + 32));
        *((_DWORD *)a1 + 32) = 0;
      }
      v7 = *((_BYTE *)a1 + 132);
      if ( (v7 & 1) != 0 )
      {
        MmFreePagesFromMdl(*v2);
      }
      else if ( (v7 & 2) == 0 )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v2, (PSIZE_T)a1 + 15, 0x8000u);
        if ( *((_DWORD *)a1 + 26) )
          _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
        _InterlockedDecrement(&g_VgpuNumAllocationsLocked);
        g_VgpuNumLockedBytes -= *((_QWORD *)a1 + 15);
      }
      *v2 = 0LL;
    }
  }
}
