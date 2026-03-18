/*
 * XREFs of ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0227948
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00E5294 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C0229964 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C0254518 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C02FCF4C (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C00098AC (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0127B2C (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0227854 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0247C98 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyClientResource(DXGDEVICE *this, PVOID P)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // r9d

  ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(this, (struct _EX_RUNDOWN_REF *)P, 0LL);
  DXGDEVICE::DestroyClientAllocations(this, *((struct DXGALLOCATION **)P + 3));
  v4 = *((_QWORD *)P + 5);
  if ( v4 )
    *(_QWORD *)(v4 + 32) = *((_QWORD *)P + 4);
  v5 = *((_QWORD *)P + 4);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 40) = *((_QWORD *)P + 5);
  }
  else if ( *((PVOID *)this + 7) == P )
  {
    *((_QWORD *)this + 7) = *((_QWORD *)P + 5);
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    v6 = *((_DWORD *)P + 5);
    if ( v6 )
    {
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
        *(_DWORD *)(*((_QWORD *)this + 5) + 424LL),
        *((_DWORD *)this + 110),
        v6,
        0,
        0LL,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
      *((_DWORD *)P + 5) = 0;
    }
  }
  DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)P);
}
