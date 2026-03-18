/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00DC59C
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00DA914 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DBE6C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC360 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0211F38 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02524A0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::FlushDeferredDestruction(DXGDEVICE *this, PERESOURCE **a2, char a3, char a4)
{
  int v8; // eax
  int v9; // r15d
  char *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE v14[8]; // [rsp+30h] [rbp-38h] BYREF
  DXGPUSHLOCK *v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 235) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v13 + 24) = 1165LL;
        WdLogEvent5_WdAssertion(v13);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    v17 = -5000000LL;
    v8 = *((_DWORD *)this + 468);
    do
    {
      v9 = v8;
      KeWaitForSingleObject(
        *((PVOID *)this + 235),
        Executive,
        0,
        0,
        (PLARGE_INTEGER)((unsigned __int64)&v17 & -(__int64)(a4 != 0)));
      if ( !a4 )
        break;
      v8 = *((_DWORD *)this + 468);
    }
    while ( v9 != v8 );
    if ( a3 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)this + 22, 0);
      DXGPUSHLOCK::AcquireExclusive(v15);
      v16 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    }
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v10);
  }
}
