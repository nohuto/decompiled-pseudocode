/*
 * XREFs of CmpCleanupParseContext @ 0x140694400
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmpParseKey @ 0x1405EE060 (CmpParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14064F8D0 (CmpStartSiloRegistryNamespace.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140651FB0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCreatePredefined @ 0x140791328 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x140865090 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408652B0 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086C570 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoReOpenTransKey @ 0x14087F18C (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeExtraParameter @ 0x1405CF044 (CmpFreeExtraParameter.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 */

_QWORD *__fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  ULONG_PTR v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

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
      CmpUnlockRegistry();
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
