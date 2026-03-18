/*
 * XREFs of CmpCheckKcbStackAccess @ 0x14086E3B0
 * Callers:
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405E76D4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406F5B60 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckKcbStackAccess(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 SecurityCacheEntryForKcbStack; // rax

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2);
  return CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32), a3, a4, a5);
}
