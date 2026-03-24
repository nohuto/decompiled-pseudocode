/*
 * XREFs of PerfInfoLogSysCallExit @ 0x1405AA3A0
 * Callers:
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiTrackSystemCallExit @ 0x1408BD210 (KiTrackSystemCallExit.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206540 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14025A84C (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D24 (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 __fastcall PerfInfoLogSysCallExit(__int64 a1)
{
  __int64 ThreadServerSilo; // r10
  int v4; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF

  v5[1] = 4LL;
  v4 = a1;
  v5[0] = &v4;
  if ( !KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)v5, 1, 0x40000040u, 3892, 5249026);
  return a1;
}
