/*
 * XREFs of _RtlUnlockModuleSection@4 @ 0x4B2A99B0
 * Callers:
 *     _RtlpRegisterLockedMemoryZone@0 @ 0x4B2A964B (_RtlpRegisterLockedMemoryZone@0.c)
 *     _RtlpUnregisterLockedMemoryZone@0 @ 0x4B2A9977 (_RtlpUnregisterLockedMemoryZone@0.c)
 *     _RtlpRegisterLockedMemoryBlockLookaside@0 @ 0x4B34D67B (_RtlpRegisterLockedMemoryBlockLookaside@0.c)
 *     _RtlpUnregisterLockedMemoryBlockLookaside@0 @ 0x4B34D6DA (_RtlpUnregisterLockedMemoryBlockLookaside@0.c)
 * Callees:
 *     _RtlpLocateModuleSectionInLockedSectionList@4 @ 0x4B2A9A2E (_RtlpLocateModuleSectionInLockedSectionList@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 */

NTSTATUS __cdecl RtlUnlockModuleSection(PVOID Address)
{
  void ***ModuleSectionInLockedSectionList; // eax
  void ***v2; // esi
  bool v3; // zf
  void **v4; // eax
  void **v5; // ecx
  NTSTATUS v6; // edi

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = (void ***)RtlpLocateModuleSectionInLockedSectionList(Address);
  v2 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    v3 = ModuleSectionInLockedSectionList[4] == (void **)1;
    ModuleSectionInLockedSectionList[4] = (void **)((char *)ModuleSectionInLockedSectionList[4] - 1);
    if ( v3 )
    {
      v4 = *ModuleSectionInLockedSectionList;
      if ( (*v2)[1] != v2 || (v5 = v2[1], *v5 != v2) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      v6 = NtUnlockVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v2 + 2, (PSIZE_T)(v2 + 3), 1u);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v6;
}
