/*
 * XREFs of SepDuplicateSid @ 0x140625978
 * Callers:
 *     SepSetTokenTrust @ 0x140667740 (SepSetTokenTrust.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     SepDuplicateTokenUserAndGroups @ 0x14091FACC (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x14091FBCC (SepSetTokenUserAndGroups.c)
 * Callees:
 *     RtlCopySid @ 0x140625AA0 (RtlCopySid.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
