/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x1405A4740
 * Callers:
 *     KiSystemCall64 @ 0x1404072C0 (KiSystemCall64.c)
 *     KiTrackSystemCallEntry @ 0x1408B88B0 (KiTrackSystemCallEntry.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1402A8CA4 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
  EtwTraceSiloKernelEvent(ThreadServerSilo, (__int64)&v5, 1u, 0x40000040u, 0xF33u, 0x501802u);
  return a1;
}
