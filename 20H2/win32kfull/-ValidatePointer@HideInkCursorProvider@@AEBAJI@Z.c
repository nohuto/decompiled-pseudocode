/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C02540DC
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0253920 (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0243334 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C024E9B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0253368 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF
  const char *v13; // [rsp+60h] [rbp+20h] BYREF
  const char *v14; // [rsp+68h] [rbp+28h] BYREF

  v12 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, &v12, a3);
  v7 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    v8 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(v12 + 16), 19) + 480);
    if ( *(_DWORD *)(v8 + 24) != 5 )
    {
      v7 = -1073741811;
      if ( (unsigned int)dword_1C032A288 > 2 )
      {
        LOBYTE(v12) = *(_BYTE *)(v8 + 24);
        v14 = "Not an integrated pen device";
        LODWORD(v13) = -1073741811;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
          v8,
          byte_1C02F1FDD,
          v9,
          v10,
          (__int64)&v13,
          (void **)&v14,
          (__int64)&v12);
      }
    }
  }
  else if ( (unsigned int)dword_1C032A288 > 2 )
  {
    LODWORD(v12) = PointerInfoByPointerId;
    v13 = "Wrong thread (or invalid pointer id)";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v4,
      byte_1C02F1A33,
      v5,
      v6,
      (__int64)&v12,
      (void **)&v13);
  }
  return v7;
}
