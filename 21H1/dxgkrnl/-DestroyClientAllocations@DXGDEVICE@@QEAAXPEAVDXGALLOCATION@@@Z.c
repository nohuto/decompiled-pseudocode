/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0223614
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0223708 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C0225724 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C02501A8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C003D8F0 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F13CC (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C02439C8 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  struct DXGALLOCATION *v2; // rdi
  struct DXGALLOCATION *v4; // rsi
  struct DXGALLOCATION *v5; // r14
  struct DXGALLOCATION *v6; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    v6 = a2;
    v4 = a2;
    do
    {
      v5 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 8);
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(this, v2, 0LL);
      if ( (*((_DWORD *)v4 + 18) & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 288LL))(*((_QWORD *)v4 + 10));
        *((_DWORD *)v4 + 18) &= ~1u;
      }
      if ( (*((_BYTE *)this + 1869) & 1) != 0 )
      {
        if ( *((_DWORD *)v2 + 24) )
        {
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4208LL),
            *(_DWORD *)(*((_QWORD *)this + 5) + 424LL),
            *((_DWORD *)this + 110),
            0,
            1u,
            &v6,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          *((_DWORD *)v2 + 24) = 0;
        }
      }
      DXGALLOCATION::`scalar deleting destructor'(v4);
      v6 = v5;
      v2 = v5;
      v4 = v5;
    }
    while ( v5 );
  }
}
