/*
 * XREFs of CmpConstructName @ 0x1405E8818
 * Callers:
 *     CmpDoQueryKeyName @ 0x140202F30 (CmpDoQueryKeyName.c)
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086B380 (CmpIsHiveAlreadyLoaded.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpConstructNameWithStatus @ 0x1405E8840 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  CmpConstructNameWithStatus(a1, &v2);
  return v2;
}
