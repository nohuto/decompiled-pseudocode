/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033AE0
 * Callers:
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0004968 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0033A88 (PostShellHookMessagesEx.c)
 * Callees:
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00265D4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00938D0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

void __fastcall _PostShellHookMsgWorker(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  struct tagWND *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r8
  unsigned int v11[10]; // [rsp+30h] [rbp-28h] BYREF

  v11[0] = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 456LL);
  while ( 1 )
  {
    v8 = VWPLNextBase(*(struct tagVWPL **)(v9 + 240), a2, v8, v11);
    if ( !v8 )
      break;
    if ( a1 == *(_DWORD *)(gpsi + 928LL) && v8 == *(struct tagWND **)(v9 + 200) )
    {
      if ( a2 == 1 )
      {
        v10 = (unsigned int)guiOtherWindowCreated;
LABEL_11:
        PostMessage(v8, a1, v10, a3);
      }
      else if ( a2 == 2 )
      {
        v10 = (unsigned int)guiOtherWindowDestroyed;
        goto LABEL_11;
      }
    }
    else
    {
      _PostTransformableMessageExtended(v8, a1, a2, a3, a4, 1);
    }
  }
}
