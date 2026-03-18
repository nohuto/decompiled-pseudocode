/*
 * XREFs of wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C027A008
 * Callers:
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C027A290 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C02930BC (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_BuildFeatureStateCacheFromQueryResults(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // edx

  v3 = 0;
  if ( a1 == -2147483614 || a1 == -1073741275 )
  {
    *a3 = 0LL;
    goto LABEL_9;
  }
  *a3 = 0LL;
  if ( a1 )
  {
    if ( a1 != 279 )
    {
      v3 = a1;
LABEL_9:
      v4 = 131;
      goto LABEL_10;
    }
    v4 = (2 * (*(_DWORD *)(a2 + 4) & 0x80)) | 0x83;
  }
  else
  {
    v4 = (2 * (*(_DWORD *)(a2 + 4) & 0xB0 | (4 * (*(_DWORD *)(a2 + 4) & 0x40)))) | 0x83;
  }
LABEL_10:
  *(_DWORD *)a3 = v4;
  return v3;
}
