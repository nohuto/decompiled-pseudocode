/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0253920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C024E9B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0253270 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C02540DC (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::PreProcessInkFeedbackCommand_NoLock(
        HideInkCursorProvider *a1,
        int a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v10[4]; // [rsp+54h] [rbp-5h] BYREF
  const char *v11; // [rsp+58h] [rbp-1h] BYREF
  HideInkCursorProvider *v12; // [rsp+60h] [rbp+7h] BYREF
  void *v13; // [rsp+68h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+70h] [rbp+17h] BYREF
  int *v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  if ( a2 == 3 )
  {
    if ( (_DWORD)a4 != 4 )
    {
      v4 = -1073741811;
      if ( (unsigned int)dword_1C032A288 <= 2 )
        return v4;
      goto LABEL_13;
    }
    v4 = HideInkCursorProvider::ValidatePointer(a1, *a3);
    if ( (v4 & 0x80000000) == 0 || (unsigned int)dword_1C032A288 <= 2 )
      return v4;
LABEL_16:
    v9 = v4;
    v11 = "ValidatePointer failed";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v5,
      byte_1C02F1A33,
      v6,
      v7,
      (__int64)&v9,
      (void **)&v11);
    return v4;
  }
  if ( a2 == 4 )
  {
    if ( (_DWORD)a4 != 4 )
    {
      v4 = -1073741811;
      if ( (unsigned int)dword_1C032A288 <= 2 )
        return v4;
LABEL_13:
      v17 = 0;
      v9 = -1073741811;
      v16 = 4;
      v15 = &v9;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C032A288,
        (unsigned __int8 *)dword_1C02F0A0C,
        0LL,
        0LL,
        3u,
        &v14);
      return v4;
    }
    v4 = HideInkCursorProvider::ValidatePointer(a1, *a3);
    if ( (v4 & 0x80000000) == 0 || (unsigned int)dword_1C032A288 <= 2 )
      return v4;
    goto LABEL_16;
  }
  v4 = -1073741637;
  if ( (unsigned int)dword_1C032A288 > 2 )
  {
    v13 = (void *)*((_QWORD *)a1 + 6);
    v11 = "Unsupported command";
    v10[0] = a2;
    v12 = a1;
    v9 = -1073741637;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)a1,
      byte_1C02F2096,
      (unsigned int)(a2 - 3),
      a4,
      (__int64)&v9,
      (void **)&v11,
      &v13,
      (__int64)&v12,
      (__int64)v10);
  }
  return v4;
}
