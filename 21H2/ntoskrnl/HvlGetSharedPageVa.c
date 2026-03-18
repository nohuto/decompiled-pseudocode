/*
 * XREFs of HvlGetSharedPageVa @ 0x140262490
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140B0A680 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C02050();
  return result;
}
