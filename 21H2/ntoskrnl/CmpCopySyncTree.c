/*
 * XREFs of CmpCopySyncTree @ 0x1408784E4
 * Callers:
 *     CmpReorganizeHive @ 0x140720AB8 (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x14087966C (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CA90 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpCopySyncTree2 @ 0x140878590 (CmpCopySyncTree2.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
