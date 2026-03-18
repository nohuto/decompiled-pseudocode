/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C03605A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005C4B8 (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_GPUP *this)
{
  DXGPROCESS *v2; // rcx

  v2 = (DXGPROCESS *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( *((_QWORD *)this + 13) )
    {
      DXGVIRTUALMACHINE::RemoveVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
      *((_QWORD *)this + 13) = 0LL;
      v2 = (DXGPROCESS *)*((_QWORD *)this + 12);
    }
    DXGPROCESS::ReleaseReference(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
}
