/*
 * XREFs of AcquireGL @ 0x1C0064F04
 * Callers:
 *     ParseAcquire @ 0x1C000A300 (ParseAcquire.c)
 * Callees:
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcquireGL(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax

  v1 = 0;
  if ( ghGlobalLock )
  {
    v3 = ghGlobalLock(5LL, 0LL, qword_1C00831B0, RestartCtxtCallback, a1 + 328);
    v1 = v3;
    if ( v3 == 259 )
    {
      return 32772;
    }
    else if ( v3 )
    {
      v1 = -1072431086;
      LogError(-1072431086);
      AcpiDiagTraceAmlError(a1, -1072431086);
      PrintDebugMessage(6, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v1;
}
