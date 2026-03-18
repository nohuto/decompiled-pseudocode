/*
 * XREFs of ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C022273E
 * Callers:
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C0195680 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D5AC0 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C019D670 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGALLOCATION *a2,
        PERESOURCE **a3,
        __int64 a4)
{
  struct DXGPROCESS *Current; // rbx
  char v7; // bl
  char *v8; // rdx

  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, (__int64)a3, a4);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), *((_DWORD *)a2 + 4));
  DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)a2);
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  v7 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]) )
  {
    v7 = 1;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 11);
  if ( v7 )
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3, v8);
}
