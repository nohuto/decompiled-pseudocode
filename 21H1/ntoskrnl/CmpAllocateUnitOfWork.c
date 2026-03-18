/*
 * XREFs of CmpAllocateUnitOfWork @ 0x1406E3928
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140716F70 (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
