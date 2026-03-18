/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0252070
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0212804 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq_EtwWriteTransfer @ 0x1C0041864 (McTemplateK0ppqpttq_EtwWriteTransfer.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C022AB20 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C0251F2C (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C0251FB4 (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0290040 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this, __int64 a2, __int64 a3)
{
  int v4; // r10d
  int v5; // r11d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  DXGCONTEXT *i; // rbx
  struct DXGALLOCATION *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  DXGDEVICESYNCOBJECT *j; // rbx
  _BYTE v16[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v17; // [rsp+58h] [rbp-20h]
  int v18; // [rsp+60h] [rbp-18h]

  if ( bTracingEnabled )
  {
    a3 = *((unsigned int *)this + 109);
    v4 = *((unsigned __int8 *)this + 1865);
    v5 = *((_DWORD *)this + 108);
    v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
    v7 = *((_QWORD *)this + 2);
    v8 = *((unsigned __int8 *)this + 1866);
    v9 = *(_QWORD *)(v6 + 72);
    a2 = *(_QWORD *)(v7 + 16);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqpttq_EtwWriteTransfer(v8, &EventReportDevice, a3, v9, a2, v5, this, v4, v8, a3);
  }
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 58); i != (DXGDEVICE *)((char *)this + 464) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i, a2, a3);
  if ( *((_QWORD *)this + 95) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 64LL))();
  if ( *((_QWORD *)this + 96) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 616LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)this + 26, 0);
  DXGPUSHLOCK::AcquireExclusive(v17);
  v11 = (struct DXGALLOCATION *)*((_QWORD *)this + 6);
  v18 = 2;
  while ( v11 )
  {
    DXGDEVICE::ReportAllocationState(this, v11, 1);
    v11 = (struct DXGALLOCATION *)*((_QWORD *)v11 + 8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 8466LL;
    WdLogEvent5_WdAssertion(v14);
  }
  for ( j = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 64);
        j != (DXGDEVICE *)((char *)this + 512) && j;
        j = *(DXGDEVICESYNCOBJECT **)j )
  {
    DXGDEVICESYNCOBJECT::ReportState(j);
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 776));
    (*(void (__fastcall **)(DXGDEVICE *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 720LL))(
      this,
      (char *)this + 808);
    *((_QWORD *)this + 98) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 776, 0LL);
    KeLeaveCriticalRegion();
  }
}
