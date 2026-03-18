/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B098
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0148508 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014A790 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0211B58 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0227A08 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00EEAA0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C014B17C (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        PERESOURCE **this,
        __int64 a2,
        int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  struct DXGALLOCATION *v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rsi
  PERESOURCE *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+40h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v22; // [rsp+48h] [rbp+20h] BYREF

  v22 = a4;
  v21 = a3;
  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 464) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v15 + 24) = 7052LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2][2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v16 + 24) = 7053LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[231]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v17 + 24) = 7054LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v18 + 24) = 7055LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v10 = *((_DWORD *)this + v5 + 302);
  if ( (v10 & 0x100) != 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v19 + 24) = 7056LL;
    WdLogEvent5_WdAssertion(v19);
    v10 = *((_DWORD *)this + v5 + 302);
  }
  if ( (v10 & 0x200) != 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v20 + 24) = 7057LL;
    WdLogEvent5_WdAssertion(v20);
  }
  LODWORD(v22) = 0;
  LOBYTE(v21) = 0;
  do
  {
    v11 = DXGDEVICE::PopDirectFlipAllocationFromList(
            (DXGDEVICE *)this,
            v5,
            (unsigned int *)&v22,
            (unsigned __int8 *)&v21);
    v12 = (struct _EX_RUNDOWN_REF *)v11;
    if ( v11 )
    {
      ((void (__fastcall *)(PERESOURCE, _QWORD))this[2][80]->SystemResourcesList.Blink[15].Flink)(
        this[2][81],
        *((_QWORD *)v11 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12[5].Count + 72));
      ExReleaseRundownProtection(v12 + 11);
    }
  }
  while ( !(_BYTE)v21 );
  v13 = this[231];
  if ( v13 == (PERESOURCE *)this[2][2] )
    ADAPTER_DISPLAY::DisableOverlayPlanes((ADAPTER_DISPLAY *)v13[337], (unsigned int)v5);
  return 0LL;
}
