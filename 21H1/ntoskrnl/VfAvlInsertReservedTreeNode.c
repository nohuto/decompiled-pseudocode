/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x14036EAB0
 * Callers:
 *     VfTargetDriversAdd @ 0x14036E97C (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1409D325C (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D3450 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x1409DE544 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF190 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402E5690 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14036EB4C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14036EB80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x14036EBDC (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x14036EC14 (ViAvlTableIndex.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  v6 = ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2);
  v6 *= 192LL;
  ViAvlAcquireTableLockAtDpcLevelSafe(v6 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + v6 + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v6 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v6 + *(_QWORD *)(a1 + 16), a2);
}
