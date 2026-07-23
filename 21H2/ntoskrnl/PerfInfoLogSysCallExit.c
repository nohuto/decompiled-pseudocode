/*
 * XREFs of PerfInfoLogSysCallExit @ 0x1405AA5D0
 * Callers:
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     KiTrackSystemCallExit @ 0x1408BD370 (KiTrackSystemCallExit.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74 (KeIsExecutingInArbitraryThreadContext.c)
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
