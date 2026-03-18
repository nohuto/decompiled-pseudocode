/*
 * XREFs of CmpAllocateUnitOfWork @ 0x1406D9BBC
 * Callers:
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1407272EC (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
