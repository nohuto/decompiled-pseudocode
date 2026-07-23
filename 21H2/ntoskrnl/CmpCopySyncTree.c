/*
 * XREFs of CmpCopySyncTree @ 0x140878644
 * Callers:
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x1408797CC (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpCopySyncTree2 @ 0x1408786F0 (CmpCopySyncTree2.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpCopySyncTree(int a1, int a2, ULONG_PTR a3, int a4, int a5, int a6)
{
  _DWORD *PoolWithTag; // rax
  void *v11; // rdi
  char v12; // bl

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x20204D43u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0;
    PoolWithTag[3] &= 0xFFFFFFF8;
    *((_BYTE *)PoolWithTag + 16) &= 0xFCu;
    *PoolWithTag = a2;
    PoolWithTag[1] = a4;
    v12 = CmpCopySyncTree2((int)PoolWithTag, 512, 0, a1, a3, a5, a6);
    ExFreePoolWithTag(v11, 0);
    LOBYTE(PoolWithTag) = v12;
  }
  return (char)PoolWithTag;
}
