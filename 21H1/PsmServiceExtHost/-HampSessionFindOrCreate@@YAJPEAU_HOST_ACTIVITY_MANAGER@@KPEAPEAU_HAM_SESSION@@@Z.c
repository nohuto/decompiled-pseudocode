/*
 * XREFs of ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18002670C
 * Callers:
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180026608 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 * Callees:
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800267B4 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180031E40 (CemRcTableFindOrInsertEx.c)
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18003C6C0 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        struct _HAM_SESSION **a3)
{
  struct _HAM_SESSION *v6; // rax
  unsigned int v7; // ebx
  int v9; // eax
  struct _HAM_SESSION *v10; // rdi
  struct _HAM_SESSION *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = HampSessionFindInManager(a1, a2);
  if ( v6 )
  {
    *a3 = v6;
    return 0;
  }
  else
  {
    v9 = HampSessionCreate(a1, a2, &v11);
    v10 = v11;
    v7 = v9;
    if ( v9 >= 0 )
    {
      CemRcTableFindOrInsertEx((_DWORD)a1 + 168, a2, (unsigned int)HampSessionCompareById, (_DWORD)v11);
      v7 = 0;
      if ( v11 == v10 )
      {
        *a3 = v10;
        return v7;
      }
      *a3 = v11;
    }
    if ( v10 )
      CemRcObjectDereference(v10);
  }
  return v7;
}
