/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C0236F70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00069B4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00404B8 (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_GPUP *this, __int64 a2)
{
  DXGPROCESS *v3; // rcx

  v3 = (DXGPROCESS *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 13) )
    {
      DXGVIRTUALMACHINE::RemoveVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
      *((_QWORD *)this + 13) = 0LL;
      v3 = (DXGPROCESS *)*((_QWORD *)this + 12);
    }
    DXGPROCESS::ReleaseReference(v3, a2);
    *((_QWORD *)this + 12) = 0LL;
  }
}
