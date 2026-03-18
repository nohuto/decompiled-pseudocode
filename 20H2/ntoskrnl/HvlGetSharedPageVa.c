/*
 * XREFs of HvlGetSharedPageVa @ 0x1403608D0
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x140360700 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140A563BC (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C00A00();
  return result;
}
