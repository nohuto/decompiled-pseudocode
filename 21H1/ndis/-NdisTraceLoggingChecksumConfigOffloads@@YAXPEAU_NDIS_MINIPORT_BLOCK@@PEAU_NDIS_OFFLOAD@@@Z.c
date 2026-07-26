/*
 * XREFs of ?NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00223F8
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0022088 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@U3@U3@U3@U3@U3@U2@U3@U3@U3@U3@U2@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@55554555554555545555@Z @ 0x1C0022A80 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U.c)
 *     _tlgKeywordOn @ 0x1C0023384 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingChecksumConfigOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        __int64 a3)
{
  int v3; // r8d
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // ecx
  char v7; // al
  unsigned int v8; // ecx
  char v9; // al
  unsigned int v10; // ecx
  char v11; // al
  unsigned int v12; // ecx
  char v13; // al
  char v14; // al
  char v15; // [rsp+E0h] [rbp-80h] BYREF
  char v16; // [rsp+E1h] [rbp-7Fh] BYREF
  char v17; // [rsp+E2h] [rbp-7Eh] BYREF
  char v18; // [rsp+E3h] [rbp-7Dh] BYREF
  char v19; // [rsp+E4h] [rbp-7Ch] BYREF
  char v20; // [rsp+E5h] [rbp-7Bh] BYREF
  char v21; // [rsp+E6h] [rbp-7Ah] BYREF
  char v22; // [rsp+E7h] [rbp-79h] BYREF
  char v23; // [rsp+E8h] [rbp-78h] BYREF
  char v24; // [rsp+E9h] [rbp-77h] BYREF
  char v25; // [rsp+EAh] [rbp-76h] BYREF
  char v26; // [rsp+EBh] [rbp-75h] BYREF
  char v27; // [rsp+ECh] [rbp-74h] BYREF
  char v28; // [rsp+EDh] [rbp-73h] BYREF
  char v29; // [rsp+EEh] [rbp-72h] BYREF
  char v30; // [rsp+EFh] [rbp-71h] BYREF
  int v31; // [rsp+F0h] [rbp-70h] BYREF
  int v32; // [rsp+F4h] [rbp-6Ch] BYREF
  int v33; // [rsp+F8h] [rbp-68h] BYREF
  int v34; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v35; // [rsp+100h] [rbp-60h] BYREF
  char v36; // [rsp+130h] [rbp-30h] BYREF
  char v37; // [rsp+138h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1C00E30F8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E30F8, 0x200000000000LL, a3, a2) )
    {
      v6 = v4[8];
      v36 = (v6 >> 6) & 3;
      v37 = (v6 >> 4) & 3;
      v7 = v4[8] & 3;
      v15 = (v6 >> 2) & 3;
      v16 = v7;
      v31 = v4[7];
      v8 = v4[6];
      v17 = (v8 >> 6) & 3;
      v18 = (v8 >> 4) & 3;
      v9 = v4[6] & 3;
      v19 = (v8 >> 2) & 3;
      v10 = v4[4];
      v20 = v9;
      v32 = v4[5];
      v21 = BYTE1(v10) & 3;
      v22 = (v10 >> 6) & 3;
      v23 = (v10 >> 4) & 3;
      v11 = v4[4] & 3;
      v24 = (v10 >> 2) & 3;
      v12 = v4[2];
      v25 = v11;
      v33 = v4[3];
      v26 = BYTE1(v12) & 3;
      v27 = (v12 >> 6) & 3;
      v13 = (v12 >> 4) & 3;
      v12 >>= 2;
      v28 = v13;
      LOBYTE(v12) = v12 & 3;
      v14 = v4[2] & 3;
      v29 = v12;
      v30 = v14;
      v34 = v4[1];
      v35 = v5 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v12,
        (unsigned int)&unk_1C00CEE0B,
        v3,
        (_DWORD)v4,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v33,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v31,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v37,
        (__int64)&v36);
    }
  }
}
