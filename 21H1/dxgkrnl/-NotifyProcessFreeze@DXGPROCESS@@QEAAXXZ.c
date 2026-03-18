/*
 * XREFs of ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00DA784
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00DA0E0 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F6F0 (-VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000EE40 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0037EA4 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00D9C0C (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00D9D00 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00DA914 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessFreeze(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  DXGDEVICE *Current; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  ADAPTER_RENDER *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  struct _EPROCESS *v15; // rbx
  unsigned __int64 v16; // rdi
  DXGGLOBAL *Global; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h]
  char v22; // [rsp+50h] [rbp-10h]

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2087;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2087);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2087LL);
  *((_BYTE *)this + 476) = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  v4 = (_QWORD *)((char *)this + 280);
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 35);
  v18[0] = (char *)this + 280;
  while ( 1 )
  {
    v18[1] = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessFreeze(Current);
    v5 = (_QWORD *)*v5;
  }
  v7 = 0LL;
  v19[0] = (char *)this + 280;
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v19[1] = v4;
    v8 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v19);
    if ( !v8 )
      break;
    v14 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
    if ( v14 != v7 )
    {
      if ( !*(_BYTE *)(v14 + 209) )
      {
        v10 = *(ADAPTER_RENDER **)(v14 + 2680);
        if ( v10 )
        {
          ADAPTER_RENDER::NotifyProcessFreeze(v10, this);
          if ( *(_QWORD *)(v14 + 2784) )
            DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)v14);
        }
      }
      v15 = (struct _EPROCESS *)*((_QWORD *)this + 7);
      v7 = v14;
      v16 = *(_QWORD *)(v14 + 224);
      Global = DXGGLOBAL::GetGlobal((__int64)v10, v9);
      DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(Global, v16, v15, 1);
    }
  }
  *((_QWORD *)this + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20, v11);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v20);
  }
}
