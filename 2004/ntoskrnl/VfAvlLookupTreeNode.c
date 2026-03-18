/*
 * XREFs of VfAvlLookupTreeNode @ 0x1403702F0
 * Callers:
 *     VfTargetDriversRemove @ 0x14037040C (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x14059C8CC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x1409D2FC8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D3038 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x1409D333C (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D36FC (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D37F4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409D38A0 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D3D84 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409D3F54 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409D4044 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1409D42A0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D43D4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D46A0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409D47DC (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1409D48A4 (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x1409DE508 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409DE5A4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409DE6CC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409DEE10 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF1F0 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409DF47C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1409E4F40 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x140202410 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14036F77C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14036F7B0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x14036F80C (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x14036F844 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x14036F8EC (ViAvlNodeInitializeSessionId.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  unsigned __int64 i; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+20h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-20h]
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+30h] [rbp-10h]
  __int64 v24; // [rsp+38h] [rbp-8h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  PVOID NodeOrParent; // [rsp+98h] [rbp+58h] BYREF

  v24 = 0LL;
  v4 = 0LL;
  v5 = a4;
  if ( !a4 )
    v5 = *a1;
  v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v5 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_4;
  Buffer = a3;
  v17 = v5;
  if ( v10 > 1 )
    v17 = 4096LL;
  v23 = v17;
  ViAvlNodeInitializeSessionId((__int64)a1, (__int64)&Buffer);
  v18 = ViAvlTableIndex((__int64)a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v21 = 192 * v18;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v18 + a1[2], a2);
  v19 = a1[2];
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v18 + v19), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v21 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_4:
    v11 = v5 + a3;
    for ( i = 0LL; i < v10; ++i )
    {
      Buffer = v9;
      v20 = v9 + 4096;
      if ( v9 + 4096 <= v11 )
        v23 = 4096LL;
      else
        v23 = v11 - v9;
      ViAvlNodeInitializeSessionId((__int64)a1, (__int64)&Buffer);
      v13 = ViAvlTableIndex((__int64)a1, Buffer);
      ViAvlRaiseIrqlSafe(a2);
      v14 = 192 * v13;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v13 + a1[2], a2);
      v15 = a1[2];
      NodeOrParent = 0LL;
      SearchResult = TableEmptyTree;
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v13 + v15), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v14 + a1[2], a2);
      v9 = v20;
    }
  }
  return v4;
}
