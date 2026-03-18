/*
 * XREFs of ?DeadlockTimeOutDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0036430
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U2@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555455555@Z @ 0x1C00356FC (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@.c)
 */

void __fastcall DeadlockTimeOutDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  ULONGLONG UnbiasedInterruptTime; // rsi
  __int64 v7; // rcx
  ULONGLONG v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12[2]; // [rsp+D0h] [rbp-80h] BYREF
  int IsDebuggerPresent; // [rsp+D4h] [rbp-7Ch] BYREF
  int v14; // [rsp+D8h] [rbp-78h] BYREF
  int v15; // [rsp+DCh] [rbp-74h] BYREF
  int v16; // [rsp+E0h] [rbp-70h] BYREF
  int v17; // [rsp+E4h] [rbp-6Ch] BYREF
  int v18; // [rsp+E8h] [rbp-68h] BYREF
  int v19; // [rsp+ECh] [rbp-64h] BYREF
  int v20; // [rsp+F0h] [rbp-60h] BYREF
  int v21; // [rsp+F4h] [rbp-5Ch] BYREF
  int v22; // [rsp+F8h] [rbp-58h] BYREF
  int v23; // [rsp+FCh] [rbp-54h] BYREF
  int v24; // [rsp+100h] [rbp-50h] BYREF
  int v25; // [rsp+104h] [rbp-4Ch] BYREF
  int v26; // [rsp+108h] [rbp-48h] BYREF
  __int64 v27; // [rsp+110h] [rbp-40h]
  ULONGLONG v28; // [rsp+118h] [rbp-38h] BYREF
  __int64 v29; // [rsp+120h] [rbp-30h] BYREF
  void *v30; // [rsp+128h] [rbp-28h] BYREF
  __int64 v31; // [rsp+130h] [rbp-20h] BYREF
  unsigned __int64 v32; // [rsp+138h] [rbp-18h] BYREF
  __int64 v33; // [rsp+140h] [rbp-10h] BYREF
  __int16 v34; // [rsp+168h] [rbp+18h] BYREF

  v4 = DeferredContext[3];
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v27 = *(_QWORD *)(v4 + 316);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 4416), UnbiasedInterruptTime, 0LL) )
  {
    if ( (unsigned int)dword_1C00AFA90 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00AFA90, 0x400000004000LL) )
      {
        LOBYTE(v7) = 1;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v7);
        v14 = *(_DWORD *)(v4 + 2792);
        v15 = *(unsigned __int8 *)(v4 + 2646);
        v16 = *(_DWORD *)(v4 + 4480);
        v17 = *(_DWORD *)(v4 + 4476);
        v18 = *(unsigned __int8 *)(v4 + 209);
        v19 = *(unsigned __int8 *)(v4 + 2540);
        v8 = UnbiasedInterruptTime - *DeferredContext;
        v20 = *(unsigned __int8 *)(v4 + 2535);
        v21 = *(_DWORD *)(v4 + 280);
        v34 = *(_WORD *)(v4 + 2596);
        v29 = *(_QWORD *)(v4 + 1600);
        v30 = *(void **)(v4 + 1592);
        v22 = *(_DWORD *)(v4 + 340);
        v23 = *(_DWORD *)(v4 + 336);
        v24 = *(_DWORD *)(v4 + 332);
        v25 = *(_DWORD *)(v4 + 328);
        v26 = *(_DWORD *)(v4 + 324);
        v31 = v27;
        v32 = DXGDEADLOCK_TRACKER::DeadlockCounter;
        v12[0] = 12;
        v28 = v8;
        v33 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          byte_1C007D756,
          v10,
          v11,
          (__int64)v12,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          &v30,
          (__int64)&v29,
          (__int64)&v34,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v28,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&IsDebuggerPresent);
      }
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 4432), CriticalWorkQueue);
    *((_BYTE *)DeferredContext + 33) = 1;
  }
}
