/*
 * XREFs of ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18002650C
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800263F4 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x1800805FC (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     ?HampPkgCreate@@YAJPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18000650C (-HampPkgCreate@@YAJPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800265E8 (-HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180026608 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180031E40 (CemRcTableFindOrInsertEx.c)
 */

__int64 __fastcall HampPkgFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_PACKAGE **a3)
{
  struct _HAM_PACKAGE *v5; // rbx
  int v6; // eax
  struct _HAM_USER *v7; // rsi
  unsigned int v8; // edi
  struct _HAM_PACKAGE *v9; // rax
  int v11; // eax
  struct _HAM_PACKAGE *v12; // [rsp+58h] [rbp+10h] BYREF
  struct _HAM_USER *v13; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v6 = HampUserFindOrCreate(a1, (struct _HAM_PACKAGE_INFO *)((char *)a2 + 132), *((_DWORD *)a2 + 50), &v13);
  v7 = v13;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = HampPkgFindInUser(v13, a2);
    if ( v9 )
      goto LABEL_3;
    v11 = HampPkgCreate(v7, a2, &v12);
    v5 = v12;
    v8 = v11;
    if ( v11 >= 0 )
    {
      CemRcTableFindOrInsertEx((_DWORD)v7 + 40, (_DWORD)v12 + 96, (unsigned int)HampPkgCompareByIdentity, (_DWORD)v12);
      v9 = v12;
      if ( v5 == v12 )
      {
        *a3 = v5;
        v5 = 0LL;
        goto LABEL_4;
      }
LABEL_3:
      *a3 = v9;
LABEL_4:
      v8 = 0;
    }
  }
  if ( v7 )
    CemRcObjectDereference(v7);
  if ( v5 )
    CemRcObjectDereference(v5);
  return v8;
}
