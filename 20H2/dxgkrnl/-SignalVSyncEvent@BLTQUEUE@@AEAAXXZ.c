/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C00DBF44
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01583F0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001A644 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C003AB70 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C003E0E0 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z @ 0x1C004E7C8 (-TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C005D9E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@23@Z @ 0x1C005DCF4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x1C005E628 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0qiii_EtwWriteTransfer @ 0x1C005E740 (McTemplateK0qiii_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  LARGE_INTEGER v2; // rax
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rdi
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  LONGLONG v9; // rdx
  struct _KEVENT *v10; // rcx
  LONGLONG v11; // rax
  unsigned int v12; // r14d
  DXGDODPRESENT *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGADAPTER *Adapter; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGADAPTER *v25; // rax
  struct DXGADAPTER *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-19h] BYREF
  union _LARGE_INTEGER v31; // [rsp+68h] [rbp-11h] BYREF
  __int64 v32; // [rsp+70h] [rbp-9h] BYREF
  __int64 v33; // [rsp+78h] [rbp-1h] BYREF
  __int64 v34; // [rsp+80h] [rbp+7h] BYREF
  __int64 v35; // [rsp+88h] [rbp+Fh] BYREF
  _BYTE v36[8]; // [rsp+90h] [rbp+17h] BYREF
  DXGPUSHLOCK *v37; // [rsp+98h] [rbp+1Fh]
  int v38; // [rsp+A0h] [rbp+27h]
  int v39; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v40; // [rsp+E8h] [rbp+6Fh] BYREF
  int v41; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v42; // [rsp+F8h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36, (struct _KTHREAD **)this + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v37);
  PerformanceFrequency.QuadPart = 0LL;
  v38 = 2;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = *((_QWORD *)this + 54);
  v4 = v2;
  if ( v3 && *((_DWORD *)this + 34) == 3 )
  {
    v11 = 1000 * (v2.QuadPart - v3) / PerformanceFrequency.QuadPart;
    v12 = v11;
    if ( (unsigned int)v11 > 0x28 )
      v12 = 10 * ((unsigned int)v11 / 0xA);
    v13 = *(DXGDODPRESENT **)this;
    if ( v12 > 0x64 )
      v12 = 100;
    v14 = 0LL;
    if ( v13 )
      v14 = *(_QWORD *)((char *)DXGDODPRESENT::GetAdapter(v13) + 316);
    if ( (unsigned int)dword_1C00AF9E8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00AF9E8, 0x400000080000LL) )
      {
        v39 = *((_DWORD *)this + 63);
        v32 = v14;
        v40 = v12;
        v33 = 16779264LL;
        v34 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v15,
          byte_1C00807E2,
          v16,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v40,
          (__int64)&v32,
          (__int64)&v39);
        v17 = dword_1C00AF9E8;
      }
      if ( v17 > 5 && tlgKeywordOn((__int64)&dword_1C00AF9E8, 0x80000LL) )
      {
        v41 = *((_DWORD *)this + 63);
        v35 = v14;
        v42 = v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v18,
          byte_1C0080848,
          v19,
          v20,
          (__int64)&v42,
          (__int64)&v35,
          (__int64)&v41);
      }
    }
  }
  v5 = *((_DWORD *)this + 34) == 1;
  *((LARGE_INTEGER *)this + 54) = v4;
  if ( !v5 )
  {
    v6 = *((unsigned int *)this + 90);
    v7 = *((unsigned int *)this + 91);
    v8 = v4.QuadPart * v6 / v7 / PerformanceFrequency.QuadPart;
    *((_QWORD *)this + 55) = v8;
    v9 = PerformanceFrequency.QuadPart * v7 * (unsigned int)v8 % v6;
    v5 = bTracingEnabled == 0;
    *((_QWORD *)this + 56) = PerformanceFrequency.QuadPart * v7 * (unsigned int)v8 / v6;
    if ( !v5 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(v7, &EventDWMVsyncSignal, v6, *((_DWORD *)this + 96), v8, 0, 0);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qiii_EtwWriteTransfer(
          v7,
          v9,
          v6,
          0,
          *((_QWORD *)this + 55),
          *((_QWORD *)this + 54),
          *((_QWORD *)this + 56));
    }
    if ( *((_DWORD *)this + 97) )
    {
      KePulseEvent(*((PRKEVENT *)this + 46), 0, 0);
      if ( *(_QWORD *)this )
      {
        Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
        Global = DXGGLOBAL::GetGlobal(v23, v22);
        REMOTEVSYNCMAPPING::TriggerRemoteVsync(
          (KSPIN_LOCK *)Global + 38084,
          *(struct _LUID *)((char *)Adapter + 316),
          *((_DWORD *)this + 63));
      }
    }
    v10 = (struct _KEVENT *)*((_QWORD *)this + 47);
    if ( v10 && *((_DWORD *)this + 96) <= *((_DWORD *)this + 110) )
      KeSetEvent(v10, 0, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  if ( *((_DWORD *)this + 34) != 2 && (*((_DWORD *)this + 234) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
  if ( *(_QWORD *)this )
  {
    v25 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    *((_DWORD *)this + 97) = *((_DWORD *)this + 722) + DXGADAPTER::NumberOfVSyncWaiter(v25, *((_DWORD *)this + 62));
  }
  if ( bTracingEnabled )
  {
    if ( *(_QWORD *)this )
    {
      v31.QuadPart = 0LL;
      KeQueryPerformanceCounter(&v31);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v26 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
          McTemplateK0pqxqqipqx_EtwWriteTransfer(v28, v27, v29, v26);
        }
      }
    }
  }
}
