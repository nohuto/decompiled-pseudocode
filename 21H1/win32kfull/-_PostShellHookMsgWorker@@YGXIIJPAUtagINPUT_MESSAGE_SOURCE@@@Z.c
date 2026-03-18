/*
 * XREFs of ?_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1718E
 * Callers:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     ?xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z @ 0xC26E2 (-xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z @ 0x6FC58 (-VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z.c)
 */

void __userpurge _PostShellHookMsgWorker(
        struct tagWND *a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagINPUT_MESSAGE_SOURCE *a6)
{
  int v7; // ebx
  struct tagWND *i; // eax
  struct tagVWPL *v9; // esi
  int v10; // [esp+0h] [ebp-18h]
  struct tagINPUT_MESSAGE_SOURCE *v11; // [esp+0h] [ebp-18h]
  unsigned int *v12; // [esp+4h] [ebp-14h]
  unsigned int *v13; // [esp+4h] [ebp-14h]
  unsigned int v15; // [esp+14h] [ebp-4h] BYREF

  v15 = 0;
  v7 = *(_DWORD *)(_gptiCurrent + 252);
  for ( i = VWPLNextBase(0, (unsigned int)&v15, *(struct tagWND **)(v7 + 120), *(unsigned int **)(v7 + 120), v10, v12);
        ;
        i = VWPLNextBase(
              v9,
              (unsigned int)&v15,
              *(struct tagWND **)(v7 + 120),
              *(unsigned int **)(v7 + 120),
              (int)v11,
              v13) )
  {
    v9 = i;
    if ( !i )
      break;
    if ( a2 == *(_DWORD *)(_gpsi + 528) && i == *(struct tagWND **)(v7 + 100) )
    {
      if ( a1 == (struct tagWND *)1 )
      {
        _PostMessage(i, a2, guiOtherWindowCreated, a3);
      }
      else if ( a1 == (struct tagWND *)2 )
      {
        _PostMessage(i, a2, guiOtherWindowDestroyed, a3);
      }
    }
    else
    {
      _PostTransformableMessageExtended(a1, a3, a4, 1, v11, (int)v13);
    }
  }
}
