/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C011B948
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DBE6C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DCB40 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DCBC8 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C011B820 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C026877C (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C028FFAC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000DC14 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  DXGADAPTER *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v8; // rdx
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-18h] BYREF
  char v23; // [rsp+38h] [rbp-10h]

  v2 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( !*((_BYTE *)v2 + 209) )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v2) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v4, v3);
      *(_QWORD *)(v19 + 24) = 118LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( (*((_BYTE *)this + 92) & 1) != 0 )
    {
      v5 = *((_QWORD *)this + 4);
      v23 = 0;
      v22 = v5 + 32;
      if ( v5 == -32 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v4, v3);
        *(_QWORD *)(v20 + 24) = 760LL;
        WdLogEvent5_WdAssertion(v20);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v22 + 16) == CurrentThread )
      {
        v21 = WdLogNewEntry5_WdAssertion(CurrentThread, v3);
        *(_QWORD *)(v21 + 24) = 767LL;
        WdLogEvent5_WdAssertion(v21);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      v10 = *((_DWORD *)this + 18) >> 5;
      LOBYTE(v10) = (*((_DWORD *)this + 18) & 0x20) == 0;
      (*(void (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v8 + 616)
                                                                                                + 8LL)
                                                                                    + 672LL))(
        VidSchSyncObject,
        *(_QWORD *)(v9 + 768),
        v10,
        *((_QWORD *)this + 3));
      operator delete(*((void **)this + 3));
      *((_QWORD *)this + 3) = 0LL;
      *((_BYTE *)this + 92) &= ~1u;
      if ( v23 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v22, v11);
    }
    if ( *((_QWORD *)this + 6) )
    {
      v12 = *((_QWORD *)this + 2);
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 64LL);
      if ( v13 )
        v14 = *(_QWORD *)(v13 + 8);
      else
        v14 = 0LL;
      v15 = *(_QWORD *)(v12 + 16);
      v16 = *(_QWORD *)(v15 + 648);
      v17 = *(_QWORD *)(v15 + 640);
      MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4), v12);
      (*(void (__fastcall **)(__int64, __int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v17 + 8) + 968LL))(
        v16,
        v14,
        MonitoredFenceStorage);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
