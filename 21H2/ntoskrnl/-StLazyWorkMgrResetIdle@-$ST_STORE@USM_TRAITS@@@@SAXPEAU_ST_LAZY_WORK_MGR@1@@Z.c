/*
 * XREFs of ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14028BAA4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028B860 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14024E26C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140275324 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  _QWORD *v3; // r11

  v1 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = 0LL;
  if ( *(_QWORD *)(a1 + 168) != -1LL )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( v3[21] <= UnbiasedInterruptTime )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork((unsigned __int64)v3, UnbiasedInterruptTime);
    }
    else if ( v1 )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(v3, UnbiasedInterruptTime);
    }
  }
}
