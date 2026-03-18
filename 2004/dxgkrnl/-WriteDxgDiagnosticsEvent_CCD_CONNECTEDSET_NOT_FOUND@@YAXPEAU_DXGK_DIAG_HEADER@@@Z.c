/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0044E5C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AA2C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C0044B38 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C00B0A20 > 4 && tlgKeywordOn((__int64)&dword_1C00B0A20, 0x200000000040LL) )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00B0A20, v1) )
    {
      v6 = *(_WORD *)(v4 + 4);
      v5 = v4;
      v7 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v2,
        byte_1C007F56C,
        v3,
        v4,
        (__int64)&v7,
        &v5);
    }
  }
}
