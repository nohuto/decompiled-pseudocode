/*
 * XREFs of PopPepNotifyIdleState @ 0x1403A4120
 * Callers:
 *     PopPluginComponentIdleState @ 0x1403A40C4 (PopPluginComponentIdleState.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1402D4C54 (PopPepProcessEvent.c)
 *     PopPlNotifyDeviceFState @ 0x1403A41B8 (PopPlNotifyDeviceFState.c)
 *     PopPluginNotifyIdleState @ 0x14056BFC0 (PopPluginNotifyIdleState.c)
 */

char __fastcall PopPepNotifyIdleState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  __int64 v6; // r14
  __int64 v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a4;
  v8 = a1 + 200LL * a2;
  if ( !*(_BYTE *)(a1 + 124)
    || (LOBYTE(a4) = 1,
        (unsigned __int8)PopPluginNotifyIdleState(
                           *(_QWORD *)(a1 + 32),
                           *(unsigned int *)(v8 + 192),
                           *(unsigned int *)(v8 + 360),
                           a4)) )
  {
    v5 = PopPepProcessEvent(a1, (volatile LONG *)(v8 + 184), 1, 6u, v10, v6);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(v8 + 364), *(_DWORD *)(v8 + 360), 1);
  }
  return v5;
}
