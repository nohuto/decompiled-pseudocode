/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x180014A90
 * Callers:
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     LdrpMapDllNtFileName @ 0x18005FBE4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800144C0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpInsertDataTableEntry @ 0x180014620 (LdrpInsertDataTableEntry.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180014744 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x180014890 (RtlIsCriticalSectionLockedByThread.c)
 *     LdrpCompleteMapModule @ 0x1800148B4 (LdrpCompleteMapModule.c)
 *     LdrpLogNewDllLoad @ 0x180014A14 (LdrpLogNewDllLoad.c)
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800212F0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpLoadContextReplaceModule @ 0x1800602FC (LdrpLoadContextReplaceModule.c)
 *     LdrpCorProcessImports @ 0x180084954 (LdrpCorProcessImports.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // r15d
  int v7; // r8d
  int v8; // edx
  int LoadedDllByNameLockHeld; // eax
  _DWORD *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  volatile signed __int32 *v15; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = LdrpMinimalMapModule();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 160);
    v15 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0LL, *(_QWORD *)(v4 + 48), v5, &v16);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v10 = v16;
        v6 = 0;
        *(_DWORD *)(v4 + 128) = v16[2];
        *(_DWORD *)(v4 + 64) = v10[20];
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v7 = *(_DWORD *)(a1 + 32);
        v8 = 0;
        if ( (v7 & 0x20) == 0 )
          v8 = v4 + 72;
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                    (int)v4 + 88,
                                    v8,
                                    v7,
                                    (unsigned int)&v15,
                                    *(_DWORD *)(v4 + 264));
        v10 = v16;
        if ( LoadedDllByNameLockHeld == -1073741515 )
        {
          v11 = *(_QWORD *)(v4 + 48);
          LODWORD(v16) = v16[2];
          HIDWORD(v16) = v10[20];
          LdrpFindLoadedDllByMappingLockHeld(v11, v10, (unsigned int *)&v16, &v15);
        }
        if ( !v15 )
        {
          LdrpInsertDataTableEntry(v4);
          LdrpInsertModuleToIndexLockHeld(v4, (__int64)v10, v12);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v15 )
        {
          LdrpLoadContextReplaceModule(a1);
          return (unsigned int)v3;
        }
      }
      if ( RtlIsCriticalSectionLockedByThread((__int64)&LdrpDllNotificationLock) )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = LdrpCompleteMapModule(a1, (__int64)v10, v6);
        if ( v3 >= 0 )
        {
          v3 = LdrpProcessMappedModule(v4, *(_DWORD *)(a1 + 32), 1);
          if ( v3 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v4);
            v13 = *(_QWORD *)(a1 + 48);
            if ( v13 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v13 + 48);
            if ( (*(_BYTE *)(v4 + 104) & 4) != 0 || (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
            {
              if ( (*(_DWORD *)(v4 + 104) & 0x1000000) != 0 )
              {
                return (unsigned int)LdrpCorProcessImports(v4);
              }
              else
              {
                LdrpMapAndSnapDependency(a1);
                return (unsigned int)**(_DWORD **)(a1 + 40);
              }
            }
            else
            {
              LdrpLogDllState(*(_QWORD *)(v4 + 48), v4 + 72, 5294LL);
              v3 = 0;
              *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL) = 9;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
