/*
 * XREFs of ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18000DAA4
 * Callers:
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E254 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     ?IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z @ 0x18000D9BC (-IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z.c)
 */

bool __fastcall Mobility::Policy::isTaskbarIconCreationBlockedByPolicy(Mobility::Policy *this)
{
  bool IsPreventedByMdmOrPolicy; // al
  bool v2; // bl
  bool v3; // al
  int v4; // esi
  bool v5; // al
  bool v6; // di
  bool v7; // al
  int v8; // ecx
  bool v9; // bl
  const unsigned __int16 *pdwType; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTypeb; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTypec; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTyped; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTypee; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *pdwTypea; // [rsp+20h] [rbp-28h]
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(pdwType) = 1;
  IsPreventedByMdmOrPolicy = Mobility::Policy::IsPreventedByMdmOrPolicy(
                               (Mobility::Policy *)L"Experience",
                               L"AllowWindowsConsumerFeatures",
                               L"Software\\Policies\\Microsoft\\Windows\\CloudContent",
                               L"DisableWindowsConsumerFeatures",
                               pdwType);
  LODWORD(pdwTypeb) = 1;
  v2 = IsPreventedByMdmOrPolicy;
  v3 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Accounts",
         L"AllowMicrosoftAccountConnection",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         L"NoConnectedUser",
         pdwTypeb);
  LODWORD(pdwTypec) = 3;
  v4 = (v2 ? 2 : 0) | v3;
  v5 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Accounts",
         L"AllowMicrosoftAccountConnection",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         L"NoConnectedUser",
         pdwTypec);
  LODWORD(pdwTyped) = 0;
  v6 = v5;
  v7 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Connectivity",
         L"AllowConnectedDevices",
         L"Software\\Policies\\Microsoft\\Windows\\System",
         L"EnableCdp",
         pdwTyped);
  LODWORD(pdwTypee) = 0;
  v8 = v4 | v6 | (v7 ? 4 : 0) | (Mobility::Policy::IsPreventedByMdmOrPolicy(
                                   (Mobility::Policy *)L"Connectivity",
                                   L"AllowPhonePCLinking",
                                   L"Software\\Policies\\Microsoft\\Windows\\System",
                                   L"EnableMmx",
                                   pdwTypee)
                               ? 8
                               : 0);
  v9 = v8 != 0;
  if ( !v8 )
  {
    LODWORD(pdwTypea) = 1;
    v9 = Mobility::Policy::IsPreventedByMdmOrPolicy(
           (Mobility::Policy *)L"Start",
           L"NoPinningToTaskbar",
           L"Software\\Policies\\Microsoft\\Windows\\Explorer",
           L"NoPinningToTaskbar",
           pdwTypea);
  }
  if ( !v9 )
  {
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"Software\\Policies\\Microsoft\\Windows\\Explorer",
            L"TaskbarNoPinnedList",
            0x10u,
            0LL,
            &pvData,
            &pcbData) )
      return pvData != 0;
  }
  return v9;
}
