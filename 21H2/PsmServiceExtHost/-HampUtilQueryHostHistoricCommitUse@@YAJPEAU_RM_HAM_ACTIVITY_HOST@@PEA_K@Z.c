/*
 * XREFs of ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800299D0
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029A78 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180029018 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x1800292A0 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x180029998 (-HampUtilHostTypeNameFromType@@YAPEBGK@Z.c)
 */

__int64 __fastcall HampUtilQueryHostHistoricCommitUse(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int v4; // ebx
  const unsigned __int16 *v5; // rax
  unsigned __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  hKey = 0LL;
  v4 = HampUtilOpenApplicationHistoryKey(a1, 0, &hKey);
  if ( v4 >= 0 )
  {
    v5 = HampUtilHostTypeNameFromType(*((_DWORD *)a1 + 140));
    v8 = 8;
    v4 = HampSystemQueryValue(hKey, v5, (BYTE *)v7, &v8);
    if ( v4 >= 0 )
    {
      if ( v8 == 8 )
      {
        v4 = 0;
        *a2 = v7[0];
      }
      else
      {
        v4 = -1073739509;
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
