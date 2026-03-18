/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x14039A59C
 * Callers:
 *     RtlCSparseBitmapCleanup @ 0x140389270 (RtlCSparseBitmapCleanup.c)
 *     RtlCSparseBitmapStart @ 0x14039A430 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x14039A5E8 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
