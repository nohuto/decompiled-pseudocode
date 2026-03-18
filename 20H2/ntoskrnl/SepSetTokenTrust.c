/*
 * XREFs of SepSetTokenTrust @ 0x14067EF50
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x1402E3768 (SepSetTrustLevelForProcessToken.c)
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x14067E0B0 (NtOpenThreadTokenEx.c)
 *     SeCopyClientToken @ 0x1406BA08C (SeCopyClientToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x140656A88 (SepDuplicateSid.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    result = SepDuplicateSid(a2, &v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v2 = v7;
  }
  v5 = *(void **)(a1 + 1104);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  *(_QWORD *)(a1 + 1104) = v2;
  return v3;
}
