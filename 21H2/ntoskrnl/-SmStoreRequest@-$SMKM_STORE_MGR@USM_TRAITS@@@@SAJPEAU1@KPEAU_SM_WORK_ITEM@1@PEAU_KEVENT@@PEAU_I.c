/*
 * XREFs of ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140376B48
 * Callers:
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140376A50 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmProcessResizeRequest @ 0x1409D42F8 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D43FC (SmProcessStatsRequest.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     SmKmStoreReference @ 0x14035F464 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140376BB8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int16 v7; // di
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // ebx
  struct _EX_RUNDOWN_REF *v13; // rax

  v7 = a2;
  v9 = SmKmStoreReference(a1, a2);
  if ( v9 )
  {
    v11 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v10, v9, a3, a4, a5);
    if ( v11 < 0 )
    {
      v13 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v7 & 0x3FF);
      ExReleaseRundownProtection(v13 + 1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
