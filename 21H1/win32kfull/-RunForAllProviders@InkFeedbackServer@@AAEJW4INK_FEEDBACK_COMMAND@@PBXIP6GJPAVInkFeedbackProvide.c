/*
 * XREFs of ?RunForAllProviders@InkFeedbackServer@@AAEJW4INK_FEEDBACK_COMMAND@@PBXIP6GJPAVInkFeedbackProviderBase@@01I@Z@Z @ 0xF5970
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@InkFeedbackServer@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF5952 (-PreProcessInkFeedbackCommand_NoLock@InkFeedbackServer@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AC2B0 (-ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$00@@@Z @ 0x1AF6F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

int __thiscall InkFeedbackServer::RunForAllProviders(
        _DWORD *this,
        int a2,
        int a3,
        const char *a4,
        int (__stdcall *a5)(_DWORD *, int, int, const char *))
{
  int v5; // ebx
  _DWORD *i; // esi

  v5 = a2;
  for ( i = (_DWORD *)*this; i != this; i = (_DWORD *)*i )
  {
    if ( a5(i - 1, v5, a3, a4) >= 0 )
      return 0;
  }
  if ( v5 == 2 || v5 == 4 )
    return 0;
  if ( (unsigned int)CallbackContext > 2 )
  {
    HIBYTE(a2) = v5;
    a4 = "Command not serviced";
    a3 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
      &a3,
      &a3,
      &a3,
      &a4,
      (char *)&a2 + 3);
  }
  return -1073741823;
}
