/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0171E68
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0171DEC (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C0171EF0 (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0171F88 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGALLOCATION *v4; // rbx
  __int64 v5; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 1621LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGDEVICE::UnpinDeviceResources(this);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, (struct _KTHREAD **)this + 26, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v4 = (struct DXGALLOCATION *)*((_QWORD *)this + 6);
  v8 = 2;
  while ( v4 )
  {
    DXGDEVICE::DisablePinnedAllocation(this, v4);
    v4 = (struct DXGALLOCATION *)*((_QWORD *)v4 + 8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
