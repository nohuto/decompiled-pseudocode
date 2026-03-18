/*
 * XREFs of CmpCopySyncTree @ 0x14091EE14
 * Callers:
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x14091FEFC (CmpPreserveSystemHiveData.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpCopySyncTree2 @ 0x14091EEC4 (CmpCopySyncTree2.c)
 */

__int64 __fastcall CmpCopySyncTree(__int64 a1, ULONG a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4, int a5, int a6)
{
  ULONG v9; // edi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v11; // rbx
  unsigned int v12; // edi

  v9 = (unsigned int)a4;
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x2800uLL, 0x20204D43u, a4);
  v11 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    TransientPoolWithTag->Privilege[0].Luid.LowPart = 0;
    TransientPoolWithTag->Privilege[0].Luid.HighPart &= 0xFFFFFFF8;
    LOBYTE(TransientPoolWithTag->Privilege[0].Attributes) &= 0xFCu;
    TransientPoolWithTag->PrivilegeCount = a2;
    TransientPoolWithTag->Control = v9;
    v12 = CmpCopySyncTree2(TransientPoolWithTag, 512LL, 0LL, a1, a3, a5, a6);
    CmSiFreeMemory(v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
