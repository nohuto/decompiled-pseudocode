/*
 * XREFs of _NtAccessCheck@32 @ 0x4B2F2960
 * Callers:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtAccessCheck(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return Wow64SystemServiceCall();
}
