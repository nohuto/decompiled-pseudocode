/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x1407B30D8
 * Callers:
 *     NtInitializeRegistry @ 0x140778D10 (NtInitializeRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402E0F40 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B3214 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407B32F4 (CmpVolumeManagerGetContextForFilePath.c)
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
  __int64 v10; // rdx
  _DWORD *v11; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v14; // r8
  _DWORD *v15; // r9
  struct _EX_RUNDOWN_REF *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  __int128 v22; // [rsp+30h] [rbp-38h]
  __int128 v23; // [rsp+40h] [rbp-28h]

  v21 = 0LL;
  v0 = 0;
  v22 = 0LL;
  v23 = 0LL;
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
                      v21,
                      *((_QWORD *)&v21 + 1),
                      v22,
                      *((_QWORD *)&v22 + 1),
                      v23,
                      *((_QWORD *)&v23 + 1)) >= 0
            && (int)CmpVolumeContextSendDeviceUsageNotification(*v9) >= 0 )
          {
            ++v6;
          }
          v8 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v7];
        }
        while ( *v8 );
        if ( v6 )
        {
          CmpAttachToRegistryProcess((__int64)&v21, v10, v4, v11);
          for ( i = 0LL; ; i = v16 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v16 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
            if ( !NextActiveHive )
              break;
            CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
          }
          KiUnstackDetachProcess((__int64)&v21, 0LL, v14, v15);
        }
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v4, v5);
      return (unsigned int)-1073741431;
    }
  }
  return v0;
}
