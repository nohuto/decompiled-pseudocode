/*
 * XREFs of ?ValidatePointer@InkDevice@@ABEJI@Z @ 0x1B1401
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF59E8 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2@Z @ 0x180B47 (--$Write@$$V@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPT.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z @ 0x1A15D9 (-GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$00@@@Z @ 0x1AF6F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

int __thiscall InkDevice::ValidatePointer(struct tagPOINTER_INFO **this, const char *a2)
{
  const char *PointerInfoByPointerId; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  int v13; // [esp+8h] [ebp-8h] BYREF
  const char *v14; // [esp+Ch] [ebp-4h] BYREF

  v14 = 0;
  PointerInfoByPointerId = (const char *)Pointer::GetPointerInfoByPointerId((__int16)a2, &v14);
  v5 = (int)PointerInfoByPointerId;
  if ( (int)PointerInfoByPointerId < 0 )
  {
    if ( (unsigned int)CallbackContext > 2 )
    {
      a2 = "Wrong thread (or invalid pointer id)";
      v14 = PointerInfoByPointerId;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v4,
        byte_25690B,
        v4,
        v4,
        (int)&v14,
        &a2);
    }
    return v5;
  }
  v6 = *(_DWORD *)(HMValidateHandleNoSecure(*((_DWORD *)v14 + 4), 19) + 284);
  if ( *(_DWORD *)(v6 + 12) != 5 )
  {
    v5 = -1073741811;
    if ( (unsigned int)CallbackContext > 2 )
    {
      HIBYTE(a2) = *(_BYTE *)(v6 + 12);
      v14 = "Not an integrated pen device";
      v13 = -1073741811;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        -1073741811,
        byte_256EB5,
        -1073741811,
        -1073741811,
        (int)&v13,
        &v14,
        (int)&a2 + 3);
    }
    return v5;
  }
  v7 = *(_DWORD *)(v6 + 8);
  v8 = *(_DWORD *)(v7 + 1760);
  if ( v8 != 0x80000000 && v8 != 11 && v8 != 13 )
  {
    v9 = -1073741811;
    v5 = -1073741811;
    if ( (unsigned int)CallbackContext <= 2 )
      return v5;
    a2 = "Pointer device not mapped to the integrated display";
    v13 = -1073741811;
LABEL_25:
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v9,
      byte_25690B,
      v9,
      v9,
      (int)&v13,
      &a2);
    return v5;
  }
  v9 = *(_DWORD *)(v7 + 276);
  if ( (struct tagPOINTER_INFO *)*(unsigned __int16 *)(v9 + 92) != this[22]
    || (struct tagPOINTER_INFO *)*(unsigned __int16 *)(v9 + 90) != this[21] )
  {
    v5 = -1073741823;
    if ( (unsigned int)CallbackContext <= 2 )
      return v5;
    a2 = "Pointer device not supported by the ink device";
    v13 = -1073741823;
    goto LABEL_25;
  }
  v10 = *(_DWORD **)(v6 + 316);
  if ( v10 && *v10 )
  {
    if ( !byte_278448 )
    {
      if ( (unsigned int)CallbackContext > 5 && _tlgKeywordOn(&CallbackContext, 0x400000000000LL) )
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (int)&CallbackContext,
          byte_25716E,
          v11,
          v11);
      byte_278448 = 1;
    }
    v9 = -1073741811;
    v5 = -1073741811;
    if ( (unsigned int)CallbackContext > 2 )
    {
      a2 = "The pointer device contains calibration data";
      v13 = -1073741811;
      goto LABEL_25;
    }
  }
  return v5;
}
