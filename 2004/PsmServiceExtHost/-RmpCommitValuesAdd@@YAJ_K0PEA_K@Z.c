/*
 * XREFs of ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180007D34
 * Callers:
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180002F60 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x180007CD0 (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001E610 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180063B90 (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007D30C (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCommitValuesAdd(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx

  v3 = -1LL;
  if ( a2 == -1 || a1 == -1LL )
  {
    *a3 = -1LL;
    return 0;
  }
  v5 = a1 + a2;
  if ( a1 + a2 >= a1 )
    v3 = a1 + a2;
  v6 = a1 + a2 < a1 ? 0xC0000095 : 0;
  *a3 = v3;
  if ( v5 >= a1 )
    return 0;
  return v6;
}
