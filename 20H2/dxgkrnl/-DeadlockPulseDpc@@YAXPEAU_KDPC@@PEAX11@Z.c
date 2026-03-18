/*
 * XREFs of ?DeadlockPulseDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0036130
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U2@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555455555@Z @ 0x1C00356FC (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@.c)
 */

void __fastcall DeadlockPulseDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  signed __int64 v6; // r15
  ULONGLONG UnbiasedInterruptTime; // rax
  unsigned int v8; // edi
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14[2]; // [rsp+D0h] [rbp-80h] BYREF
  int IsDebuggerPresent; // [rsp+D4h] [rbp-7Ch] BYREF
  int v16; // [rsp+D8h] [rbp-78h] BYREF
  int v17; // [rsp+DCh] [rbp-74h] BYREF
  int v18; // [rsp+E0h] [rbp-70h] BYREF
  int v19; // [rsp+E4h] [rbp-6Ch] BYREF
  int v20; // [rsp+E8h] [rbp-68h] BYREF
  int v21; // [rsp+ECh] [rbp-64h] BYREF
  int v22; // [rsp+F0h] [rbp-60h] BYREF
  int v23; // [rsp+F4h] [rbp-5Ch] BYREF
  int v24; // [rsp+F8h] [rbp-58h] BYREF
  int v25; // [rsp+FCh] [rbp-54h] BYREF
  int v26; // [rsp+100h] [rbp-50h] BYREF
  int v27; // [rsp+104h] [rbp-4Ch] BYREF
  int v28; // [rsp+108h] [rbp-48h] BYREF
  __int64 v29; // [rsp+110h] [rbp-40h]
  unsigned __int64 v30; // [rsp+118h] [rbp-38h] BYREF
  __int64 v31; // [rsp+120h] [rbp-30h] BYREF
  void *v32; // [rsp+128h] [rbp-28h] BYREF
  __int64 v33; // [rsp+130h] [rbp-20h] BYREF
  unsigned __int64 v34; // [rsp+138h] [rbp-18h] BYREF
  __int64 v35; // [rsp+140h] [rbp-10h] BYREF
  __int16 v36; // [rsp+178h] [rbp+28h] BYREF

  v4 = *((_QWORD *)DeferredContext + 3);
  v6 = *(_QWORD *)(v4 + 4424);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v8 = *((_DWORD *)DeferredContext + 3);
  v9 = UnbiasedInterruptTime - *(_QWORD *)DeferredContext;
  v29 = *(_QWORD *)(v4 + 316);
  if ( v9 <= 0x861C46800LL )
  {
    if ( v9 <= 0xB2D05E00 )
    {
      if ( v9 > 0x23C34600 )
        v8 = 60000;
    }
    else
    {
      v8 = 900000;
    }
  }
  else
  {
    v8 = 3600000;
  }
  if ( UnbiasedInterruptTime - v6 > 10000 * (unsigned __int64)(v8 - *((_DWORD *)DeferredContext + 4))
    && v6 == _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 4424), UnbiasedInterruptTime, v6) )
  {
    if ( (unsigned int)dword_1C00AFA90 > 5 && tlgKeywordOn((__int64)&dword_1C00AFA90, 0x400000004000LL) )
    {
      LOBYTE(v10) = 1;
      IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v10);
      v16 = *(_DWORD *)(v4 + 2792);
      v17 = *(unsigned __int8 *)(v4 + 2646);
      v18 = *(_DWORD *)(v4 + 4480);
      v19 = *(_DWORD *)(v4 + 4476);
      v20 = *(unsigned __int8 *)(v4 + 209);
      v21 = *(unsigned __int8 *)(v4 + 2540);
      v22 = *(unsigned __int8 *)(v4 + 2535);
      v23 = *(_DWORD *)(v4 + 280);
      v36 = *(_WORD *)(v4 + 2596);
      v31 = *(_QWORD *)(v4 + 1600);
      v32 = *(void **)(v4 + 1592);
      v24 = *(_DWORD *)(v4 + 340);
      v25 = *(_DWORD *)(v4 + 336);
      v26 = *(_DWORD *)(v4 + 332);
      v27 = *(_DWORD *)(v4 + 328);
      v28 = *(_DWORD *)(v4 + 324);
      v33 = v29;
      v34 = DXGDEADLOCK_TRACKER::DeadlockCounter;
      v14[0] = 12;
      v30 = v9;
      v35 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_1C007D5D3,
        v12,
        v13,
        (__int64)v14,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        &v32,
        (__int64)&v31,
        (__int64)&v36,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v30,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&IsDebuggerPresent);
    }
    DeferredContext[32] = 1;
  }
  if ( DeferredContext[34] )
    KeSetTimer((PKTIMER)(DeferredContext + 40), (LARGE_INTEGER)(-10000LL * v8), (PKDPC)(DeferredContext + 104));
}
