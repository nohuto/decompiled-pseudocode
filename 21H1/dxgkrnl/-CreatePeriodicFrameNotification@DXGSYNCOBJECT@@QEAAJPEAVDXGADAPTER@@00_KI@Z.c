/*
 * XREFs of ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1C028B7A0
 * Callers:
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C028B8EC (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1C02F8800 (-CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 */

__int64 __fastcall DXGSYNCOBJECT::CreatePeriodicFrameNotification(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER **a2,
        struct ADAPTER_RENDER **a3,
        struct DXGADAPTER *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  unsigned __int64 *v14; // r9
  struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *v15; // r10
  DXGDODPRESENT *v16; // r11
  unsigned int PeriodicFrameNotification; // eax
  __int64 v18; // rdx
  struct _VIDSCH_SYNC_OBJECT *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r11
  unsigned int v22; // esi

  DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
  if ( (*((_DWORD *)a4 + 87) & 0x100) != 0 )
  {
    if ( !a2 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v12 + 24) = 1776LL;
      WdLogEvent5_WdAssertion(v12);
    }
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(this, a2[335]);
    PeriodicFrameNotification = DXGDODPRESENT::CreatePeriodicFrameNotification(
                                  v16,
                                  (struct DXGADAPTER *)a2,
                                  VidSchSyncObject,
                                  (unsigned __int64)v14,
                                  a6,
                                  v15,
                                  v14);
    *((_DWORD *)this + 46) = a6;
    *((_QWORD *)this + 21) = a4;
  }
  else
  {
    v19 = DXGSYNCOBJECT::GetVidSchSyncObject(this, a3[335]);
    PeriodicFrameNotification = (*(__int64 (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64, _QWORD, char *, char *))(*(_QWORD *)(v20 + 8) + 936LL))(
                                  v21,
                                  v19,
                                  a5,
                                  a6,
                                  (char *)this + 192,
                                  (char *)this + 160);
  }
  v22 = PeriodicFrameNotification;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4, v18);
  return v22;
}
