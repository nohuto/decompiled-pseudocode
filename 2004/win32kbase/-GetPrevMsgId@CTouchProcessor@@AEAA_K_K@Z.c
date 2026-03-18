/*
 * XREFs of ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0194068
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC94 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C019D160 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CTouchProcessor::GetPrevMsgId(CTouchProcessor *this, __int64 *a2)
{
  while ( 1 )
  {
    a2 = (__int64 *)*a2;
    if ( !*((_WORD *)a2 + 8) )
      break;
    if ( (*((_DWORD *)a2 + 9) & 0x20) == 0 )
      return a2;
  }
  return 0LL;
}
