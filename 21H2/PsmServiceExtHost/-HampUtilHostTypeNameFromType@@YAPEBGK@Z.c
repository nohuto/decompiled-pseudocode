/*
 * XREFs of ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x180029998
 * Callers:
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800298D0 (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800299D0 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall HampUtilHostTypeNameFromType(int a1)
{
  switch ( a1 )
  {
    case 4:
      return L"Pure";
    case 2:
      return L"Mixed";
    case 8:
      return L"System";
  }
  __int2c();
  return 0LL;
}
