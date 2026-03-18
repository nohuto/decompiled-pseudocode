/*
 * XREFs of _wil_StagingConfig_QueryFeatureState@20 @ 0x27A36C
 * Callers:
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0xF2DB6 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _wil_details_StagingConfig_Load@20 @ 0xF2EEA (_wil_details_StagingConfig_Load@20.c)
 *     _wil_details_StagingConfig_QueryFeatureState@16 @ 0xF314E (_wil_details_StagingConfig_QueryFeatureState@16.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall wil_StagingConfig_QueryFeatureState(int a1, int a2, int a3, int a4, int a5)
{
  int FeatureState; // esi
  int v8; // [esp-8h] [ebp-11Ch]
  int v9; // [esp-4h] [ebp-118h]
  PVOID v10[13]; // [esp+Ch] [ebp-108h] BYREF
  int v11[51]; // [esp+40h] [ebp-D4h] BYREF

  FeatureState = 0;
  memset(v10, 0, sizeof(v10));
  if ( !wil_details_StagingConfig_Load(v10, v8, (int)v11, v9) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState(v10, a2, a3, a4);
    if ( v10[12] )
      ExFreePoolWithTag(v10[9], 0x4C4957u);
  }
  return FeatureState;
}
