/*
 * XREFs of CmpConstructName @ 0x1405F2FBC
 * Callers:
 *     CmpDoQueryKeyName @ 0x14027EBD0 (CmpDoQueryKeyName.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14066CCFC (CmpSetSecurityDescriptorInfo.c)
 *     CmRealKCBToVirtualPath @ 0x140672A9C (CmRealKCBToVirtualPath.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpLinkHiveToMaster @ 0x14071E230 (CmpLinkHiveToMaster.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E5DC (CmpIsHiveAlreadyLoaded.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpConstructNameWithStatus @ 0x1405F2FF0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  CmpConstructNameWithStatus(a1, &v2);
  return v2;
}
