/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00127B4
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00126E0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU_tlgWrapperBinary@@@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU_tlgWrapperBinary@@@Z @ 0x1C00010EC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C0012AE4 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C00529EC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdx
  int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int *v19; // [rsp+28h] [rbp-21h]
  int v20; // [rsp+60h] [rbp+17h] BYREF
  int v21; // [rsp+64h] [rbp+1Bh] BYREF
  struct _DXGK_DIAG_HEADER *v22; // [rsp+68h] [rbp+1Fh] BYREF
  __int16 v23; // [rsp+70h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+67h] BYREF
  int v25; // [rsp+B8h] [rbp+6Fh] BYREF
  int v26; // [rsp+C0h] [rbp+77h] BYREF
  int v27; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( !(unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 304512) )
    {
      if ( (unsigned int)dword_1C012F8E0 <= 1
        || !(unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, 0x200000000010LL)
        || !(unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v8) )
      {
        goto LABEL_17;
      }
      v6 = &unk_1C0098E41;
    }
    else
    {
      if ( (unsigned int)dword_1C012F8E0 <= 4 )
        return;
      if ( !(unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, 0x200000000010LL)
        || !(unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v9) )
      {
        goto LABEL_17;
      }
      v6 = &unk_1C0098C96;
    }
    v23 = *((_WORD *)a1 + 2);
    v24 = *((_DWORD *)a1 + 15);
    v25 = *((_DWORD *)a1 + 14);
    v26 = *((_DWORD *)a1 + 13);
    v27 = *((_DWORD *)a1 + 12);
    v21 = *((_DWORD *)a1 + 10);
    v19 = &v21;
    v7 = &v20;
    v20 = 8;
    goto LABEL_16;
  }
  if ( (unsigned int)dword_1C012F8E0 <= 4 )
    return;
  if ( (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, 16LL) && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v2) )
  {
    v6 = &unk_1C0098CF0;
    v23 = *((_WORD *)a1 + 2);
    v24 = *((_DWORD *)a1 + 15);
    v25 = *((_DWORD *)a1 + 14);
    v26 = *((_DWORD *)a1 + 13);
    v20 = *((_DWORD *)a1 + 10);
    v19 = &v20;
    v7 = &v21;
    v27 = v5;
    v21 = 8;
LABEL_16:
    v22 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v3,
      (int)v6,
      v4,
      v5,
      (__int64)v7,
      (__int64)v19,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64 *)&v22);
  }
LABEL_17:
  if ( (unsigned int)dword_1C012F8E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, 0x400000000010LL) )
  {
    v11 = *((_DWORD *)a1 + 12);
    if ( v11 == 88 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v10) )
      {
        v23 = *((_WORD *)a1 + 2);
        v24 = *((_DWORD *)a1 + 15);
        v25 = *((_DWORD *)a1 + 14);
        v26 = *((_DWORD *)a1 + 13);
        v27 = *((_DWORD *)a1 + 10);
        v22 = a1;
        v21 = 8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
          v16,
          (int)&unk_1C0098DE5,
          v17,
          v18,
          (__int64)&v21,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64 *)&v22);
      }
    }
    else
    {
      if ( v11 == 94 )
      {
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v10) )
          return;
        v15 = &unk_1C0098DA3;
        goto LABEL_26;
      }
      if ( v11 == 111 && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v10) )
      {
        v15 = &unk_1C0098D4A;
LABEL_26:
        v24 = *((_DWORD *)a1 + 14);
        v25 = *((_DWORD *)a1 + 13);
        v26 = *((_DWORD *)a1 + 10);
        v27 = 8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v12,
          (_DWORD)v15,
          v13,
          v14,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24);
      }
    }
  }
}
