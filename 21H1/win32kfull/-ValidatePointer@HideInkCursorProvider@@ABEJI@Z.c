/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@ABEJI@Z @ 0x1AFE5F
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF583A (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z @ 0x1A15D9 (-GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$00@@@Z @ 0x1AF6F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

int __thiscall HideInkCursorProvider::ValidatePointer(struct tagPOINTER_INFO **this, const char *a2)
{
  int v2; // ecx
  int PointerInfoByPointerId; // esi
  int v4; // eax
  int v5; // ecx
  int v7; // [esp+4h] [ebp-8h] BYREF
  const char *v8; // [esp+8h] [ebp-4h] BYREF

  v8 = 0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((__int16)a2, &v8);
  if ( PointerInfoByPointerId >= 0 )
  {
    v4 = *(_DWORD *)(HMValidateHandleNoSecure(*((_DWORD *)v8 + 4), 19) + 284);
    if ( *(_DWORD *)(v4 + 12) != 5 )
    {
      PointerInfoByPointerId = -1073741811;
      if ( (unsigned int)CallbackContext > 2 )
      {
        HIBYTE(a2) = *(_BYTE *)(v4 + 12);
        v8 = "Not an integrated pen device";
        v7 = -1073741811;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
          v5,
          byte_256EB5,
          v5,
          v5,
          (int)&v7,
          &v8,
          (int)&a2 + 3);
      }
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = "Wrong thread (or invalid pointer id)";
    v8 = (const char *)PointerInfoByPointerId;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v2,
      byte_25690B,
      v2,
      v2,
      (int)&v8,
      &a2);
  }
  return PointerInfoByPointerId;
}
