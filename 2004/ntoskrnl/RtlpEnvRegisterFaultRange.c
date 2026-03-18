/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x14039AD2C
 * Callers:
 *     RtlCSparseBitmapCleanup @ 0x14038A2E0 (RtlCSparseBitmapCleanup.c)
 *     RtlCSparseBitmapStart @ 0x14039ABC0 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x14039AD78 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
