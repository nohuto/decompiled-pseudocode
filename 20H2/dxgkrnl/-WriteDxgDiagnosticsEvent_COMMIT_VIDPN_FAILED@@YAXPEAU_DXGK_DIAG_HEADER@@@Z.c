/*
 * XREFs of ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0044DDC
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AA2C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x1C00447E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C0044A38 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+50h] [rbp-20h] BYREF
  int v11; // [rsp+54h] [rbp-1Ch] BYREF
  struct _DXGK_DIAG_HEADER *v12; // [rsp+58h] [rbp-18h] BYREF
  __int16 v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+88h] [rbp+18h] BYREF
  int v15; // [rsp+90h] [rbp+20h] BYREF
  int v16; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C00AFA20 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00AFA20, 0x200000000100LL) && tlgKeywordOn((__int64)&dword_1C00AFA20, v2) )
    {
      v13 = *((_WORD *)a1 + 2);
      v12 = a1;
      v14 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v4,
        byte_1C007E511,
        v5,
        v3,
        (__int64)&v14,
        (__int64 *)&v12);
      LODWORD(v3) = dword_1C00AFA20;
    }
    if ( (unsigned int)v3 > 4 && tlgKeywordOn((__int64)&dword_1C00AFA20, 0x400000000100LL) )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00AFA20, v6) )
      {
        v14 = *((_DWORD *)a1 + 18);
        v15 = *((_DWORD *)a1 + 12);
        v16 = *((_DWORD *)a1 + 19);
        v10 = *((_DWORD *)a1 + 15);
        v12 = *(struct _DXGK_DIAG_HEADER **)((char *)a1 + 52);
        v11 = 5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          byte_1C007E4A6,
          v8,
          v9,
          (__int64)&v11,
          (__int64)&v12,
          (__int64)&v10,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14);
      }
    }
  }
}
