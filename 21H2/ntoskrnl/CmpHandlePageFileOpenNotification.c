/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x14085A568
 * Callers:
 *     NtInitializeRegistry @ 0x1406EA120 (NtInitializeRegistry.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14085A678 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085A75C (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpHandlePageFileOpenNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edi
  int v8; // esi
  __int64 **v9; // rax
  _QWORD *v10; // r14
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]

  v15 = 0LL;
  v3 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( _InterlockedExchange(&CmpBootPageFilesCreated, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2, a3) )
  {
    v7 = 0;
    v8 = 0;
    if ( CmpWellKnownVolumeList )
    {
      v9 = &CmpWellKnownVolumeList;
      do
      {
        v10 = v9 + 1;
        if ( (int)CmpVolumeManagerGetContextForFilePath(
                    v5,
                    *v9,
                    v6,
                    v9 + 1,
                    v15,
                    *((_QWORD *)&v15 + 1),
                    v16,
                    *((_QWORD *)&v16 + 1),
                    v17,
                    *((_QWORD *)&v17 + 1)) >= 0
          && (int)CmpVolumeContextSendDeviceUsageNotification(*v10) >= 0 )
        {
          ++v7;
        }
        v9 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v8];
      }
      while ( *v9 );
      if ( v7 )
      {
        CmpAttachToRegistryProcess(&v15);
        for ( i = 0LL; ; i = v13 )
        {
          NextActiveHive = CmpGetNextActiveHive(i);
          v13 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
          if ( !NextActiveHive )
            break;
          CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
        }
        CmpDetachFromRegistryProcess(&v15);
      }
    }
    CmpReleaseShutdownRundown(v5, v4, v6);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v3;
}
