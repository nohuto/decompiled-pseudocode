/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CED50
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01CEBF4 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x1C002F844 (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0046430 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C004A1A8 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C006C578 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@23@Z @ 0x1C006C888 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x1C006D140 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0qiiiq_EtwWriteTransfer @ 0x1C006D250 (McTemplateK0qiiiq_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  char *v1; // r14
  __int64 v3; // rcx
  __int64 v4; // r8
  LARGE_INTEGER v5; // rax
  __int64 v6; // rcx
  LARGE_INTEGER v7; // rdi
  bool v8; // zf
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  LONGLONG v12; // rdx
  struct _KEVENT *v13; // rcx
  int v14; // r9d
  LONGLONG v15; // rax
  unsigned int v16; // r15d
  DXGDODPRESENT *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGADAPTER *Adapter; // rax
  __int64 v26; // r10
  DXGADAPTER *v27; // rax
  struct DXGADAPTER *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  char v31[8]; // [rsp+20h] [rbp-49h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-9h] BYREF
  __int64 v33; // [rsp+68h] [rbp-1h] BYREF
  __int64 v34; // [rsp+70h] [rbp+7h] BYREF
  __int64 v35; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v36[8]; // [rsp+80h] [rbp+17h] BYREF
  int v37; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v38; // [rsp+D8h] [rbp+6Fh] BYREF
  int v39; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v40; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = (char *)this + 408;
  if ( this != (BLTQUEUE *)-408LL && *((struct _KTHREAD **)this + 52) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v1, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *((_DWORD *)v1 + 6);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, (const EVENT_DESCRIPTOR *)"g", v4, v14);
    }
    ExAcquirePushLockExclusiveEx(v1, 0LL);
  }
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  PerformanceFrequency.QuadPart = 0LL;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v6 = *((_QWORD *)this + 55);
  v7 = v5;
  if ( v6 && *((_DWORD *)this + 34) == 3 )
  {
    v15 = 1000 * (v5.QuadPart - v6) / PerformanceFrequency.QuadPart;
    v16 = v15;
    if ( (unsigned int)v15 > 0x28 )
      v16 = 10 * ((unsigned int)v15 / 0xA);
    v17 = *(DXGDODPRESENT **)this;
    v18 = 0LL;
    if ( v16 > 0x64 )
      v16 = 100;
    if ( v17 )
      v18 = *(_QWORD *)((char *)DXGDODPRESENT::GetAdapter(v17) + 404);
    if ( (unsigned int)dword_1C012F8A8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C012F8A8, 0x400000080000LL) )
      {
        v37 = *((_DWORD *)this + 65);
        v33 = v18;
        v38 = v16;
        v34 = 16779264LL;
        v35 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v19,
          byte_1C009B074,
          v20,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v38,
          (__int64)&v33,
          (__int64)&v37);
        v21 = dword_1C012F8A8;
      }
      if ( v21 > 5 && tlgKeywordOn((__int64)&dword_1C012F8A8, 0x80000LL) )
      {
        v39 = *((_DWORD *)this + 65);
        v36[0] = v18;
        v40 = v16;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v22,
          byte_1C009B0DA,
          v23,
          v24,
          (__int64)&v40,
          (__int64)v36,
          (__int64)&v39);
      }
    }
  }
  v8 = *((_DWORD *)this + 34) == 1;
  *((LARGE_INTEGER *)this + 55) = v7;
  if ( !v8 )
  {
    v9 = *((unsigned int *)this + 92);
    v10 = *((unsigned int *)this + 93);
    v11 = v7.QuadPart * v9 / v10 / PerformanceFrequency.QuadPart;
    *((_QWORD *)this + 56) = v11;
    v12 = PerformanceFrequency.QuadPart * v10 * (unsigned int)v11 % v9;
    v8 = bTracingEnabled == 0;
    *((_QWORD *)this + 57) = PerformanceFrequency.QuadPart * v10 * (unsigned int)v11 / v9;
    if ( !v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qiiiq_EtwWriteTransfer(
        v10,
        v12,
        v9,
        0,
        *((_QWORD *)this + 56),
        *((_QWORD *)this + 55),
        *((_QWORD *)this + 57),
        *((_DWORD *)this + 99));
    if ( *((_DWORD *)this + 99) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v10,
          &EventDWMVsyncSignal,
          v9,
          *((_DWORD *)this + 98),
          *((_DWORD *)this + 112),
          0,
          *((_DWORD *)this + 99),
          *((_DWORD *)this + 34));
      KePulseEvent(*((PRKEVENT *)this + 47), 0, 0);
      if ( *(_QWORD *)this )
      {
        DXGGLOBAL_GetGlobal();
        Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
        HOSTVMMONITORMAPPING::TriggerRemoteVsync(
          (KSPIN_LOCK *)(v26 + 304920),
          *(struct _LUID *)((char *)Adapter + 404),
          *((_DWORD *)this + 65),
          0,
          0);
      }
    }
    v13 = (struct _KEVENT *)*((_QWORD *)this + 48);
    if ( v13 && *((_DWORD *)this + 98) <= *((_DWORD *)this + 112) )
      KeSetEvent(v13, 0, 0);
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)this + 34) != 2 && (*((_DWORD *)this + 238) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
  if ( *(_QWORD *)this )
  {
    v27 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    *((_DWORD *)this + 99) = *((_DWORD *)this + 726) + DXGADAPTER::NumberOfVSyncWaiter(v27, *((_DWORD *)this + 64));
  }
  if ( bTracingEnabled )
  {
    if ( *(_QWORD *)this )
    {
      KeQueryPerformanceCounter(0LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          v28 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
          *(_DWORD *)v31 = *((_DWORD *)this + 65);
          McTemplateK0pqxqqipqx_EtwWriteTransfer(*(unsigned int *)v31, v29, v30, v28, *(_QWORD *)v31);
        }
      }
    }
  }
}
