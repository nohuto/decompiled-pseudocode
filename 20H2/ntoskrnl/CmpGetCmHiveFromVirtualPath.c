/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x1407014A4
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406FDF6C (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140873614 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1407013EC (CmpGetVirtualizationIDFromFullVirtualPath.c)
 *     CmpGetMappingHiveForString @ 0x1407014E0 (CmpGetMappingHiveForString.c)
 */

__int64 __fastcall CmpGetCmHiveFromVirtualPath(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v4[12]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  result = CmpGetVirtualizationIDFromFullVirtualPath(a1, v4);
  if ( (int)result >= 0 )
    return CmpGetMappingHiveForString(v4, a2);
  return result;
}
