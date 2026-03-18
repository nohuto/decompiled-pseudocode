/*
 * XREFs of CmpConstructName @ 0x14061DE38
 * Callers:
 *     CmpDoQueryKeyName @ 0x14025BE50 (CmpDoQueryKeyName.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14068B1C0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086A030 (CmpIsHiveAlreadyLoaded.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  CmpConstructNameWithStatus(a1, &v2);
  return v2;
}
