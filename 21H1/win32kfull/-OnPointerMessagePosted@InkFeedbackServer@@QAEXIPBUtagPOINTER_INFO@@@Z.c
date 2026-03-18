/*
 * XREFs of ?OnPointerMessagePosted@InkFeedbackServer@@QAEXIPBUtagPOINTER_INFO@@@Z @ 0xF57D4
 * Callers:
 *     ?OnPointerMessagePosted@InkProcessor@@QAEXIK@Z @ 0x1AC217 (-OnPointerMessagePosted@InkProcessor@@QAEXIK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

void __thiscall InkFeedbackServer::OnPointerMessagePosted(
        InkFeedbackServer **this,
        unsigned int a2,
        const struct tagPOINTER_INFO *a3)
{
  const struct tagPOINTER_INFO *v4; // ebx
  InkFeedbackServer *i; // esi

  if ( a2 == 583 || a2 == 594 )
  {
    v4 = a3;
    if ( a3 )
    {
      for ( i = *this; i != (InkFeedbackServer *)this; i = *(InkFeedbackServer **)i )
        (*(void (__thiscall **)(int, _DWORD))(*((_DWORD *)i - 1) + 8))((int)i - 4, *((_DWORD *)v4 + 1));
    }
    else if ( (unsigned int)CallbackContext > 2 )
    {
      a2 = -1073741823;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        (int)&unk_2558E4,
        (int)this,
        (int)this,
        (int)&a2);
    }
  }
}
