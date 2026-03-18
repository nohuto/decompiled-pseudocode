/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YGHPAUtagQ@@PAUtagQMSG@@KKKK@Z @ 0x16F1B8
 * Callers:
 *     _EditionIsPointerQueuedMessageCoalescable@124 @ 0xF35BE (_EditionIsPointerQueuedMessageCoalescable@124.c)
 * Callees:
 *     _IsPointerInputMessageWithState@4 @ 0x439B4 (_IsPointerInputMessageWithState@4.c)
 */

int __userpurge IsPointerQueuedMessageCoalescable@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagQ *a3,
        struct tagQMSG *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  _DWORD *v8; // esi
  int v9; // eax
  struct tagQMSG *FrameIdFromPointerMsgId; // eax

  if ( a1 )
    v8 = *(_DWORD **)(a1 + 4);
  else
    v8 = *(_DWORD **)(a2 + 16);
  while ( 1 )
  {
    if ( !v8 )
      return 0;
    if ( v8[3] != 512 )
      break;
    v9 = v8[20];
    if ( (v9 != 4 || a6 != 2) && (v9 != 8 || a6 != 3) && (v9 != 16 || a6 != 5) && v8[21] != 4 )
      break;
LABEL_16:
    v8 = (_DWORD *)v8[1];
  }
  if ( !IsPointerInputMessageWithState() )
    return 0;
  if ( v8[5] != a5 )
  {
    FrameIdFromPointerMsgId = (struct tagQMSG *)CTouchProcessor::GetFrameIdFromPointerMsgId(_gpTouchProcessor, v8[5]);
    if ( FrameIdFromPointerMsgId != a4 && FrameIdFromPointerMsgId != a3 )
      return 0;
    goto LABEL_16;
  }
  return 1;
}
