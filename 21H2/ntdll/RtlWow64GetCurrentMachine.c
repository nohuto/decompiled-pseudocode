/*
 * XREFs of RtlWow64GetCurrentMachine @ 0x180051E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlWow64GetCurrentCpuArea @ 0x180052F00 (RtlWow64GetCurrentCpuArea.c)
 */

USHORT RtlWow64GetCurrentMachine(void)
{
  USHORT v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = -31132;
  if ( NtCurrentTeb()->WowTebOffset > 0 )
    RtlWow64GetCurrentCpuArea(&v1, 0LL, 0LL);
  return v1;
}
