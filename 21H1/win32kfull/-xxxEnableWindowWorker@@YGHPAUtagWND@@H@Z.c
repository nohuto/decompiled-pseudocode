/*
 * XREFs of ?xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z @ 0x18A7C
 * Callers:
 *     _xxxEnableWindow@8 @ 0x18A3C (_xxxEnableWindow@8.c)
 *     _xxxDisableImmersiveOwner@4 @ 0x16F409 (_xxxDisableImmersiveOwner@4.c)
 * Callees:
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z @ 0x18B3C (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 */

BOOL __fastcall xxxEnableWindowWorker(int a1, unsigned int a2)
{
  int v4; // eax
  PriorityBoostCUI *v6; // [esp+0h] [ebp-18h]
  struct tagWND *v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+8h] [ebp-10h]
  int v9; // [esp+10h] [ebp-8h]
  char v10; // [esp+17h] [ebp-1h]

  v10 = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 8;
  if ( (v10 == 0) == a2 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    PriorityBoostCUI::UpdateProcessPriorityWhenEnableStateIsChanging(v6, v7, v8);
  }
  if ( a2 )
  {
    SetOrClrWF(3848, 0);
    v4 = 35329;
  }
  else
  {
    xxxSendMessage(0, 0);
    if ( a1 == *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 60) )
      xxxSetFocus(0);
    v4 = 3848;
  }
  SetOrClrWF(v4, 0);
  if ( v9 )
  {
    xxxWindowEvent(32778, a1, 0, 0, 0);
    xxxSendMessage(a2, 0);
  }
  return v10 != 0;
}
