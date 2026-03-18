/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x140900138
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1408FE810 (TtmNotifyDeviceInput.c)
 *     TtmNotifyConsoleUserPresent @ 0x140901134 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayBurst @ 0x14090123C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionTerminalInput @ 0x1409016CC (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x140900378 (TtmiSetPendingOnOffRequest.c)
 */

char __fastcall TtmiResetTerminalTimeouts(int a1, __int64 a2, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // r9d

  *(_QWORD *)(a2 + 80) = MEMORY[0xFFFFF78000000008];
  v5 = *(_DWORD *)(a2 + 40);
  if ( (v5 == 3 || !a5) && v5 != 2 )
    return 0;
  v6 = a3;
  LOBYTE(a3) = 1;
  TtmiSetPendingOnOffRequest(a1, a2, a3, v6, a4);
  return 1;
}
