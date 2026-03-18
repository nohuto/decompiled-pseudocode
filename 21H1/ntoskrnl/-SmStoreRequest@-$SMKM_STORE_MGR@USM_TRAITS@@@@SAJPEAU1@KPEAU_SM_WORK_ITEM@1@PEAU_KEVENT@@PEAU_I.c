/*
 * XREFs of ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402D0AB4
 * Callers:
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1402D09B8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmProcessResizeRequest @ 0x140925694 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140925790 (SmProcessStatsRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x14023DC20 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14023DDA0 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402D0B3C (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int16 v7; // di
  int v9; // ecx
  unsigned __int64 v10; // rsi
  int v11; // ebx
  struct _EX_RUNDOWN_REF *v13; // rax

  v7 = a2;
  v10 = SmKmStoreReference(a1, a2);
  if ( v10 )
  {
    v11 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v9, v10, a3, a4, a5);
    if ( v11 >= 0 )
      v10 = 0LL;
    if ( v10 )
    {
      v13 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v7 & 0x3FF);
      ExReleaseRundownProtection_0(v13 + 1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
