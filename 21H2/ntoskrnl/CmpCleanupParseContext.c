/*
 * XREFs of CmpCleanupParseContext @ 0x14064A8A0
 * Callers:
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406225AC (CmpStartSiloRegistryNamespace.c)
 *     CmOpenKey @ 0x14064A150 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140665B70 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpParseKey @ 0x14070FFF0 (CmpParseKey.c)
 *     CmpCreatePredefined @ 0x1407A7E88 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x140868830 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868A50 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E884 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F980 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140882410 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeExtraParameter @ 0x1405D848C (CmpFreeExtraParameter.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 */

_QWORD *__fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  ULONG_PTR v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    if ( !a2 )
    {
      CmpLockRegistry();
      v4 = *(_QWORD *)(a1 + 88);
    }
    CmpDereferenceKeyControlBlock(v4);
    if ( !a2 )
      CmpUnlockRegistry(v10, v9);
  }
  v5 = (_QWORD *)(a1 + 144);
  result = (_QWORD *)*v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 )
    goto LABEL_10;
  v7 = *result;
  if ( *(_QWORD **)(*result + 8LL) != result )
    goto LABEL_10;
  *v5 = v7;
  *(_QWORD *)(v7 + 8) = v5;
  if ( result != v5 )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(result);
      result = (_QWORD *)*v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
        break;
      v8 = *result;
      if ( *(_QWORD **)(*result + 8LL) != result )
        break;
      *v5 = v8;
      *(_QWORD *)(v8 + 8) = v5;
      if ( result == v5 )
        return result;
    }
LABEL_10:
    __fastfail(3u);
  }
  return result;
}
