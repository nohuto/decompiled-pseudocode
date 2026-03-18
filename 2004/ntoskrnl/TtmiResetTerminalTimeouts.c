/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x1408FA514
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1408F8C00 (TtmNotifyDeviceInput.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408FB50C (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FB614 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionTerminalInput @ 0x1408FBAA4 (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x1408FA754 (TtmiSetPendingOnOffRequest.c)
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
