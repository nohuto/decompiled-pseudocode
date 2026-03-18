/*
 * XREFs of ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C01DFCE4
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E05C0 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x1C01D2A0C (IsPointerInputClientMessage.c)
 */

struct tagQMSG *__fastcall FindMsgInsertionPoint(struct tagQ *const a1, struct tagQMSG *const a2)
{
  __int64 *i; // rdi
  int v4; // edx
  int v5; // ecx
  unsigned int FrameIdFromPointerMsgId; // ebx

  for ( i = (__int64 *)*((_QWORD *)a1 + 3); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 12) > *((_DWORD *)a2 + 12) )
      break;
    if ( IsPointerInputClientMessage(*((_DWORD *)i + 6))
      && IsPointerInputClientMessage(*((_DWORD *)a2 + 6))
      && v4 != 595
      && v5 != 595 )
    {
      FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, i[5]);
      if ( FrameIdFromPointerMsgId > CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *((_QWORD *)a2 + 5)) )
        break;
    }
  }
  return (struct tagQMSG *)i;
}
