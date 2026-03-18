/*
 * XREFs of VfTargetDriversAdd @ 0x14036E97C
 * Callers:
 *     VfDriverLoadImage @ 0x1409BF080 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D6B28 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036EA64 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14036EAB0 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x14036EC30 (VfAvlReserveNode.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x1409BF0E0 (VfThunkAddTargetNotify.c)
 *     VfNotifyDifPlugins @ 0x1409C5988 (VfNotifyDifPlugins.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409D42E0 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 VerifiedData; // rax
  int v12; // eax
  unsigned int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = a2;
  v8 = 1;
  if ( VfSafeMode || !ViTargetInitialized )
    return 0;
  if ( !a4 )
    goto LABEL_4;
  VerifiedData = ViTargetDriversAllocateVerifiedData(a4);
  v4 = VerifiedData;
  if ( !VerifiedData )
    return 0;
  v12 = *(_DWORD *)(VerifiedData + 32);
  if ( (_DWORD)InitializationPhase )
    v13 = v12 & 0xFFFFFFFD;
  else
    v13 = v12 | 2;
  *(_DWORD *)(v4 + 32) = v13;
LABEL_4:
  v9 = VfAvlReserveNode(&ViTargetDriversAvl, a1, v5);
  if ( v9 )
  {
    if ( v4 )
      VfNotifyDifPlugins(1LL, v4);
    *(_QWORD *)(v9 + 56) = v4;
    *(_OWORD *)(v9 + 24) = 0LL;
    *(_OWORD *)(v9 + 40) = 0LL;
    VfThunkAddTargetNotify(v9);
    v14 = 0LL;
    BYTE9(v14) = 4;
    VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, &v14, v9);
    if ( v4 )
    {
      ++dword_140C1D068;
      *(_BYTE *)(v4 + 48) = a3;
    }
    VfAvlCleanupLockContext(&v14);
  }
  else
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
    v8 = 0;
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0x44566656u);
  }
  return v8;
}
