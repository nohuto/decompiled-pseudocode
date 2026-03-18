/*
 * XREFs of SepDuplicateSid @ 0x140656A88
 * Callers:
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x14067EF50 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409258EC (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1409259EC (SepSetTokenUserAndGroups.c)
 * Callees:
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateSid(unsigned __int8 *SourceSid, _QWORD *a2)
{
  int v4; // eax
  ULONG v5; // ebp
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = SourceSid[1];
  *a2 = 0LL;
  v5 = 4 * v4 + 8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, SourceSid);
  result = 0LL;
  *a2 = v7;
  return result;
}
