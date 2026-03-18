/*
 * XREFs of HvlGetSharedPageVa @ 0x1402DEB80
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1402DE9B0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140A5003C (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C00A00();
  return result;
}
