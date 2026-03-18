/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x140717624
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140718CA8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140917930 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x140717660 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x140718BF0 (CmpGetVirtualizationIDFromFullVirtualPath.c)
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
