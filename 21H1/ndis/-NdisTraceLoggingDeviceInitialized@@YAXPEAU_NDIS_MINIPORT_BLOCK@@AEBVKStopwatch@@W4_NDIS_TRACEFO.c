/*
 * XREFs of ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0021E00
 * Callers:
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C00FF8FC (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@33AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1C0022934 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U-$_tlgWrapperByVal@$00@@U3@@.c)
 *     _tlgKeywordOn @ 0x1C0023384 (_tlgKeywordOn.c)
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x1C00233B0 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByRef@$0BA@@@33AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1C008A86C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U-$_tlgWrapperByVal@$00@@U.c)
 */

void __fastcall NdisTraceLoggingDeviceInitialized(__int64 a1, KStopwatch *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r10
  int v13; // r11d
  _BYTE v14[4]; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch] BYREF
  int v16; // [rsp+68h] [rbp-18h] BYREF
  int ElapsedTimeInMilliseconds; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+78h] [rbp-8h] BYREF
  char v20; // [rsp+A8h] [rbp+28h] BYREF

  if ( (_DWORD)a4 )
  {
    if ( (unsigned int)dword_1C00E30F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C00E30F8, 0x400000000000LL, a3, a4) )
    {
      v20 = *(_BYTE *)(v12 + 33);
      v14[0] = *(_BYTE *)(v12 + 32);
      ElapsedTimeInMilliseconds = *(_DWORD *)(v12 + 1832);
      v16 = *(_DWORD *)(v12 + 464);
      v19 = v12 + 4008;
      v15 = v13;
      LODWORD(v18) = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v9,
        (unsigned int)&unk_1C00CFABC,
        v10,
        v11,
        (__int64)&v18,
        (__int64)&v15,
        (__int64)&v19,
        (__int64)&v16,
        (__int64)&ElapsedTimeInMilliseconds,
        (__int64)v14,
        (__int64)&v20);
    }
  }
  else if ( (unsigned int)dword_1C00E30F8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E30F8, 0x400000000000LL, a3, a4) )
    {
      v20 = *(_BYTE *)(v5 + 33);
      v14[0] = *(_BYTE *)(v5 + 32);
      v15 = *(_DWORD *)(v5 + 1832);
      v16 = *(_DWORD *)(v5 + 464);
      v18 = v5 + 4008;
      ElapsedTimeInMilliseconds = KStopwatch::GetElapsedTimeInMilliseconds(a2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v6,
        (unsigned int)&unk_1C00CFB4E,
        v7,
        v8,
        (__int64)&ElapsedTimeInMilliseconds,
        (__int64)&v18,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)v14,
        (__int64)&v20);
    }
  }
}
