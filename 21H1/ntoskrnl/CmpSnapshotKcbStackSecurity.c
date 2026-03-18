/*
 * XREFs of CmpSnapshotKcbStackSecurity @ 0x14086D210
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14061CCF4 (CmpGetSecurityCacheEntryForKcbStack.c)
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
