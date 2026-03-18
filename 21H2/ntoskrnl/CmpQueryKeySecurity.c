/*
 * XREFs of CmpQueryKeySecurity @ 0x140721254
 * Callers:
 *     CmpSecurityMethod @ 0x140721010 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1407213B0 (SeQuerySecurityDescriptorInfo.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpQueryKeySecurity(
        _QWORD *a1,
        ULONG *a2,
        void *a3,
        ULONG *a4,
        PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v8; // rsi
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r15
  int started; // ebx
  PPRIVILEGE_SET v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-10h]

  ObjectsSecurityDescriptor = 0LL;
  v17 = 0LL;
  WORD1(v17) = -1;
  v8 = 0LL;
  v9 = 0;
  *(_OWORD *)Privileges = 0LL;
  v13 = CmpAcquireShutdownRundown(a1, a2, a3);
  if ( v13 )
  {
    CmpLockRegistry();
    v9 = 1;
    started = CmpStartKcbStackForTopLayerKcb(&v17, a1[1]);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(&v17);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        if ( !a1[7] && !a1[8]
          || (started = CmpTransSearchAddTransFromKeyBody(a1, &ObjectsSecurityDescriptor), started >= 0)
          && (v8 = ObjectsSecurityDescriptor,
              started = CmpPerformKeyBodyDeletionCheck(a1, ObjectsSecurityDescriptor),
              started >= 0) )
        {
          ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(&v17, v8, 0LL) + 32);
          started = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
          if ( started >= 0 )
            started = 0;
        }
      }
      CmpUnlockKcbStack(&v17);
    }
  }
  else
  {
    started = -1073741431;
  }
  v15 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v9 )
    CmpUnlockRegistry(v15, v10, v11, v12);
  if ( v13 )
    CmpReleaseShutdownRundown();
  return (unsigned int)started;
}
