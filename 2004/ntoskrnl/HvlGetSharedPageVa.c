/*
 * XREFs of HvlGetSharedPageVa @ 0x1402FFAA0
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1402FF8D0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140A55D3C (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C00A00();
  return result;
}
