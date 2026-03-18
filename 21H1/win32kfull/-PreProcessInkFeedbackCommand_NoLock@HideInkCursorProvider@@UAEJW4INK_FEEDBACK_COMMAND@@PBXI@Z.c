/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF583A
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43ABU?$_tlgWrapperByVal@$00@@@Z @ 0x1AF44E (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTe.c)
 *     ?ValidatePointer@HideInkCursorProvider@@ABEJI@Z @ 0x1AFE5F (-ValidatePointer@HideInkCursorProvider@@ABEJI@Z.c)
 */

int __thiscall HideInkCursorProvider::PreProcessInkFeedbackCommand_NoLock(int this, int a2, unsigned int *a3, int a4)
{
  char v4; // dl
  int v5; // esi
  int v6; // ecx
  int v8; // [esp+4h] [ebp-8h] BYREF
  const char *v9; // [esp+8h] [ebp-4h] BYREF

  v4 = a2;
  if ( a2 == 3 )
  {
    if ( a4 != 4 )
    {
      v5 = -1073741811;
      if ( (unsigned int)CallbackContext <= 2 )
        return v5;
      goto LABEL_13;
    }
    v5 = HideInkCursorProvider::ValidatePointer((struct tagPOINTER_INFO **)this, *a3);
    if ( v5 >= 0 || (unsigned int)CallbackContext <= 2 )
      return v5;
LABEL_16:
    a4 = (int)"ValidatePointer failed";
    a3 = (unsigned int *)v5;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v6,
      v6,
      &a3,
      &a4);
    return v5;
  }
  if ( a2 == 4 )
  {
    if ( a4 != 4 )
    {
      v5 = -1073741811;
      if ( (unsigned int)CallbackContext <= 2 )
        return v5;
LABEL_13:
      a4 = -1073741811;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        (int)&unk_2558E4,
        this,
        this,
        (int)&a4);
      return v5;
    }
    v5 = HideInkCursorProvider::ValidatePointer((struct tagPOINTER_INFO **)this, *a3);
    if ( v5 >= 0 || (unsigned int)CallbackContext <= 2 )
      return v5;
    goto LABEL_16;
  }
  v5 = -1073741637;
  if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = *(_DWORD *)(this + 24);
    HIBYTE(a4) = v4;
    a3 = (unsigned int *)this;
    v9 = "Unsupported command";
    v8 = -1073741637;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      this,
      this,
      &v8,
      &v9,
      &a2,
      &a3,
      (char *)&a4 + 3);
  }
  return v5;
}
