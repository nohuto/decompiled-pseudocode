/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiPowerArbiterThread @ 0x1C0217840 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C0389B60 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0029BC4 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U4@U1@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@6355555555@Z @ 0x1C00429C0 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0054060 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z @ 0x1C00594D4 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C01BAEC4 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C01BAF24 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C02B9A0C (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C02BABF0 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C02C2C38 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C49B8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C030AD3C (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C033D5C4 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r14d
  char v4; // r12
  struct _LUID v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // edi
  struct _LUID *v12; // rdx
  __int64 v13; // rcx
  KSPIN_LOCK *Global; // rax
  DXGGLOBAL *v15; // rax
  ADAPTER_DISPLAY *v16; // rcx
  ADAPTER_RENDER *v17; // rcx
  BOOLEAN v18; // di
  BOOLEAN v19; // al
  struct DXGGLOBAL *v20; // rax
  struct DXGGLOBAL *v21; // rax
  struct DXGGLOBAL *v22; // rax
  int v23; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+B4h] [rbp-7Ch] BYREF
  int v25; // [rsp+B8h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+BCh] [rbp-74h] BYREF
  int v27; // [rsp+C0h] [rbp-70h] BYREF
  unsigned int v28; // [rsp+C4h] [rbp-6Ch] BYREF
  int v29; // [rsp+C8h] [rbp-68h] BYREF
  int v30; // [rsp+CCh] [rbp-64h] BYREF
  int v31; // [rsp+D0h] [rbp-60h] BYREF
  int v32; // [rsp+D4h] [rbp-5Ch] BYREF
  int v33; // [rsp+D8h] [rbp-58h] BYREF
  int v34; // [rsp+DCh] [rbp-54h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-50h] BYREF
  void *v36; // [rsp+E8h] [rbp-48h] BYREF
  struct _LUID v37; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int16 *v38; // [rsp+F8h] [rbp-38h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+100h] [rbp-30h] BYREF
  unsigned __int64 v40; // [rsp+108h] [rbp-28h] BYREF
  struct _LUID v41; // [rsp+110h] [rbp-20h] BYREF
  struct _LUID v42; // [rsp+160h] [rbp+30h] BYREF
  __int16 v43; // [rsp+170h] [rbp+40h] BYREF
  unsigned int v44; // [rsp+178h] [rbp+48h] BYREF

  v3 = a2;
  v4 = 0;
  WdLogSingleEntry1(4LL, this);
  DXGADAPTER::GetAdapterType(this, (int *)&v44);
  v42 = *(struct _LUID *)((char *)this + 404);
  v7 = v42;
  v41 = v42;
  if ( (unsigned int)dword_1C012F918 > 5 && tlgKeywordOn((__int64)&dword_1C012F918, 0x400000000800LL) )
  {
    v24 = v44;
    v23 = v3;
    v26 = (v44 >> 1) & 1;
    v25 = v9;
    v28 = (v44 >> 2) & 1;
    v29 = *((unsigned __int8 *)this + 2636);
    v30 = *((unsigned __int8 *)this + 2631);
    v43 = *((_WORD *)this + 1346);
    v35 = *((_QWORD *)this + 212);
    v36 = (void *)*((_QWORD *)this + 211);
    v37 = v42;
    v31 = *((_DWORD *)this + 106);
    v32 = *((_DWORD *)this + 105);
    v33 = *((_DWORD *)this + 104);
    v34 = *((_DWORD *)this + 103);
    v38 = (unsigned __int16 *)*((_QWORD *)this + 202);
    v27 = v44 & 1;
    LOWORD(v42.LowPart) = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v44 & 1,
      byte_1C009755E,
      v8,
      v9,
      (__int64)&v42,
      &v38,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v37,
      &v36,
      (__int64)&v35,
      (__int64)&v43,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
  }
  KeSetEvent((PRKEVENT)((char *)this + 2768), 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry1(1LL, 9171LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsCoreResourceExclusiveOwner()", 9171LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)this + 50) = 5;
  if ( !*((_BYTE *)this + 209) )
  {
    v10 = *((_QWORD *)this + 350);
    if ( v10 )
    {
      if ( (_BYTE)v3 )
      {
        *(_BYTE *)(v10 + 913) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 350), 1, 1);
      }
    }
  }
  v11 = 0;
  while ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&qword_1C0130EE0, 0LL) )
  {
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( (unsigned int)++v11 >= 0xA )
    {
      WdLogSingleEntry5(0LL, 275LL, 48LL, qword_1C0130400, 0LL, 0LL);
      break;
    }
  }
  v40 = 0LL;
  DXGADAPTER::AcquireLocksForStop(this, &v40);
  if ( !*((_BYTE *)this + 209) )
  {
    v13 = *((_QWORD *)this + 350);
    if ( v13 )
    {
      ADAPTER_RENDER::FlushScheduler(v13, 5u, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 350), 1u, 0);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 350), 0, 1);
    }
    if ( *((_BYTE *)this + 206) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL_GetGlobal();
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 5664LL) )
    {
      v15 = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(v15, this);
    }
  }
  v16 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 349);
  if ( v16 )
    ADAPTER_DISPLAY::Stop(v16, a3);
  v17 = (ADAPTER_RENDER *)*((_QWORD *)this + 350);
  if ( v17 )
  {
    v4 = 1;
    ADAPTER_RENDER::Stop(v17, v3, a3);
  }
  if ( *((_QWORD *)this + 422) )
  {
    *((_BYTE *)this + 3334) = 1;
    v18 = KeCancelTimer((PKTIMER)((char *)this + 3448));
    v19 = KeCancelTimer((PKTIMER)((char *)this + 4176));
    if ( !v18 || !v19 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 3448)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 422));
    *((_QWORD *)this + 422) = 0LL;
  }
  if ( a3 )
  {
    *((_DWORD *)this + 50) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 3337)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 3337) = 0;
    }
    DXGADAPTER::Destroy(this, v12);
    *((_DWORD *)this + 50) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 201) = 0LL;
  *((_QWORD *)this + 211) = 0LL;
  DXGADAPTER::ReleaseCoreResource(this, 0LL);
  DXGADAPTER::ReleaseReference(this);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  if ( v4 && !*((_BYTE *)this + 2705) )
  {
    v20 = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v20,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkCheckPairedRenderAdapterForStopCallBack,
      (__int64)this,
      1LL);
  }
  v21 = DXGGLOBAL_GetGlobal();
  REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)v21 + 304864), &v41);
  v22 = DXGGLOBAL_GetGlobal();
  HOSTVMMONITORMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)v22 + 304920), v7);
  WdLogSingleEntry1(4LL, this);
  ExReleasePushLockSharedEx(&qword_1C0130EE0, 0LL);
}
