/*
 * XREFs of ?GetBorderFlagFromStuckEdge@CJumpViewExperienceManager@@AEAA?AW4Border@CSingleViewShellExperience@@XZ @ 0x1801D81A4
 * Callers:
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D9580 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CJumpViewExperienceManager::GetBorderFlagFromStuckEdge(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = 15;
  if ( *(_DWORD *)(a1 + 500) == 3 )
  {
    v2 = *(_DWORD *)(a1 + 496);
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
            return 7;
        }
        else
        {
          return 11;
        }
      }
      else
      {
        return 13;
      }
    }
    else
    {
      return 14;
    }
  }
  return v1;
}
