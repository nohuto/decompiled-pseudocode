/*
 * XREFs of HvlGetSharedPageVa @ 0x1402ED170
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1402ECFA0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140A579E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C00A00();
  return result;
}
