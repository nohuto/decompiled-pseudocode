/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C0169D6C
 * Callers:
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0169E74 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C02287B4 (DxgkDestroyClientAllocation.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C0255010 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 144) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 8206LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)a2 + 5);
  if ( v9 )
  {
    if ( !a3 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 80));
      v9 = *((_QWORD *)a2 + 5);
    }
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)(v9 + 24));
    if ( !a3 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(*((_QWORD *)a2 + 5) + 80LL), v10);
  }
  else if ( a3 )
  {
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 26, 0);
    DXGPUSHLOCK::AcquireExclusive(v12);
    v13 = 2;
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  }
}
