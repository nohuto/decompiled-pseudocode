/*
 * XREFs of RtlLockModuleSection @ 0x18005D730
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x18005D54C (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x18005D5E0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x18005D830 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     LdrEnumerateLoadedModules @ 0x18005D870 (LdrEnumerateLoadedModules.c)
 */

__int64 __fastcall RtlLockModuleSection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  __int64 v6; // rbx
  __int64 Heap; // rax
  int v8; // edi
  __int64 *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpLockedSectionListLock, a2, a3, a4);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v6 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v8 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
    v6 = Heap;
    if ( Heap )
    {
      *(_OWORD *)Heap = 0LL;
      *(_OWORD *)(Heap + 16) = 0LL;
      *(_QWORD *)(Heap + 32) = 0LL;
      v11 = a1;
      v12 = -1073741275;
      v8 = LdrEnumerateLoadedModules(0LL, RtlpModuleEnumeratorCallback, &v11);
      if ( v8 >= 0 )
      {
        v8 = v12;
        if ( v12 >= 0 )
        {
          *(_QWORD *)(v6 + 16) = v13;
          *(_QWORD *)(v6 + 24) = v14;
          *(_DWORD *)(v6 + 32) = 1;
          v9 = (__int64 *)off_180164588;
          if ( *off_180164588 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v6 = &RtlpLockedSectionList;
          *(_QWORD *)(v6 + 8) = v9;
          *v9 = v6;
          off_180164588 = (_UNKNOWN **)v6;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  if ( v8 < 0 && v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return (unsigned int)v8;
}
