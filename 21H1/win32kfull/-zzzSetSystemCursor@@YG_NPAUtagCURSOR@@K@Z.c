/*
 * XREFs of ?zzzSetSystemCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x143292
 * Callers:
 *     _NtUserSetSystemCursor@8 @ 0x169C8E (_NtUserSetSystemCursor@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

char __fastcall zzzSetSystemCursor(int a1, __int16 a2)
{
  _WORD *v2; // eax
  unsigned int i; // esi
  int v6; // ebx
  int v7; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v10[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = (_WORD *)_gasyscur[0];
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *v2 == a2 )
      break;
    v2 += 268;
  }
  if ( i == 19 || !CheckWinstaAttributeAccess(0x10u) )
    return 0;
  if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    return 0;
  }
  v10[2] = 0;
  v6 = *(_DWORD *)(a1 + 24);
  v7 = _gasyscur[134 * i + 1];
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v10;
  v10[1] = v7;
  if ( v7 )
    HMLockObject(v7);
  zzzInternalSetSystemCursor(v6, i, 0, 3);
  ThreadUnlock1();
  return 1;
}
