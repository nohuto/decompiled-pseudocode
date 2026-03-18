/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x1405A4E30
 * Callers:
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     KiTrackSystemCallEntry @ 0x1408B9BD0 (KiTrackSystemCallEntry.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14024FC74 (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallEntry(__int64 a1)
{
  __int64 ThreadServerSilo; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v4 = a1;
  v5 = &v4;
  v7 = 0;
  v6 = 8;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&v5, 1, 0x40000040u, 3891, 5249026);
  return a1;
}
