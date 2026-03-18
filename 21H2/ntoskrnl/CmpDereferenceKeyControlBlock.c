/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x14071BF40
 * Callers:
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x1406800D0 (CmReleaseLoadKeyContext.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 *     CmpDestroyVirtualStack @ 0x140916720 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1409192C8 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140919308 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140920E78 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406CE3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntry @ 0x14071B8C0 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14071BB4C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  bool v6; // cl
  unsigned int v7; // ebx
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  CmpInitializeDelayDerefContext(&v12);
  v2 = *(_QWORD *)BugCheckParameter4;
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
  {
LABEL_11:
    v7 = *(_DWORD *)(BugCheckParameter4 + 16);
    v8 = *(_QWORD **)(BugCheckParameter4 + 32);
    CmpLockHashEntryExclusiveByKcb(BugCheckParameter4);
    CmpLockKcbExclusive(BugCheckParameter4);
    v9 = *(_QWORD *)(BugCheckParameter4 + 192);
    v10 = 0LL;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 )
      {
        v10 = *(_QWORD *)(v11 + 16);
        CmpUnlockKcb(BugCheckParameter4);
        CmpLockKcbExclusive(v10);
        CmpLockKcbExclusive(BugCheckParameter4);
      }
    }
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4, (__int64)&v12, 0);
    CmpUnlockKcb(BugCheckParameter4);
    if ( v10 )
      CmpUnlockKcb(v10);
    CmpUnlockHashEntry(v8, v7);
    CmpDrainDelayDerefContext((_QWORD **)&v12);
  }
  else
  {
    while ( 1 )
    {
      v4 = v2 - 1;
      v5 = v2;
      v6 = v2 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v3 + 2944) == 1;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v4, v2);
      if ( v2 == v5 )
        break;
      if ( v2 <= 1 )
        goto LABEL_11;
    }
    if ( v2 < v4 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
    if ( v6 )
      CmpDoQueueLateUnloadWorker(v3);
  }
}
