/*
 * XREFs of ?InkProcessorProcessInkFeedbackCommand@@YGJIPAXI@Z @ 0x1838DD
 * Callers:
 *     _NtUserProcessInkFeedbackCommand@12 @ 0x167B4C (_NtUserProcessInkFeedbackCommand@12.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AC2B0 (-ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 */

int __userpurge InkProcessorProcessInkFeedbackCommand@<eax>(
        int a1@<edx>,
        struct tagPOINTER_INFO **a2@<ecx>,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  struct tagPOINTER_INFO **v5; // eax
  int v6; // esi
  int v8; // [esp+4h] [ebp-4h] BYREF

  v5 = a2;
  if ( (unsigned int)a2 < 5 )
  {
    a2 = InkProcessor::s_pInstance;
    if ( InkProcessor::s_pInstance )
    {
      v6 = InkProcessor::ProcessInkFeedbackCommand(v5, a1, a3);
      if ( v6 < 0 && (unsigned int)CallbackContext > 2 )
        goto LABEL_9;
    }
    else
    {
      v6 = -1073741823;
      if ( (unsigned int)CallbackContext > 2 )
        goto LABEL_9;
    }
  }
  else
  {
    v6 = -1073741811;
    if ( (unsigned int)CallbackContext > 2 )
    {
LABEL_9:
      v8 = v6;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        byte_2558E4,
        (int)a2,
        (int)a2,
        (int)&v8);
    }
  }
  return v6;
}
