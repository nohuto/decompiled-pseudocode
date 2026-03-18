/*
 * XREFs of SepSetTokenTrust @ 0x1405E1440
 * Callers:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x140339568 (SepSetTrustLevelForProcessToken.c)
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 *     SeCopyClientToken @ 0x1406C24B8 (SeCopyClientToken.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x14066B098 (SepDuplicateSid.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  void *v4; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( !a2 || (result = SepDuplicateSid(a2), v2 = result, (int)result >= 0) )
  {
    v4 = *(void **)(a1 + 1104);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 1104) = 0LL;
    return v2;
  }
  return result;
}
