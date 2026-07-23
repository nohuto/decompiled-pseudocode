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
  ULONG64 v5; // r8
  int v6; // r15d
  _UNICODE_STRING *v7; // rdx
  int LoadedDllByNameLockHeld; // eax
  PIMAGE_NT_HEADERS v9; // rbp
  void *v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v13; // [rsp+60h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp+20h] BYREF

  v2 = LdrpMinimalMapModule();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 160);
    v13 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0, *(PVOID *)(v4 + 48), v5, &OutHeaders);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v9 = OutHeaders;
        v6 = 0;
        *(_DWORD *)(v4 + 128) = OutHeaders->FileHeader.TimeDateStamp;
        *(_DWORD *)(v4 + 64) = v9->OptionalHeader.SizeOfImage;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v7 = 0LL;
        if ( (*(_DWORD *)(a1 + 32) & 0x20) == 0 )
          v7 = (_UNICODE_STRING *)(v4 + 72);
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((PUNICODE_STRING)(v4 + 88), v7, *(_DWORD *)(v4 + 264));
        v9 = OutHeaders;
        if ( LoadedDllByNameLockHeld == -1073741515 )
        {
          v10 = *(void **)(v4 + 48);
          LODWORD(OutHeaders) = OutHeaders->FileHeader.TimeDateStamp;
          HIDWORD(OutHeaders) = v9->OptionalHeader.SizeOfImage;
          LdrpFindLoadedDllByMappingLockHeld(v10, v9, (unsigned int *)&OutHeaders, &v13);
        }
        if ( !v13 )
        {
          LdrpInsertDataTableEntry(v4);
          LdrpInsertModuleToIndexLockHeld(v4, (__int64)v9);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v13 )
        {
          LdrpLoadContextReplaceModule(a1);
          return (unsigned int)v3;
        }
      }
      if ( RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = LdrpCompleteMapModule(a1, (__int64)v9, v6);
        if ( v3 >= 0 )
        {
          v3 = LdrpProcessMappedModule(v4, *(_DWORD *)(a1 + 32), 1);
          if ( v3 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v4);
            v11 = *(_QWORD *)(a1 + 48);
            if ( v11 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v11 + 48);
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
