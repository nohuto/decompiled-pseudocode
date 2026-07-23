/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x1407C9058
 * Callers:
 *     NtInitializeRegistry @ 0x14078D6C0 (NtInitializeRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F73C0 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9194 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C9274 (CmpVolumeManagerGetContextForFilePath.c)
 */

__int64 CmpHandlePageFileOpenNotification()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edi
  int v7; // esi
  __int64 **v8; // rax
  _QWORD *v9; // r14
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h]

  v17 = 0LL;
  v0 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( _InterlockedExchange(&CmpBootPageFilesCreated, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      v6 = 0;
      v7 = 0;
      if ( CmpWellKnownVolumeList )
      {
        v8 = &CmpWellKnownVolumeList;
        do
        {
          v9 = v8 + 1;
          if ( (int)CmpVolumeManagerGetContextForFilePath(
                      v3,
                      *v8,
                      v4,
                      v8 + 1,
                      v17,
                      *((_QWORD *)&v17 + 1),
                      v18,
                      *((_QWORD *)&v18 + 1),
                      v19,
                      *((_QWORD *)&v19 + 1)) >= 0
            && (int)CmpVolumeContextSendDeviceUsageNotification(*v9) >= 0 )
          {
            ++v6;
          }
          v8 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v7];
        }
        while ( *v8 );
        if ( v6 )
        {
          CmpAttachToRegistryProcess((__int64)&v17);
          for ( i = 0LL; ; i = v12 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v12 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
            if ( !NextActiveHive )
              break;
            CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
          }
          KiUnstackDetachProcess((__int64)&v17, 0LL);
        }
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v4, v5);
      return (unsigned int)-1073741431;
    }
  }
  return v0;
}
