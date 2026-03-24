/*
 * XREFs of ?LogBucket@VIDMM_PURGE_TELEMETRY@@AEAAXPEBUVIDMM_PURGE_TELEMETRY_BUCKET@@_K@Z @ 0x1C00BFAE8
 * Callers:
 *     ?LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ @ 0x1C00BFBE4 (-LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x1C0026B38 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@.c)
 *     _tlgKeywordOn @ 0x1C0026C14 (_tlgKeywordOn.c)
 */

void __fastcall VIDMM_PURGE_TELEMETRY::LogBucket(
        VIDMM_PURGE_TELEMETRY *this,
        const struct VIDMM_PURGE_TELEMETRY_BUCKET *a2)
{
  __int64 v2; // r8
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rtt
  unsigned __int64 v9; // [rsp+60h] [rbp+27h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+2Fh] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+37h] BYREF
  __int64 v12; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v13; // [rsp+80h] [rbp+47h] BYREF
  __int64 v14; // [rsp+88h] [rbp+4Fh] BYREF
  __int16 v15; // [rsp+A8h] [rbp+6Fh] BYREF
  int v16; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( *((_DWORD *)a2 + 6)
    && (unsigned int)dword_1C0050048 > 5
    && tlgKeywordOn((__int64)&dword_1C0050048, 0x400000000008LL) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
    v7 = *(_QWORD *)(v6 + 316);
    v9 = v3[1];
    v10 = v3[2];
    v8 = *v3;
    v12 = v5;
    v11 = v8 / v4;
    v15 = 2;
    v13 = v7;
    v16 = v4;
    v14 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v6,
      (int)&unk_1C0043859,
      v7,
      (__int64)v3,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
