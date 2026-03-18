/*
 * XREFs of ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z @ 0x19FDC6
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 */

void __thiscall CMoveSizeRequest::xxxSendSysCommandToWindow(CMoveSizeRequest *this, struct tagWND *BugCheckParameter2)
{
  unsigned int v3; // esi
  int v4; // ecx

  zzzSetCursor((void *)_gasyscur[134 * dword_258978[*(_DWORD *)this] + 1]);
  v3 = HighLimit[*(_DWORD *)this];
  SetOrClrWF(1, (int)BugCheckParameter2, 0x8920u, 0);
  v4 = *(unsigned __int16 *)(_gptiCurrent + 416) | (*(unsigned __int16 *)(_gptiCurrent + 420) << 16);
  _InterlockedIncrement(&glSendMessage);
  xxxSendTransformableMessageTimeout((int)BugCheckParameter2, 0x112u, v3, v4, 0, 0, 0, 1u, 0);
  SetOrClrWF(0, (int)BugCheckParameter2, 0x8920u, 1);
}
