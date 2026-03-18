/*
 * XREFs of CmpSnapshotKcbStackSecurity @ 0x14086ECD0
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405E76D4 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpSnapshotKcbStackSecurity(__int64 a1, __int64 a2, ULONG a3, _QWORD *a4)
{
  __int64 SecurityCacheEntryForKcbStack; // rdi
  PLOOKASIDE_LIST_EX v7; // r9
  PVOID TransientPoolWithTag; // rax
  unsigned int v9; // ebx
  PVOID v10; // rsi

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(
                           PagedPool,
                           *(unsigned int *)(SecurityCacheEntryForKcbStack + 24),
                           a3,
                           v7);
  v9 = 0;
  v10 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memmove(
      TransientPoolWithTag,
      (const void *)(SecurityCacheEntryForKcbStack + 32),
      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
    *a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
