/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000951C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00091D8 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C00095C8 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1C0043648 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C00436E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C0043B18 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  void *v5; // rdx
  __int64 v6; // rdx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  void *v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  struct _DXGK_DIAG_HEADER *v19; // [rsp+40h] [rbp-18h] BYREF
  __int16 v20; // [rsp+48h] [rbp-10h]
  int v21; // [rsp+80h] [rbp+28h] BYREF
  int v22; // [rsp+88h] [rbp+30h] BYREF
  int v23; // [rsp+90h] [rbp+38h] BYREF
  int v24; // [rsp+98h] [rbp+40h] BYREF

  if ( (unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( (unsigned int)dword_1C00AEA20 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, 16LL) && (unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, v2) )
    {
      v5 = &unk_1C007CE4F;
LABEL_19:
      v20 = *((_WORD *)a1 + 2);
      v19 = a1;
      v21 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v8,
        (_DWORD)v5,
        v9,
        v10,
        (__int64)&v21,
        (__int64)&v19);
    }
  }
  else if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304200) )
  {
    if ( (unsigned int)dword_1C00AEA20 > 1
      && (unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, 0x200000000010LL)
      && (unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, v6) )
    {
      v5 = &unk_1C007CF4B;
      goto LABEL_19;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C00AEA20 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, 0x200000000010LL) )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, v4) )
      {
        v5 = &unk_1C007CE26;
        goto LABEL_19;
      }
    }
  }
  if ( (unsigned int)dword_1C00AEA20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, 0x400000000010LL) )
  {
    v11 = *((_DWORD *)a1 + 12);
    if ( v11 != 88 )
    {
      if ( v11 == 94 )
      {
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, v3) )
          return;
        v15 = &unk_1C007CEC7;
      }
      else
      {
        if ( v11 != 111 || !(unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, v3) )
          return;
        v15 = &unk_1C007CE78;
      }
      v21 = *((_DWORD *)a1 + 14);
      v22 = *((_DWORD *)a1 + 13);
      v23 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        (_DWORD)v15,
        v13,
        v14,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21);
      return;
    }
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00AEA20, v3) )
    {
      v21 = *((_DWORD *)a1 + 15);
      v22 = *((_DWORD *)a1 + 14);
      v23 = *((_DWORD *)a1 + 13);
      v24 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v16,
        (unsigned int)&unk_1C007CEFF,
        v17,
        v18,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21);
    }
  }
}
