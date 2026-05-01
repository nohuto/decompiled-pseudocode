/*
 * XREFs of ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x180007D4C
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007ADC (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180007DB0 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 */

void __fastcall RmpCommitThresholdsAdd(
        struct _RM_COMMIT_THRESHOLDS *a1,
        struct _RM_COMMIT_THRESHOLDS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3)
{
  __int64 v5; // r11
  __int64 v6; // r11
  unsigned __int64 *v7; // r11

  RmpCommitValuesAdd(*((_QWORD *)a1 + 3), *((_QWORD *)a2 + 3), (unsigned __int64 *)a3 + 3);
  RmpCommitValuesAdd(*((_QWORD *)a1 + 2), *((_QWORD *)a2 + 2), (unsigned __int64 *)(v5 + 16));
  RmpCommitValuesAdd(*((_QWORD *)a1 + 1), *((_QWORD *)a2 + 1), (unsigned __int64 *)(v6 + 8));
  RmpCommitValuesAdd(*(_QWORD *)a1, *(_QWORD *)a2, v7);
}
