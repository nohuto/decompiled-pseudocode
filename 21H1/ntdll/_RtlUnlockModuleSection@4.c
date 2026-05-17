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

int __stdcall RtlUnlockModuleSection(int a1)
{
  _DWORD *ModuleSectionInLockedSectionList; // eax
  _DWORD *v2; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edi

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = (_DWORD *)RtlpLocateModuleSectionInLockedSectionList(a1);
  v2 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    if ( ModuleSectionInLockedSectionList[4]-- == 1 )
    {
      v4 = *ModuleSectionInLockedSectionList;
      if ( *(_DWORD **)(*v2 + 4) != v2 || (v5 = (_DWORD *)v2[1], (_DWORD *)*v5 != v2) )
        __fastfail(3u);
      *v5 = v4;
      *(_DWORD *)(v4 + 4) = v5;
      v6 = NtUnlockVirtualMemory(-1, v2 + 2, v2 + 3, 1);
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
