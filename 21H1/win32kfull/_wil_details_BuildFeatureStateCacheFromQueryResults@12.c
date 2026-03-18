/*
 * XREFs of _wil_details_BuildFeatureStateCacheFromQueryResults@12 @ 0x27A018
 * Callers:
 *     _wil_details_UpdateFeatureConfiguredStates@0 @ 0x27A21C (_wil_details_UpdateFeatureConfiguredStates@0.c)
 *     _wil_details_PopulateInitialConfiguredFeatureStates@0 @ 0x292070 (_wil_details_PopulateInitialConfiguredFeatureStates@0.c)
 * Callees:
 *     <none>
 */

int __fastcall wil_details_BuildFeatureStateCacheFromQueryResults(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ecx
  int v5; // ecx

  v3 = 0;
  if ( a1 == -2147483614 || a1 == -1073741275 )
  {
    *a3 = 0;
    a3[1] = 0;
    goto LABEL_10;
  }
  *a3 = 0;
  a3[1] = 0;
  if ( a1 )
  {
    if ( a1 != 279 )
    {
      v3 = a1;
LABEL_10:
      v5 = 131;
      goto LABEL_11;
    }
    v4 = *(_DWORD *)(a2 + 4) & 0x80;
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 4) & 0xB0 | (4 * (*(_DWORD *)(a2 + 4) & 0x40));
  }
  v5 = (2 * v4) | 0x83;
LABEL_11:
  *a3 = v5;
  return v3;
}
