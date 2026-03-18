/*
 * XREFs of ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002588
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002118 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x1400024E4 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 * Callees:
 *     ?ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPEAK@Z @ 0x140002678 (-ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPE.c)
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 */

void __fastcall CSettingsManager::RefreshPreferencesAndPolicies(CSettingsManager *this)
{
  const wchar_t *v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  int v4; // [rsp+3Ch] [rbp-Dh]
  const wchar_t *v5; // [rsp+40h] [rbp-9h]
  __int64 v6; // [rsp+48h] [rbp-1h]
  const wchar_t *v7; // [rsp+50h] [rbp+7h]
  __int64 v8; // [rsp+58h] [rbp+Fh]
  _QWORD v9[6]; // [rsp+60h] [rbp+17h] BYREF

  v3 = 1;
  v2 = L"UseDPIScaling";
  v4 = 1;
  v5 = L"AnimationsShiftKey";
  v6 = 2LL;
  v7 = L"DisableLockingMemory";
  v8 = 64LL;
  v9[0] = L"DisallowAnimations";
  v9[2] = L"DisallowColorizationColorChanges";
  v9[4] = L"DefaultColorizationColorState";
  v9[1] = 1LL;
  v9[3] = 2LL;
  v9[5] = 4LL;
  CSettingsManager::ReadRegistryBitfields(this, 0LL, &v2);
  CSettingsManager::ReadRegistryBitfields(this, 1LL, v9);
}
