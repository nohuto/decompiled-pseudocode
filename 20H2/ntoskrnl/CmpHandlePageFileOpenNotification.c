/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x1407C4A78
 * Callers:
 *     NtInitializeRegistry @ 0x140789720 (NtInitializeRegistry.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpGetNextActiveHive @ 0x140701140 (CmpGetNextActiveHive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C4BB4 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C4C94 (CmpVolumeManagerGetContextForFilePath.c)
 */

__int64 CmpHandlePageFileOpenNotification()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // edi
  int v5; // esi
  __int64 **v6; // rax
  _QWORD *v7; // r14
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rdi
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h]

  v12 = 0LL;
  v0 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( _InterlockedExchange(&CmpBootPageFilesCreated, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      v4 = 0;
      v5 = 0;
      if ( CmpWellKnownVolumeList )
      {
        v6 = &CmpWellKnownVolumeList;
        do
        {
          v7 = v6 + 1;
          if ( (int)CmpVolumeManagerGetContextForFilePath(
                      v2,
                      *v6,
                      v3,
                      v6 + 1,
                      v12,
                      *((_QWORD *)&v12 + 1),
                      v13,
                      *((_QWORD *)&v13 + 1),
                      v14,
                      *((_QWORD *)&v14 + 1)) >= 0
            && (int)CmpVolumeContextSendDeviceUsageNotification(*v7) >= 0 )
          {
            ++v4;
          }
          v6 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v5];
        }
        while ( *v6 );
        if ( v4 )
        {
          CmpAttachToRegistryProcess((__int64)&v12);
          for ( i = 0LL; ; i = v10 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
            if ( !NextActiveHive )
              break;
            CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
          }
          KiUnstackDetachProcess((__int64)&v12, 0);
        }
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)-1073741431;
    }
  }
  return v0;
}
