/*
 * XREFs of PopInitSystemSleeperThread @ 0x140775A28
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1406EE080 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall PopInitSystemSleeperThread(LONG a1, struct _KEVENT *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+50h] [rbp-38h] BYREF
  __int64 v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+68h] [rbp-20h]
  int v7; // [rsp+6Ch] [rbp-1Ch]
  __int128 v8; // [rsp+70h] [rbp-18h]
  HANDLE Handle; // [rsp+98h] [rbp+10h] BYREF

  DWORD1(v4) = 0;
  v7 = 0;
  Handle = 0LL;
  a2[3].Header.LockNV = a1;
  KeInitializeEvent(a2, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 1, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 2, SynchronizationEvent, 0);
  *((_QWORD *)&v4 + 1) = 0LL;
  v5 = 0LL;
  LODWORD(v4) = 48;
  v6 = 512;
  v8 = 0LL;
  result = PsCreateSystemThreadEx(
             (__int64)&Handle,
             0,
             &v4,
             0LL,
             0LL,
             (__int64)PopTransitionToSleep,
             (__int64)a2,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    ZwClose(Handle);
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
    return 0LL;
  }
  return result;
}
