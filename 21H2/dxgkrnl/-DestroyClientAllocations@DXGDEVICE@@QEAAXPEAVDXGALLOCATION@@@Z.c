/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D5AC0
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D5BBC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D7FFC (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C02E4A04 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C004A8E4 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C022273E (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0376620 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(DXGDEVICE *this, struct DXGALLOCATION *a2, __int64 a3, __int64 a4)
{
  struct DXGALLOCATION *v4; // rdi
  struct DXGALLOCATION *v6; // rsi
  struct DXGALLOCATION *v7; // r14
  struct DXGALLOCATION *v8; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = a2;
    v8 = a2;
    v6 = a2;
    do
    {
      v7 = (struct DXGALLOCATION *)*((_QWORD *)v4 + 8);
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(this, v4, 0LL, a4);
      if ( (*((_DWORD *)v6 + 18) & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 296LL))(*((_QWORD *)v6 + 10));
        *((_DWORD *)v6 + 18) &= ~1u;
      }
      if ( (*((_BYTE *)this + 1869) & 1) != 0 && (*((_BYTE *)v4 + 128) & 4) != 0 )
      {
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4344LL),
          *(_DWORD *)(*((_QWORD *)this + 5) + 504LL),
          *((_DWORD *)this + 110),
          0,
          1u,
          &v8,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        *((_BYTE *)v4 + 128) &= ~4u;
      }
      DXGALLOCATION::`scalar deleting destructor'(v6);
      v8 = v7;
      v4 = v7;
      v6 = v7;
    }
    while ( v7 );
  }
}
