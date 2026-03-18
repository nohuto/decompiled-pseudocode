/*
 * XREFs of ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E44B8
 * Callers:
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0024CA0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00E29A0 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E3DD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C02669B0 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 * Callees:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C00022D8 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E45B8 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyPagingQueue(PERESOURCE *this, struct DXGPAGINGQUEUE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct COREDEVICEACCESS *v7; // rdx
  __int64 v8; // rcx
  struct DXGPAGINGQUEUE *v9; // rcx
  struct DXGPAGINGQUEUE **v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v11 + 24) = 8027LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[17]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v12 + 24) = 8028LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this[2]->OwnerTable) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v13 + 24) = 8029LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v14 + 24) = 8032LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGPAGINGQUEUE::DestroyCoreState(a2, v7);
  v9 = *(struct DXGPAGINGQUEUE **)a2;
  if ( *(struct DXGPAGINGQUEUE **)(*(_QWORD *)a2 + 8LL) != a2
    || (v10 = (struct DXGPAGINGQUEUE **)*((_QWORD *)a2 + 1), *v10 != a2) )
  {
    __fastfail(3u);
  }
  *v10 = v9;
  *((_QWORD *)v9 + 1) = v10;
  DXGPAGINGQUEUE::`scalar deleting destructor'(a2);
}
