/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AD70
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AA2C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C000AE1C (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1C0044568 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C0044604 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C0044A38 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  void *v7; // rdx
  __int64 v8; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  void *v17; // rdx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  struct _DXGK_DIAG_HEADER *v21; // [rsp+40h] [rbp-18h] BYREF
  __int16 v22; // [rsp+48h] [rbp-10h]
  int v23; // [rsp+80h] [rbp+28h] BYREF
  int v24; // [rsp+88h] [rbp+30h] BYREF
  int v25; // [rsp+90h] [rbp+38h] BYREF
  int v26; // [rsp+98h] [rbp+40h] BYREF

  if ( (unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( (unsigned int)dword_1C00AFA20 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, 16LL) && (unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, v4) )
    {
      v7 = &unk_1C007E877;
LABEL_19:
      v22 = *((_WORD *)a1 + 2);
      v21 = a1;
      v23 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v10,
        (_DWORD)v7,
        v11,
        v12,
        (__int64)&v23,
        (__int64)&v21);
    }
  }
  else if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v3, v2) + 304320) )
  {
    if ( (unsigned int)dword_1C00AFA20 > 1
      && (unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, 0x200000000010LL)
      && (unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, v8) )
    {
      v7 = &unk_1C007E973;
      goto LABEL_19;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C00AFA20 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, 0x200000000010LL) )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, v6) )
      {
        v7 = &unk_1C007E84E;
        goto LABEL_19;
      }
    }
  }
  if ( (unsigned int)dword_1C00AFA20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, 0x400000000010LL) )
  {
    v13 = *((_DWORD *)a1 + 12);
    if ( v13 != 88 )
    {
      if ( v13 == 94 )
      {
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, v5) )
          return;
        v17 = &unk_1C007E8EF;
      }
      else
      {
        if ( v13 != 111 || !(unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, v5) )
          return;
        v17 = &unk_1C007E8A0;
      }
      v23 = *((_DWORD *)a1 + 14);
      v24 = *((_DWORD *)a1 + 13);
      v25 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v14,
        (_DWORD)v17,
        v15,
        v16,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23);
      return;
    }
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00AFA20, v5) )
    {
      v23 = *((_DWORD *)a1 + 15);
      v24 = *((_DWORD *)a1 + 14);
      v25 = *((_DWORD *)a1 + 13);
      v26 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v18,
        (unsigned int)&unk_1C007E927,
        v19,
        v20,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23);
    }
  }
}
