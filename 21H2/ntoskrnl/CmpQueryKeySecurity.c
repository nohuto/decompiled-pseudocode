/*
 * XREFs of CmpQueryKeySecurity @ 0x140665360
 * Callers:
 *     CmpSecurityMethod @ 0x140665120 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405EF460 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140665520 (SeQuerySecurityDescriptorInfo.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1406FB3E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, ULONG *a2, void *a3, ULONG *a4, __int64 a5)
{
  char v5; // si
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // r14
  __int64 v12; // rdx
  int started; // ebx
  __int64 v14; // rbp
  __int64 v15; // rcx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+20h] [rbp-58h] BYREF
  __int128 v18; // [rsp+28h] [rbp-50h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h]

  v5 = 0;
  v18 = 0LL;
  a5 = 0LL;
  v19 = 0LL;
  WORD1(v18) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v11 )
  {
    CmpLockRegistry();
    v5 = 1;
    started = CmpStartKcbStackForTopLayerKcb(&v18, a1[1]);
    if ( started < 0 )
      goto LABEL_10;
    CmpLockKcbStackShared(&v18);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_9;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &a5);
      if ( started < 0 || (v14 = a5, started = CmpPerformKeyBodyDeletionCheck((__int64)a1, a5), started < 0) )
      {
LABEL_9:
        CmpUnlockKcbStack(&v18);
        goto LABEL_10;
      }
    }
    else
    {
      v14 = a5;
    }
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack((__int64)&v18, v14, 0LL) + 32);
    started = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
    if ( started >= 0 )
      started = 0;
    goto LABEL_9;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  started = -1073741431;
LABEL_10:
  v15 = *((_QWORD *)&v19 + 1);
  if ( *((_QWORD *)&v19 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v19 + 1));
  if ( v5 )
    CmpUnlockRegistry(v15, v12);
  if ( v11 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
