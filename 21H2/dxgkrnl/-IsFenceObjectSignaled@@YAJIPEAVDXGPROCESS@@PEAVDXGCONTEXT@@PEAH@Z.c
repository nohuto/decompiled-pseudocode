/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C0340014
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C0321660 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1C0378EEC (-VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJEC.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // edx
  _DWORD *v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  int IsSyncObjectSignaled; // ebx
  int v16; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v18; // rdx
  _BYTE v19[16]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int8 v20; // [rsp+90h] [rbp+8h] BYREF

  v5 = a1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 966LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pContext->GetRenderCore()->IsCoreResourceSharedOwner()",
      966LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
  v8 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 >= *((_DWORD *)a2 + 74) )
    goto LABEL_9;
  v9 = *((_QWORD *)a2 + 35);
  v10 = *(_DWORD *)(v9 + 16 * v8 + 8);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60)
    || (v10 & 0x2000) != 0
    || (v10 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  if ( (v10 & 0x1F) != 8 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v11 = 0LL;
    goto LABEL_10;
  }
  v11 = *(_DWORD **)(v9 + 16LL * (unsigned int)v8);
LABEL_10:
  ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v11 )
  {
    WdLogSingleEntry2(2LL, a2, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
      (__int64)a2,
      v5,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v11[50] != 3 )
  {
    WdLogSingleEntry1(2LL, 983LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Call only valid for fence objects",
      983LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v11 + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v13 = *((_QWORD *)a3 + 2);
  if ( !*((_BYTE *)a3 + 441) )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v11, *(struct ADAPTER_RENDER **)(v13 + 16));
    v16 = (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v18 + 624) + 8LL)
                                                                          + 872LL))(VidSchSyncObject);
    goto LABEL_20;
  }
  v14 = *(_QWORD *)(v13 + 16);
  v20 = 0;
  IsSyncObjectSignaled = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v14 + 16) + 4344LL),
                           a2,
                           (struct DXGSYNCOBJECT *)v11,
                           v5,
                           &v20);
  if ( IsSyncObjectSignaled >= 0 )
  {
    v16 = v20 == 1;
LABEL_20:
    *a4 = v16;
    IsSyncObjectSignaled = 0;
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  return (unsigned int)IsSyncObjectSignaled;
}
