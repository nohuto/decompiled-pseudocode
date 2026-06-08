/*
 * XREFs of InitAcpiIdleStateSupport @ 0x1C0020610
 * Callers:
 *     <none>
 * Callees:
 *     InitMonitorMWaitSupport @ 0x1C0020650 (InitMonitorMWaitSupport.c)
 */

__int64 __fastcall InitAcpiIdleStateSupport(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 272) & 0x2000007F000LL) == 0 || (int)InitMonitorMWaitSupport(a1) < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_QWORD *)(a1 + 272) &= 0xFFFFFDFFFFF80FFFuLL;
  }
  return 0LL;
}
