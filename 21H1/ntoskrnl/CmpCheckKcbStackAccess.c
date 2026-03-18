/*
 * XREFs of CmpCheckKcbStackAccess @ 0x14086C8F0
 * Callers:
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14061CCF4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D2F90 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckKcbStackAccess(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 SecurityCacheEntryForKcbStack; // rax

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2);
  return CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32), a3, a4, a5);
}
