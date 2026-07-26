/*
 * XREFs of ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C0094F7C
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008BF50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028340 (NdisCloseConfiguration.c)
 *     ?ndisIsValidPMAdminConfigState@@YAHW4_NDIS_PM_ADMIN_CONFIG_STATE@@0@Z @ 0x1C008FACC (-ndisIsValidPMAdminConfigState@@YAHW4_NDIS_PM_ADMIN_CONFIG_STATE@@0@Z.c)
 *     ?ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z @ 0x1C00951C4 (-ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z.c)
 */

int __fastcall ndisWmiSetPMAdminConfig(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_WMI_PM_ADMIN_CONFIG *a2)
{
  int result; // eax
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned __int8 v7; // r8
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE WakeOnPattern; // r8d
  PVOID v11; // rsi
  enum _NDIS_PM_ADMIN_CONFIG_STATE WakeOnMagicPacket; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE DeviceSleepOnDisconnect; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE PMARPOffload; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE PMNSOffload; // r8d
  enum _NDIS_PM_ADMIN_CONFIG_STATE PMWiFiRekeyOffload; // r8d
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+20h] [rbp-28h] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp+10h] BYREF

  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size != 28 )
    return -1073741811;
  result = ndisIsValidPMAdminConfigState(
             a2->WakeOnPattern,
             (enum _NDIS_PM_ADMIN_CONFIG_STATE)(a1->PMAdminConfig.Value & 3));
  if ( !result )
  {
    result = ndisIsValidPMAdminConfigState(a2->WakeOnMagicPacket, (enum _NDIS_PM_ADMIN_CONFIG_STATE)((v5 >> 2) & 3));
    if ( !result )
    {
      result = ndisIsValidPMAdminConfigState(
                 a2->DeviceSleepOnDisconnect,
                 (enum _NDIS_PM_ADMIN_CONFIG_STATE)((v6 >> 4) & 3));
      if ( !result )
      {
        result = ndisIsValidPMAdminConfigState(a2->PMARPOffload, (enum _NDIS_PM_ADMIN_CONFIG_STATE)(v7 >> 6));
        if ( !result )
        {
          result = ndisIsValidPMAdminConfigState(a2->PMNSOffload, (enum _NDIS_PM_ADMIN_CONFIG_STATE)((v8 >> 8) & 3));
          if ( !result )
          {
            result = ndisIsValidPMAdminConfigState(
                       a2->PMWiFiRekeyOffload,
                       (enum _NDIS_PM_ADMIN_CONFIG_STATE)((v9 >> 10) & 3));
            if ( !result )
            {
              ConfigObject.Flags = 0;
              ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
              ConfigObject.NdisHandle = a1;
              result = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
              if ( !result )
              {
                WakeOnPattern = a2->WakeOnPattern;
                v11 = ConfigurationHandle;
                if ( WakeOnPattern )
                {
                  ndisWritePMAdminConfigState(ConfigurationHandle, &WakeOnPatternStr, WakeOnPattern);
                  a1->PMAdminConfig.Value ^= (a2->WakeOnPattern ^ a1->PMAdminConfig.Value) & 3;
                }
                WakeOnMagicPacket = a2->WakeOnMagicPacket;
                if ( WakeOnMagicPacket )
                {
                  ndisWritePMAdminConfigState(v11, &WakeOnMagicPacketStr, WakeOnMagicPacket);
                  a1->PMAdminConfig.Value ^= (a1->PMAdminConfig.Value ^ (4 * a2->WakeOnMagicPacket)) & 0xC;
                }
                DeviceSleepOnDisconnect = a2->DeviceSleepOnDisconnect;
                if ( DeviceSleepOnDisconnect )
                {
                  ndisWritePMAdminConfigState(v11, &DeviceSleepOnDisconnectStr, DeviceSleepOnDisconnect);
                  a1->PMAdminConfig.Value ^= (a1->PMAdminConfig.Value ^ (16 * a2->DeviceSleepOnDisconnect)) & 0x30;
                }
                PMARPOffload = a2->PMARPOffload;
                if ( PMARPOffload )
                {
                  ndisWritePMAdminConfigState(v11, &PMARPOffloadStr, PMARPOffload);
                  a1->PMAdminConfig.Value ^= (a1->PMAdminConfig.Value ^ (a2->PMARPOffload << 6)) & 0xC0;
                }
                PMNSOffload = a2->PMNSOffload;
                if ( PMNSOffload )
                {
                  ndisWritePMAdminConfigState(v11, &PMNSOffloadStr, PMNSOffload);
                  a1->PMAdminConfig.Value ^= (a1->PMAdminConfig.Value ^ (a2->PMNSOffload << 8)) & 0x300;
                }
                PMWiFiRekeyOffload = a2->PMWiFiRekeyOffload;
                if ( PMWiFiRekeyOffload )
                {
                  ndisWritePMAdminConfigState(v11, &PMWiFiRekeyOffloadStr, PMWiFiRekeyOffload);
                  a1->PMAdminConfig.Value ^= (a1->PMAdminConfig.Value ^ (a2->PMWiFiRekeyOffload << 10)) & 0xC00;
                }
                if ( v11 )
                  NdisCloseConfiguration(v11);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
