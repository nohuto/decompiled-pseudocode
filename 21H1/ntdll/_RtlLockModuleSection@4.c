/*
 * XREFs of _RtlLockModuleSection@4 @ 0x4B2A96A0
 * Callers:
 *     _RtlpRegisterLockedMemoryZone@0 @ 0x4B2A964B (_RtlpRegisterLockedMemoryZone@0.c)
 *     _RtlpRegisterLockedMemoryBlockLookaside@0 @ 0x4B34D67B (_RtlpRegisterLockedMemoryBlockLookaside@0.c)
 * Callees:
 *     _LdrEnumerateLoadedModules@12 @ 0x4B2A9770 (_LdrEnumerateLoadedModules@12.c)
 *     _RtlpLocateModuleSectionInLockedSectionList@4 @ 0x4B2A9A2E (_RtlpLocateModuleSectionInLockedSectionList@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

NTSTATUS __cdecl RtlLockModuleSection(PVOID Address)
{
  int ModuleSectionInLockedSectionList; // eax
  _DWORD *v2; // esi
  _DWORD *Heap; // eax
  int v4; // edi
  _DWORD *v5; // eax
  SIZE_T v7; // [esp-4h] [ebp-20h]
  PVOID Context; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(Address);
  v2 = (_DWORD *)ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 16);
    v4 = 0;
  }
  else
  {
    LODWORD(v7) = 20;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v2 = Heap;
    if ( Heap )
    {
      *Heap = 0;
      Heap[1] = 0;
      Heap[2] = 0;
      Heap[3] = 0;
      Heap[4] = 0;
      Context = Address;
      v9 = -1073741275;
      v4 = LdrEnumerateLoadedModules(0, RtlpModuleEnumeratorCallback, &Context);
      if ( v4 >= 0 )
      {
        v4 = v9;
        if ( v9 >= 0 )
        {
          v2[2] = v10;
          v2[3] = v11;
          v2[4] = 1;
          v5 = off_4B3A33E8;
          if ( *off_4B3A33E8 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *v2 = &RtlpLockedSectionList;
          v2[1] = v5;
          *v5 = v2;
          off_4B3A33E8 = (_UNKNOWN **)v2;
        }
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  if ( v4 < 0 && v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  return v4;
}
