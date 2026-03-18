/*
 * XREFs of CmpUnlockKcb @ 0x140AB4300
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402089E0 (CmpRemoveHiveFromNamespace.c)
 *     CmpDoQueryKeyName @ 0x140346910 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateValueKey @ 0x1406A18C0 (CmEnumerateValueKey.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B656C (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x1406C1694 (CmpEnlistKeyBody.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406DAD3C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCloseKeyObject @ 0x140718E30 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14071B730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1407C0D40 (CmpDelayCloseWorker.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     CmpUnlockTwoKcbs @ 0x1407C2FB4 (CmpUnlockTwoKcbs.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpVEExecuteOpenLogic @ 0x1407C64A0 (CmpVEExecuteOpenLogic.c)
 *     CmQueryValueKey @ 0x1407C83F0 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 *     CmDumpKeyToFile @ 0x14090C1BC (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140915544 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140915D20 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x1409174A4 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140919308 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpDumpKeyToBuffer @ 0x140AB48B4 (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140B15C50 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     CmpDecommisssionKcb @ 0x14069FA08 (CmpDecommisssionKcb.c)
 *     CmpIsKcbLockedExclusive @ 0x140736280 (CmpIsKcbLockedExclusive.c)
 */

__int64 __fastcall CmpUnlockKcb(ULONG_PTR a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8) & 0x80000;
  if ( CmpIsKcbLockedExclusive(a1) )
    *(_QWORD *)(v3 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
  result = ExReleasePushLockEx(v3 + 48, 0LL);
  if ( v2 )
    return CmpDecommisssionKcb(a1);
  return result;
}
