/*
 * XREFs of ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026D04
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800058F0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180026A5C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18002807C (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028C2C (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180005898 (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall HampHostStartProcessPresenceChange(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 i; // rax

  for ( i = *((_QWORD *)a1 + 81); (i & 0x1000000000000LL) != 0; i = *((_QWORD *)a1 + 81) )
    CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 680, 0LL);
  *((_QWORD *)a1 + 81) = i | 0x1000000000000LL;
}
