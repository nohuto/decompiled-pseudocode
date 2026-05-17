/*
 * XREFs of _NtDuplicateToken@24 @ 0x4B2F2DA0
 * Callers:
 *     _RtlpTpInitializeData@12 @ 0x4B2B1FE2 (_RtlpTpInitializeData@12.c)
 *     _TppCritSetThread@4 @ 0x4B2B807E (_TppCritSetThread@4.c)
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlImpersonateSelfEx@12 @ 0x4B2EBF70 (_RtlImpersonateSelfEx@12.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _RtlpIsAppContainer@8 @ 0x4B3490A6 (_RtlpIsAppContainer@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtDuplicateToken(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Wow64SystemServiceCall();
}
