/*
 * XREFs of CmpQueryKeySecurity @ 0x14061A030
 * Callers:
 *     CmpSecurityMethod @ 0x140619DF0 (CmpSecurityMethod.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14061A1F0 (SeQuerySecurityDescriptorInfo.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14061CCF4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406260F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, DWORD *a2, void *a3, ULONG *a4, __int64 a5)
{
  char v5; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  BOOLEAN v14; // r14
  __int64 v15; // rdx
  int started; // ebx
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h] BYREF
  __int128 v25; // [rsp+38h] [rbp-40h]

  v5 = 0;
  v24 = 0LL;
  a5 = 0LL;
  v25 = 0LL;
  WORD1(v24) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v14 )
  {
    CmpLockRegistry();
    v5 = 1;
    started = CmpStartKcbStackForTopLayerKcb(&v24, a1[1]);
    if ( started < 0 )
      goto LABEL_10;
    CmpLockKcbStackShared(&v24);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_9;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &a5);
      if ( started < 0 || (v17 = a5, started = CmpPerformKeyBodyDeletionCheck((__int64)a1, a5), started < 0) )
      {
LABEL_9:
        CmpUnlockKcbStack(&v24);
        goto LABEL_10;
      }
    }
    else
    {
      v17 = a5;
    }
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(&v24, v17) + 32);
    started = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
    if ( started >= 0 )
      started = 0;
    goto LABEL_9;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  started = -1073741431;
LABEL_10:
  v18 = *((_QWORD *)&v25 + 1);
  if ( *((_QWORD *)&v25 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v25 + 1));
  if ( v5 )
    CmpUnlockRegistry(v18, v15);
  if ( v14 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
  }
  return (unsigned int)started;
}
