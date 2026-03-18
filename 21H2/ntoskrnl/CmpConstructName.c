/*
 * XREFs of CmpConstructName @ 0x1407C05CC
 * Callers:
 *     CmpDoQueryKeyName @ 0x140346910 (CmpDoQueryKeyName.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmRealKCBToVirtualPath @ 0x14077CB98 (CmRealKCBToVirtualPath.c)
 * Callees:
 *     CmpConstructNameWithStatus @ 0x1407C0690 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  CmpConstructNameWithStatus(a1, &v2);
  return v2;
}
