/*
 * XREFs of ?DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C004AB40
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1C004A7D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@44444444@Z @ 0x1C004A880 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlg.c)
 */

__int64 __fastcall DxgkHandleDiagnosticNotifications(struct _DXGK_DIAGNOSTIC_HEADER *a1)
{
  __int64 Value; // rdx
  _QWORD *v3; // rax
  unsigned __int64 v4; // rcx
  struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D v5; // r10d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 *v11; // rdx
  D3DDDI_VIDEO_PRESENT_TARGET_ID *p_TargetId; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r10d
  __int64 v18; // rdx
  char v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r10d
  char v25; // [rsp+80h] [rbp+27h] BYREF
  char v26; // [rsp+81h] [rbp+28h] BYREF
  char v27; // [rsp+82h] [rbp+29h] BYREF
  char v28; // [rsp+83h] [rbp+2Ah] BYREF
  _BYTE v29[4]; // [rsp+84h] [rbp+2Bh] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId; // [rsp+88h] [rbp+2Fh] BYREF
  UINT SequenceNumber; // [rsp+8Ch] [rbp+33h] BYREF
  _DWORD v32[8]; // [rsp+90h] [rbp+37h] BYREF
  char v33; // [rsp+C0h] [rbp+67h] BYREF
  char v34; // [rsp+C8h] [rbp+6Fh] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID v35; // [rsp+D0h] [rbp+77h] BYREF
  UINT v36; // [rsp+D8h] [rbp+7Fh] BYREF

  Value = a1->Type.Notifications.Value;
  if ( (unsigned int)Value >= 4 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1, Value);
    v4 = a1->Type.Notifications.Value;
    v3[4] = 0LL;
LABEL_7:
    v3[3] = v4;
    goto LABEL_8;
  }
  if ( (unsigned __int16)*(_DWORD *)&a1->0 < 0x18u )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1, Value);
    v3[3] = (unsigned __int16)*(_DWORD *)&a1->0;
    v3[4] = 24LL;
    v3[5] = 1LL;
LABEL_8:
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
  v5 = (struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D)a1[1].Category.Value;
  if ( *(unsigned int *)&v5 >= 0x80 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1, Value);
    v4 = (unsigned __int64)a1[1].Category.Value >> 7;
    v3[4] = 2LL;
    goto LABEL_7;
  }
  if ( (Value & 1) != 0 )
  {
    if ( v5 )
    {
      if ( (unsigned int)dword_1C00AEB00 > 4
        && tlgKeywordOn((__int64)&dword_1C00AEB00, 1LL)
        && tlgKeywordOn((__int64)&dword_1C00AEB00, v13) )
      {
        v28 = v16;
        v29[0] = v16;
        v33 = v16 & (v17 >> 2);
        v32[0] = v16;
        v34 = v16 & (v17 >> 5);
        LOBYTE(v35) = v16 & v17;
        LOBYTE(v36) = v16 & (v17 >> 6);
        v25 = v16 & (v17 >> 1);
        v26 = v16 & (v17 >> 3);
        TargetId = a1->TargetId;
        SequenceNumber = a1->SequenceNumber;
        v27 = v16 & (v17 >> 4);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v14,
          byte_1C007D666,
          v15,
          v16,
          (__int64)v32,
          (__int64)&SequenceNumber,
          (__int64)&TargetId,
          (__int64)v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33);
      }
      return 0LL;
    }
    if ( (unsigned int)dword_1C00AEB00 > 4
      && tlgKeywordOn((__int64)&dword_1C00AEB00, 1LL)
      && tlgKeywordOn((__int64)&dword_1C00AEB00, v7) )
    {
      v11 = (unsigned __int8 *)&unk_1C007D71B;
      v35 = a1->TargetId;
      v36 = a1->SequenceNumber;
      p_TargetId = &TargetId;
      v34 = v10;
      TargetId = v10;
LABEL_24:
      v33 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v8,
        v11,
        v9,
        v10,
        (__int64)p_TargetId,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33);
    }
  }
  else
  {
    if ( v5 )
    {
      if ( (unsigned int)dword_1C00AEB00 > 4
        && tlgKeywordOn((__int64)&dword_1C00AEB00, 2LL)
        && tlgKeywordOn((__int64)&dword_1C00AEB00, v20) )
      {
        v26 = v23;
        v25 = 0;
        v33 = v23 & (v24 >> 2);
        TargetId = v23;
        v34 = v23 & (v24 >> 5);
        LOBYTE(v35) = v23 & v24;
        LOBYTE(v36) = v23 & (v24 >> 6);
        v29[0] = v23 & (v24 >> 1);
        v28 = v23 & (v24 >> 3);
        v32[0] = a1->TargetId;
        SequenceNumber = a1->SequenceNumber;
        v27 = v23 & (v24 >> 4);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v21,
          byte_1C007D569,
          v22,
          v23,
          (__int64)&TargetId,
          (__int64)&SequenceNumber,
          (__int64)v32,
          (__int64)&v25,
          (__int64)&v26,
          (__int64)&v27,
          (__int64)&v28,
          (__int64)v29,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33);
      }
      return 0LL;
    }
    if ( (unsigned int)dword_1C00AEB00 > 4
      && tlgKeywordOn((__int64)&dword_1C00AEB00, 2LL)
      && tlgKeywordOn((__int64)&dword_1C00AEB00, v18) )
    {
      v11 = (unsigned __int8 *)&unk_1C007D61E;
      v35 = a1->TargetId;
      v36 = a1->SequenceNumber;
      p_TargetId = v32;
      v34 = v19;
      v32[0] = v10;
      goto LABEL_24;
    }
  }
  return 0LL;
}
