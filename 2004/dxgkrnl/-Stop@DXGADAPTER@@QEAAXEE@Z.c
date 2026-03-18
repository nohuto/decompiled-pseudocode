/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020FA84
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 *     DpiPowerArbiterThread @ 0x1C0196790 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CA270 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02CBAD4 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U4@U1@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@6355555555@Z @ 0x1C0035648 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C003BCE4 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0045E64 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAX_N@Z @ 0x1C004E868 (-RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAX_N@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F71B0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0139CC8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C013A000 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C013A060 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C020B768 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020C1A4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C020C708 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0215178 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0216FBC (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0269F00 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C02C3A1C (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, __int64 a2, unsigned __int8 a3)
{
  int v3; // ebx
  char v4; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _LUID *v14; // rdx
  __int64 v15; // rcx
  KSPIN_LOCK *Global; // rax
  __int64 v17; // rcx
  DXGGLOBAL *v18; // rax
  ADAPTER_DISPLAY *v19; // rcx
  ADAPTER_RENDER *v20; // rcx
  BOOLEAN v21; // bl
  BOOLEAN v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGGLOBAL *v25; // rax
  struct DXGGLOBAL *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DXGGLOBAL *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v34; // [rsp+B4h] [rbp-7Ch] BYREF
  int v35; // [rsp+B8h] [rbp-78h] BYREF
  unsigned int v36; // [rsp+BCh] [rbp-74h] BYREF
  int v37; // [rsp+C0h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+C4h] [rbp-6Ch] BYREF
  int v39; // [rsp+C8h] [rbp-68h] BYREF
  int v40; // [rsp+CCh] [rbp-64h] BYREF
  int v41; // [rsp+D0h] [rbp-60h] BYREF
  int v42; // [rsp+D4h] [rbp-5Ch] BYREF
  int v43; // [rsp+D8h] [rbp-58h] BYREF
  int v44; // [rsp+DCh] [rbp-54h] BYREF
  struct _LUID v45; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-48h] BYREF
  void *v47; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-38h] BYREF
  unsigned __int16 *v49; // [rsp+100h] [rbp-30h] BYREF
  unsigned __int64 v50[7]; // [rsp+108h] [rbp-28h] BYREF
  __int64 v51; // [rsp+150h] [rbp+20h] BYREF
  __int16 v52; // [rsp+160h] [rbp+30h] BYREF
  unsigned int v53; // [rsp+168h] [rbp+38h] BYREF

  v3 = (unsigned __int8)a2;
  v4 = 0;
  v7 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  DXGADAPTER::GetAdapterType(this, (int *)&v53);
  v51 = *(_QWORD *)((char *)this + 316);
  v45 = *(struct _LUID *)((char *)this + 316);
  if ( (unsigned int)dword_1C00B0A90 > 5 && tlgKeywordOn((__int64)&dword_1C00B0A90, 0x400000000800LL) )
  {
    v34 = v53;
    v33 = v3;
    v36 = (v53 >> 1) & 1;
    v35 = v9;
    v38 = (v53 >> 2) & 1;
    v39 = *((unsigned __int8 *)this + 2540);
    v40 = *((unsigned __int8 *)this + 2535);
    v52 = *((_WORD *)this + 1298);
    v46 = *((_QWORD *)this + 200);
    v47 = (void *)*((_QWORD *)this + 199);
    v48 = v51;
    v41 = *((_DWORD *)this + 84);
    v42 = *((_DWORD *)this + 83);
    v43 = *((_DWORD *)this + 82);
    v44 = *((_DWORD *)this + 81);
    v49 = (unsigned __int16 *)*((_QWORD *)this + 190);
    v37 = v53 & 1;
    LOWORD(v51) = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v53 & 1,
      byte_1C007EC9B,
      v8,
      v9,
      (__int64)&v51,
      &v49,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v48,
      &v47,
      (__int64)&v46,
      (__int64)&v52,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33);
  }
  KeSetEvent((PRKEVENT)((char *)this + 2672), 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 8807LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *((_DWORD *)this + 50) = 5;
  if ( !*((_BYTE *)this + 209) )
  {
    v13 = *((_QWORD *)this + 338);
    if ( v13 )
    {
      if ( (_BYTE)v3 )
      {
        *(_BYTE *)(v13 + 889) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 338), 1, 1);
      }
    }
  }
  v50[0] = 0LL;
  DXGADAPTER::AcquireLocksForStop(this, v50);
  if ( !*((_BYTE *)this + 209) )
  {
    v15 = *((_QWORD *)this + 338);
    if ( v15 )
    {
      ADAPTER_RENDER::FlushScheduler(v15, 5, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 338), 1u, 0);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 338), 0, 1);
    }
    if ( *((_BYTE *)this + 206) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v15, (__int64)v14);
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
    v17 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
    if ( *(_BYTE *)(v17 + 5736) )
    {
      v18 = DXGGLOBAL::GetGlobal(v17, (__int64)v14);
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(v18, this);
    }
  }
  v19 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 337);
  if ( v19 )
    ADAPTER_DISPLAY::Stop(v19, a3);
  v20 = (ADAPTER_RENDER *)*((_QWORD *)this + 338);
  if ( v20 )
  {
    v4 = 1;
    ADAPTER_RENDER::Stop(v20, v3, a3);
  }
  if ( *((_QWORD *)this + 410) )
  {
    *((_BYTE *)this + 3238) = 1;
    v21 = KeCancelTimer((PKTIMER)((char *)this + 3352));
    v22 = KeCancelTimer((PKTIMER)((char *)this + 4072));
    if ( !v21 || !v22 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 3352)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 410));
    *((_QWORD *)this + 410) = 0LL;
  }
  if ( a3 )
  {
    *((_DWORD *)this + 50) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 3241)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 3241) = 0;
    }
    DXGADAPTER::Destroy(this, v14);
    *((_DWORD *)this + 50) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 189) = 0LL;
  *((_QWORD *)this + 199) = 0LL;
  DXGADAPTER::ReleaseCoreResource(this, 0LL);
  DXGADAPTER::ReleaseReference(this);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  if ( v4 )
  {
    v25 = DXGGLOBAL::GetGlobal(v24, v23);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v25,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkCheckPairedRenderAdapterForStopCallBack,
      (__int64)this,
      1);
  }
  v26 = DXGGLOBAL::GetGlobal(v24, v23);
  REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)v26 + 304616), &v45);
  v29 = DXGGLOBAL::GetGlobal(v28, v27);
  REMOTEVSYNCMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)v29 + 304672), &v45);
  v32 = WdLogNewEntry5_WdEvent(v31, v30);
  *(_QWORD *)(v32 + 24) = this;
  WdLogEvent5_WdEvent(v32);
}
