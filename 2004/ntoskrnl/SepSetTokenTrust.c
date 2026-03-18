/*
 * XREFs of SepSetTokenTrust @ 0x140667740
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x140269868 (SepSetTrustLevelForProcessToken.c)
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x1406668A0 (NtOpenThreadTokenEx.c)
 *     SeCopyClientToken @ 0x1406E2A38 (SeCopyClientToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x140625978 (SepDuplicateSid.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
