/*
 * XREFs of ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C0171EF0
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0171E68 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0171F88 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGALLOCATION *i; // rdi
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, this + 30, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v2 = this[7];
  v9 = 2;
  while ( v2 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this[2] + 2)) )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4, v3);
      *(_QWORD *)(v6 + 24) = 498LL;
      WdLogEvent5_WdAssertion(v6);
    }
    for ( i = (struct DXGALLOCATION *)*((_QWORD *)v2 + 3); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
      DXGDEVICE::DisablePinnedAllocation((DXGDEVICE *)this, i);
    v2 = (struct _KTHREAD *)*((_QWORD *)v2 + 5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
