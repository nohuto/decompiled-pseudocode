/*
 * XREFs of ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0242A68
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

void __fastcall CMoveSizeRequest::xxxSendSysCommandToWindow(CMoveSizeRequest *this, struct tagWND *a2)
{
  CMoveSizeRequest *v2; // rbx
  struct _LARGE_STRING *v4; // r9

  v2 = this;
  zzzSetCursor((struct tagCURSOR *)gasyscur[69 * (unsigned int)dword_1C02F5C00[*(int *)this] + 1]);
  LODWORD(v2) = dword_1C02F5BD8[*(int *)v2];
  SetOrClrWF(1, (__int64)a2, 0xD920u, 0);
  v4 = (struct _LARGE_STRING *)(*(unsigned __int16 *)(gptiCurrent + 756LL) | ((unsigned __int64)*(unsigned __int16 *)(gptiCurrent + 760LL) << 16));
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout((unsigned __int64)a2, 0x112u, (unsigned int)v2, v4, 0, 0, 0LL, 1, 0);
  SetOrClrWF(0, (__int64)a2, 0xD920u, 1);
}
