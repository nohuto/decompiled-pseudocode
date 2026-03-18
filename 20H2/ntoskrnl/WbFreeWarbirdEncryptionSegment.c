/*
 * XREFs of WbFreeWarbirdEncryptionSegment @ 0x1405D4BB8
 * Callers:
 *     sub_1405D4314 @ 0x1405D4314 (sub_1405D4314.c)
 *     WbFreeWarbirdProcess @ 0x14065CF10 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbFreeWarbirdEncryptionSegment(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( P )
  {
    v2 = (void *)P[5];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x42524157u);
    v3 = (void *)P[7];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x42524157u);
    ExFreePoolWithTag(P, 0x42524157u);
  }
  return 0LL;
}
