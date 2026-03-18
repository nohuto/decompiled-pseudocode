/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D490C
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C02034D0 (NtUserSetSystemCursor.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD00 (CheckWinstaAttributeAccess.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0042E40 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int16 a2)
{
  _WORD *v2; // rax
  unsigned int i; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_WORD *)gasyscur[0];
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *v2 == a2 )
      break;
    v2 += 276;
  }
  if ( i == 19 || !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
    return 0;
  }
  v14[2] = 0LL;
  v8 = *((_QWORD *)a1 + 6);
  v9 = gasyscur[69 * i + 1];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v14;
  v14[1] = v9;
  if ( v9 )
    HMLockObject(v9);
  zzzInternalSetSystemCursor(v8, i, 0LL, 3);
  ThreadUnlock1(v12, v11, v13);
  return 1;
}
