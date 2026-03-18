/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D3AFC
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C0202660 (NtUserSetSystemCursor.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C002F4F0 (CheckWinstaAttributeAccess.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079CA4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // rax
  unsigned int i; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (_WORD *)gasyscur[0];
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *v3 == (_WORD)a2 )
      break;
    v3 += 276;
  }
  if ( i == 19 || !(unsigned int)CheckWinstaAttributeAccess(16LL, a2, a3) )
    return 0;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
    return 0;
  }
  v17[2] = 0LL;
  v11 = *((_QWORD *)a1 + 6);
  v12 = gasyscur[69 * i + 1];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v17;
  v17[1] = v12;
  if ( v12 )
    HMLockObject(v12);
  zzzInternalSetSystemCursor(v11, i, 0LL, 3);
  ThreadUnlock1(v15, v14, v16);
  return 1;
}
