/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x14064013C
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x14063F498 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x14086DB28 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x140640178 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x14064140C (CmpGetVirtualizationIDFromFullVirtualPath.c)
 */

__int64 __fastcall CmpGetCmHiveFromVirtualPath(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  result = CmpGetVirtualizationIDFromFullVirtualPath(a1, &v4);
  if ( (int)result >= 0 )
    return CmpGetMappingHiveForString(&v4, a2);
  return result;
}
