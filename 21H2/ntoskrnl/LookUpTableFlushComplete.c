/*
 * XREFs of LookUpTableFlushComplete @ 0x1407D4110
 * Callers:
 *     TlgAggregateFlush @ 0x1405C9670 (TlgAggregateFlush.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140760990 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1407D40A0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140980200 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     FlushLookUpTableBucket @ 0x140375598 (FlushLookUpTableBucket.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1405C957C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U.c)
 *     UpdateInternalStatsOnFlush @ 0x140760B10 (UpdateInternalStatsOnFlush.c)
 */

void __fastcall LookUpTableFlushComplete(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int128 v8; // xmm0
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

  v1 = *(_DWORD *)(a1 + 256);
  v2 = 0;
  if ( v1 )
  {
    UpdateInternalStatsOnFlush(a1, v1);
    if ( *(_QWORD *)(v4 + 288) )
    {
      if ( (unsigned int)dword_140C047C8 > 5 && tlgKeywordOn((__int64)&dword_140C047C8, 0x400000000000LL) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL);
        v8 = *(_OWORD *)(v7 - 16);
        v9 = *(_DWORD *)(a1 + 324);
        v10 = *(_DWORD *)(a1 + 320);
        v11 = *(_DWORD *)(a1 + 316);
        v12 = *(_DWORD *)(a1 + 312);
        v13 = *(_DWORD *)(a1 + 308);
        v15 = *(unsigned int *)(a1 + 304);
        v16 = *(_QWORD *)(a1 + 296);
        v17[0] = (__int64)&v19;
        v19 = v8;
        v14 = v6;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          (unsigned __int8 *)&dword_14002E3E4,
          v5,
          v6,
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
      FlushLookUpTableBucket(a1, v2++);
    while ( v2 < 0x20 );
  }
}
