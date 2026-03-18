/*
 * XREFs of VfAvlReserveNode @ 0x14036F860
 * Callers:
 *     VfTargetDriversAdd @ 0x14036F5AC (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1409D32BC (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D34B0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x1409DE5A4 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF1F0 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     ViAvlNodeInitializeSessionId @ 0x14036F8EC (ViAvlNodeInitializeSessionId.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  _QWORD *PoolWithTag; // rax
  char *v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    PoolWithTag = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x54416656u);
  if ( !PoolWithTag )
    return 0LL;
  v8 = (char *)(PoolWithTag + 4);
  PoolWithTag[4] = a2;
  if ( !a3 )
    a3 = *a1;
  PoolWithTag[5] = a3;
  if ( *((_BYTE *)a1 + 28) )
    ViAvlNodeInitializeSessionId(a1, PoolWithTag + 4);
  return v8;
}
