/*
 * XREFs of ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0039DD0
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C01036B8 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     NdisReadConfiguration @ 0x1C0028660 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadSoftwareTimestampSettings(NDIS_HANDLE ConfigurationHandle, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int IntegerData; // ebx
  int v4; // [rsp+50h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER v5; // [rsp+58h] [rbp+20h] BYREF

  IntegerData = 0;
  v4 = 0;
  v5 = 0LL;
  NdisReadConfiguration(&v4, &v5, ConfigurationHandle, &SwTimestampSettingsStr, NdisParameterInteger);
  if ( !v4 )
    IntegerData = v5->ParameterData.IntegerData;
  a2->TimestampFlags = IntegerData;
}
