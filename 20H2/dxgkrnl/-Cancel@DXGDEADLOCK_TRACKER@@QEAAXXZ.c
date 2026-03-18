/*
 * XREFs of ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C0161340
 * Callers:
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00E75A4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U2@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@4355554555555@Z @ 0x1C0035954 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVa_ea_1C0035954.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::Cancel(DXGDEADLOCK_TRACKER *this)
{
  DXGDEADLOCK_TRACKER *v1; // rbx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int IsDebuggerPresent; // edx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  int v12; // ebx
  int v13; // edi
  __int16 v14; // si
  int v15; // r15d
  int v16; // r12d
  int v17; // r13d
  int v18; // r14d
  __int64 v19; // rcx
  _DWORD *v20; // [rsp+E0h] [rbp-80h] BYREF
  int v21; // [rsp+E8h] [rbp-78h]
  int v22; // [rsp+ECh] [rbp-74h] BYREF
  int v23; // [rsp+F0h] [rbp-70h] BYREF
  int v24; // [rsp+F4h] [rbp-6Ch] BYREF
  int v25; // [rsp+F8h] [rbp-68h] BYREF
  int v26; // [rsp+FCh] [rbp-64h] BYREF
  int v27; // [rsp+100h] [rbp-60h] BYREF
  int v28; // [rsp+104h] [rbp-5Ch] BYREF
  int v29; // [rsp+108h] [rbp-58h] BYREF
  int v30; // [rsp+10Ch] [rbp-54h] BYREF
  int v31; // [rsp+110h] [rbp-50h] BYREF
  int v32; // [rsp+114h] [rbp-4Ch] BYREF
  int v33; // [rsp+118h] [rbp-48h] BYREF
  int v34; // [rsp+11Ch] [rbp-44h] BYREF
  int v35; // [rsp+120h] [rbp-40h] BYREF
  int v36; // [rsp+124h] [rbp-3Ch] BYREF
  __int64 v37; // [rsp+128h] [rbp-38h]
  ULONGLONG v38; // [rsp+130h] [rbp-30h]
  signed __int64 v39; // [rsp+138h] [rbp-28h]
  ULONGLONG v40; // [rsp+140h] [rbp-20h] BYREF
  __int64 v41; // [rsp+148h] [rbp-18h] BYREF
  __int64 v42; // [rsp+150h] [rbp-10h] BYREF
  signed __int64 v43; // [rsp+158h] [rbp-8h] BYREF
  __int64 v44[10]; // [rsp+160h] [rbp+0h] BYREF
  __int16 v46; // [rsp+1C8h] [rbp+68h] BYREF
  __int16 v47; // [rsp+1D0h] [rbp+70h] BYREF
  int v48; // [rsp+1D8h] [rbp+78h]

  v1 = this;
  if ( *((_BYTE *)this + 34) )
  {
    *((_BYTE *)this + 34) = 0;
    if ( !KeCancelTimer((PKTIMER)((char *)this + 168)) )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)v1 + 40)) )
    {
      KeFlushQueuedDpcs();
      if ( !KeCancelTimer((PKTIMER)((char *)v1 + 40)) )
        KeFlushQueuedDpcs();
    }
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v3 = *((_QWORD *)v1 + 3);
    v38 = UnbiasedInterruptTime;
    v37 = *(_QWORD *)(v3 + 316);
    v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)&DXGDEADLOCK_TRACKER::DeadlockCounter, 1uLL);
    if ( (*((_BYTE *)v1 + 32) || *((_BYTE *)v1 + 33)) && (unsigned int)dword_1C00AFA90 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00AFA90, 0x400000004000LL) )
      {
        LOBYTE(v4) = 1;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v4);
        v20 = (_DWORD *)*((_QWORD *)v1 + 3);
        v6 = v20[698];
        v7 = *((unsigned __int8 *)v20 + 2646);
        v8 = (unsigned int)v20[1120];
        v9 = (unsigned int)v20[1119];
        v10 = *((unsigned __int8 *)v20 + 209);
        v11 = *((unsigned __int8 *)v20 + 2540);
        v12 = *((unsigned __int8 *)v20 + 2535);
        v13 = v20[70];
        v14 = *((_WORD *)v20 + 1298);
        v15 = v20[84];
        v16 = v20[83];
        v17 = v20[82];
        v48 = v20[85];
        v18 = v20[81];
        v23 = v6;
        v24 = v7;
        v22 = IsDebuggerPresent;
        v26 = v8;
        v27 = v9;
        v25 = *((unsigned __int8 *)this + 33);
        v19 = (__int64)v20;
        v40 = v38 - *(_QWORD *)this;
        v28 = v10;
        v29 = v11;
        v30 = v12;
        v31 = v13;
        v46 = v14;
        v41 = *((_QWORD *)v20 + 200);
        v20 = (_DWORD *)*((_QWORD *)v20 + 199);
        v21 = v18;
        v36 = v18;
        v42 = v37;
        v43 = v39;
        v47 = 12;
        v32 = v48;
        v33 = v15;
        v34 = v16;
        v35 = v17;
        v44[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v19,
          byte_1C007D2B3,
          v8,
          v9,
          (__int64)&v47,
          (__int64)v44,
          (__int64)&v43,
          (__int64)&v42,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (void **)&v20,
          (__int64)&v41,
          (__int64)&v46,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v40,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22);
        v1 = this;
      }
    }
    DXGADAPTER::ReleaseReference(*((DXGADAPTER **)v1 + 3));
  }
}
