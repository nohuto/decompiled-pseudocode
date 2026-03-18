/*
 * XREFs of ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00E20F8
 * Callers:
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00E2410 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02439A0 (-VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000702C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0038D84 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00E1DB4 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C00E2274 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessThaw(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  DXGDEVICE *Current; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  struct _EPROCESS *v13; // rbx
  unsigned __int64 v14; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  char v23; // [rsp+50h] [rbp-10h]

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2096);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2096LL);
  *((_BYTE *)this + 476) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  v4 = (_QWORD *)((char *)this + 280);
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 35);
  v19[0] = (char *)this + 280;
  while ( 1 )
  {
    v19[1] = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v19);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessThaw(Current);
    v5 = (_QWORD *)*v5;
  }
  v7 = 0LL;
  v20[0] = (char *)this + 280;
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v20[1] = v4;
    v8 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v20);
    if ( !v8 )
      break;
    v11 = *(_QWORD *)(v8 + 16);
    v12 = *(_QWORD *)(v11 + 16);
    if ( v12 != v7 )
    {
      if ( !*(_BYTE *)(v12 + 209) && *(_QWORD *)(v12 + 2704) )
      {
        if ( *(_QWORD *)(v12 + 2808) )
          DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v11 + 16));
      }
      v13 = (struct _EPROCESS *)*((_QWORD *)this + 7);
      v7 = v12;
      v14 = *(_QWORD *)(v12 + 224);
      Global = DXGGLOBAL::GetGlobal(v10, v9);
      DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(Global, v14, v13, 0);
    }
  }
  *((_QWORD *)this + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v16);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v21);
}
