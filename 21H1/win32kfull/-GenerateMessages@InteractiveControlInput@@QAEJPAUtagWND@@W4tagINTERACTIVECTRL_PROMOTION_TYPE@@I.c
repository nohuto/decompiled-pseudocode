/*
 * XREFs of ?GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1B2F74
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z @ 0x1B1E80 (-FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IAEJPAUtagWND@@I@Z @ 0x1B2E90 (-GenerateCtrlInputMessages@InteractiveControlInput@@IAEJPAUtagWND@@I@Z.c)
 *     ?HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2FF7 (-HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_I.c)
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 */

int __thiscall InteractiveControlInput::GenerateMessages(int this, struct tagWND *a2, int a3, unsigned int a4)
{
  int v5; // ecx
  _DWORD v8[7]; // [esp-24h] [ebp-38h] BYREF
  unsigned int v9; // [esp-8h] [ebp-1Ch]
  int v10; // [esp-4h] [ebp-18h]
  InteractiveControlInput *v11; // [esp+10h] [ebp-4h]
  int v12; // [esp+20h] [ebp+Ch]

  v11 = (InteractiveControlInput *)this;
  if ( a2 )
    v5 = *(_DWORD *)a2;
  else
    v5 = 0;
  v10 = a3;
  v9 = a4;
  *(_DWORD *)(this + 8) = v5;
  v12 = this + 32;
  *(_DWORD *)(this + 28) = a3;
  qmemcpy(v8, (const void *)(this + 32), sizeof(v8));
  HandleIntObjUsageTelemetry(**(_DWORD **)(this + 24), v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v10);
  if ( (unsigned int)(a3 - 1) > 1 )
    return InteractiveControlInput::GenerateCtrlInputMessages(v11, a2, a4);
  if ( (a4 & 0x80u) == 0 )
    return 0;
  return InteractiveControlDefaultScroller::GenerateMessages(*((_DWORD *)v11 + 6) + 200, v12, *((_DWORD *)v11 + 7));
}
