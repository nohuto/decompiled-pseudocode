/*
 * XREFs of ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0027AC0
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0103718 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x1C0027C00 (-ndisReadPMAdminConfigState@@YA-AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@.c)
 */

void __fastcall ndisReadPMRegistry(NDIS_HANDLE ConfigurationHandle, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int Value; // ecx

  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ ndisReadPMAdminConfigState(
                                                          ConfigurationHandle,
                                                          &WakeOnPatternStr)) & 3;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (4
                                                       * ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &WakeOnMagicPacketStr))) & 0xC;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (16
                                                       * ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &DeviceSleepOnDisconnectStr))) & 0x30;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &PMARPOffloadStr) << 6)) & 0xC0;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &PMNSOffloadStr) << 8)) & 0x300;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &PMWiFiRekeyOffloadStr) << 10)) & 0xC00;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &SelectiveSuspendStr) << 12)) & 0x3000;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &NicAutoPowerSaverStr) << 14)) & 0xC000;
  Value = a2->PMAdminConfig.Value;
  if ( (Value & 0xC000) != 0 )
    a2->PMAdminConfig.Value = Value ^ ((unsigned __int16)Value ^ (unsigned __int16)(Value >> 2)) & 0x3000;
}
