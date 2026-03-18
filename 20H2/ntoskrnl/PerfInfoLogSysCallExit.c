/*
 * XREFs of PerfInfoLogSysCallExit @ 0x1405A8970
 * Callers:
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     KiTrackSystemCallExit @ 0x1408BFA50 (KiTrackSystemCallExit.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1402339FC (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F1894 (KeIsExecutingInArbitraryThreadContext.c)
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
  EtwTraceSiloKernelEvent(ThreadServerSilo, (__int64)v5, 1u, 0x40000040u, 0xF34u, 0x501802u);
  return a1;
}
