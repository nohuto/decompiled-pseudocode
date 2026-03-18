/*
 * XREFs of ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00096D4
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00091D8 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C0043B18 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_QDC(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  void *v7; // rdx
  struct _DXGK_DIAG_HEADER *v8; // [rsp+30h] [rbp-18h] BYREF
  __int16 v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304200) )
  {
    if ( (unsigned int)dword_1C00AEA20 > 1
      && tlgKeywordOn((__int64)&dword_1C00AEA20, 0x200000000001LL)
      && tlgKeywordOn((__int64)&dword_1C00AEA20, v3) )
    {
      v7 = &unk_1C007CBF3;
LABEL_11:
      v9 = *((_WORD *)a1 + 2);
      v8 = a1;
      v10 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v4,
        (_DWORD)v7,
        v5,
        v6,
        (__int64)&v10,
        (__int64)&v8);
    }
  }
  else if ( (unsigned int)dword_1C00AEA20 > 4
         && tlgKeywordOn((__int64)&dword_1C00AEA20, 0x200000000001LL)
         && tlgKeywordOn((__int64)&dword_1C00AEA20, v2) )
  {
    v7 = &unk_1C007CBD1;
    goto LABEL_11;
  }
}
