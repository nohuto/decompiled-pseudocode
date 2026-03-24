/*
 * XREFs of ?WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0046264
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AD7C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000B1A8 (_tlgKeywordOn.c)
 *     ??$Write@U_tlgWrapperBinary@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU_tlgWrapperBinary@@3@Z @ 0x1C0045A5C (--$Write@U_tlgWrapperBinary@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  __int16 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  __int16 v6; // [rsp+48h] [rbp-10h]

  if ( (unsigned int)dword_1C00B1A20 > 4 && tlgKeywordOn((__int64)&dword_1C00B1A20, 0x200000000800LL) )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00B1A20, 0x200000000001LL) )
    {
      v3 = v2 + 80;
      v4 = 32;
      v5 = v2 + 48;
      v6 = 32;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperBinary,_tlgWrapperBinary>(
        32LL,
        byte_1C007F2CE,
        v1,
        v2,
        &v5,
        &v3);
    }
  }
}
