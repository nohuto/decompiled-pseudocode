/*
 * XREFs of CmpCleanupParseContext @ 0x1405EAEC0
 * Callers:
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmpParseKey @ 0x140623680 (CmpParseKey.c)
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14068D940 (CmCreateKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406ED80C (CmpStartSiloRegistryNamespace.c)
 *     CmpCreatePredefined @ 0x14078EF28 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x140863D70 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140863F90 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoReOpenTransKey @ 0x14087DE9C (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeExtraParameter @ 0x1405CDC74 (CmpFreeExtraParameter.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
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
