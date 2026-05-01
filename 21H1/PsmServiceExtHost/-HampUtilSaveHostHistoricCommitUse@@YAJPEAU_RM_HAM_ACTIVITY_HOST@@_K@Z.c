/*
 * XREFs of ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180029760
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029908 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x180029130 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z @ 0x1800297F0 (-HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z.c)
 *     ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x180029828 (-HampUtilHostTypeNameFromType@@YAPEBGK@Z.c)
 */

__int64 __fastcall HampUtilSaveHostHistoricCommitUse(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  int v3; // ebx
  const unsigned __int16 *v4; // rax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  hKey = 0LL;
  v3 = HampUtilOpenApplicationHistoryKey(a1, 1, &hKey);
  if ( v3 >= 0 )
  {
    v4 = HampUtilHostTypeNameFromType(*((_DWORD *)a1 + 140));
    v3 = HampSystemSetValue(hKey, v4, 0xBu, &v6, 8u);
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v3;
}
