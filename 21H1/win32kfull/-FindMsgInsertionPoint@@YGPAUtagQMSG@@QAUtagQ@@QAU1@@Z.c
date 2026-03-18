/*
 * XREFs of ?FindMsgInsertionPoint@@YGPAUtagQMSG@@QAUtagQ@@QAU1@@Z @ 0x14CEA3
 * Callers:
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 * Callees:
 *     _IsPointerInputClientMessage@4 @ 0xAEE84 (_IsPointerInputClientMessage@4.c)
 */

struct tagQMSG *__fastcall FindMsgInsertionPoint(int a1, unsigned int *a2)
{
  _DWORD *i; // edi
  int v4; // edx
  int v5; // ecx
  unsigned int FrameIdFromPointerMsgId; // esi

  for ( i = *(_DWORD **)(a1 + 12); i; i = (_DWORD *)*i )
  {
    if ( i[6] > a2[6] )
      break;
    if ( IsPointerInputClientMessage(i[3]) )
    {
      if ( IsPointerInputClientMessage(a2[3]) )
      {
        if ( v4 != 595 && v5 != 595 )
        {
          FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(_gpTouchProcessor, i[5]);
          if ( FrameIdFromPointerMsgId > CTouchProcessor::GetFrameIdFromPointerMsgId(_gpTouchProcessor, a2[5]) )
            break;
        }
      }
    }
  }
  return (struct tagQMSG *)i;
}
