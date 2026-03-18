/*
 * XREFs of CmpCleanupParseContext @ 0x14060C8A0
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpParseKey @ 0x140619690 (CmpParseKey.c)
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406E3CDC (CmpStartSiloRegistryNamespace.c)
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1406FF300 (CmCreateKey.c)
 *     CmpCreatePredefined @ 0x14079DBC8 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x14086AAB0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14086ACD0 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x140870F1C (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140884D18 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeExtraParameter @ 0x1405D54E8 (CmpFreeExtraParameter.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
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
