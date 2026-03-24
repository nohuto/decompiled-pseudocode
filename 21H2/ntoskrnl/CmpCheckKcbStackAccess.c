/*
 * XREFs of CmpCheckKcbStackAccess @ 0x1408716E4
 * Callers:
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405EF460 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406A5CB0 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckKcbStackAccess(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 SecurityCacheEntryForKcbStack; // rax

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
  return CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32), a3, a4, a5);
}
