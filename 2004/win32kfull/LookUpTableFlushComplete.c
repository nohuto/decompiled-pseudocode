/*
 * XREFs of LookUpTableFlushComplete @ 0x1C037CD10
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x1C037CBB8 (TlgUnregisterAggregateProvider.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C037D620 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C037D6B0 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C037D720 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C025DAB4 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U.c)
 *     FlushLookUpTableBucket @ 0x1C025E090 (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x1C037D79C (UpdateInternalStatsOnFlush.c)
 */

__int64 __fastcall LookUpTableFlushComplete(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 result; // rax
  int v9; // [rsp+70h] [rbp-29h] BYREF
  int v10; // [rsp+74h] [rbp-25h] BYREF
  int v11; // [rsp+78h] [rbp-21h] BYREF
  int v12; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v13; // [rsp+80h] [rbp-19h] BYREF
  __int64 v14; // [rsp+88h] [rbp-11h] BYREF
  __int64 v15; // [rsp+90h] [rbp-9h] BYREF
  __int64 v16; // [rsp+98h] [rbp-1h] BYREF
  __int64 v17[5]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+2Fh]
  __int128 v19; // [rsp+D0h] [rbp+37h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    UpdateInternalStatsOnFlush();
    v5 = *(_QWORD *)(v3 + 288);
    if ( v5 )
    {
      if ( (unsigned int)dword_1C032B330 > 5
        && (qword_1C032B340 & 0x400000000000LL) != 0
        && (qword_1C032B348 & 0x400000000000LL) == qword_1C032B348 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v3 + 344) + 8LL);
        v7 = *(_OWORD *)(v6 - 16);
        v9 = *(_DWORD *)(a1 + 324);
        v10 = *(_DWORD *)(a1 + 320);
        v11 = *(_DWORD *)(a1 + 316);
        v12 = *(_DWORD *)(a1 + 312);
        v13 = *(_DWORD *)(a1 + 308);
        v15 = *(unsigned int *)(a1 + 304);
        v16 = *(_QWORD *)(a1 + 296);
        v17[0] = (__int64)&v19;
        v14 = v5;
        v19 = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v6,
          byte_1C02F331F,
          0x400000000000LL,
          v4,
          v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9);
      }
      *(_OWORD *)(a1 + 288) = 0LL;
      v18 = 0LL;
      *(_OWORD *)(a1 + 304) = 0LL;
      *(_QWORD *)(a1 + 320) = v18;
    }
    do
      result = FlushLookUpTableBucket(a1, v1++);
    while ( v1 < 0x20 );
  }
  return result;
}
