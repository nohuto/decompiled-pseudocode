/*
 * XREFs of HvlGetSharedPageVa @ 0x14029E4C0
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x14029E2F0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140A589E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C00A00();
  return result;
}
