/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00C9A9C
 * Callers:
 *     xxxEnableWindow @ 0x1C00C9A30 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C0208D18 (xxxDisableImmersiveOwner.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C00C76C4 (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rsi
  char v5; // r14
  int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8

  v2 = 0;
  v3 = (int)a2;
  v5 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  if ( (v5 == 0) == a2 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    PriorityBoostCUI::UpdateProcessPriorityWhenEnableStateIsChanging(a1, (struct tagWND *)a2);
  }
  if ( (_DWORD)v3 )
  {
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) &= ~8u;
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) &= ~1u;
  }
  else
  {
    xxxSendMessage((unsigned __int64)a1, 0x1Fu, 0LL, 0LL);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
      xxxSetFocus(0LL, v8, v9);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) |= 8u;
  }
  if ( v6 )
  {
    xxxWindowEvent(0x800Au, 0);
    xxxSendMessage((unsigned __int64)a1, 0xAu, v3, 0LL);
  }
  LOBYTE(v2) = v5 != 0;
  return v2;
}
