/*
 * XREFs of CmpAllocateUnitOfWork @ 0x140707318
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140719300 (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_QWORD *CmpAllocateUnitOfWork()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x77554D43u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x78uLL);
    v1[2] = 0LL;
    v1[3] = 0LL;
    v1[6] = 0LL;
    v1[7] = 0LL;
    *((_DWORD *)v1 + 16) = 0;
    v1[5] = v1 + 4;
    v1[4] = v1 + 4;
    v1[1] = v1;
    *v1 = v1;
    *((_DWORD *)v1 + 17) = 14;
  }
  return v1;
}
