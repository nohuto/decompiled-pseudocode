/*
 * XREFs of RtlHashUnicodeString @ 0x1405DA5F0
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x140272B3C (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x14037DE50 (KsepCacheHwIdHash.c)
 *     PiDmInitializeComparisonObject @ 0x1405DA4F4 (PiDmInitializeComparisonObject.c)
 *     SepGetCachedHandlesEntry @ 0x140631918 (SepGetCachedHandlesEntry.c)
 *     PiDmObjectCreate @ 0x140735CE8 (PiDmObjectCreate.c)
 *     PipFindDeviceOverrideEntry @ 0x1407511F4 (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x140758604 (PnpGenerateDeviceIdsHash.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14075C0F0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     KsepCacheDeviceHash @ 0x140760410 (KsepCacheDeviceHash.c)
 *     PiDevCfgResolveVariable @ 0x140768FB0 (PiDevCfgResolveVariable.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B15E0 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E10E0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1408E26FC (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1408E284C (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140A4D0A4 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v4; // r10d
  wchar_t *Buffer; // r11
  int v7; // r9d
  unsigned __int64 v8; // rax
  int v10; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v7 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( v7 )
  {
    if ( CaseInSensitive )
    {
      do
      {
        v8 = *Buffer++;
        --v7;
        if ( (unsigned int)v8 >= 0x61 )
        {
          if ( (unsigned int)v8 > 0x7A )
          {
            if ( Nls844UnicodeUpcaseTable )
            {
              if ( (unsigned __int16)v8 >= 0xC0u )
                LOWORD(v8) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                      + 2
                                      * ((v8 & 0xF)
                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                             + 2LL
                                                             * (((unsigned __int8)v8 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                  + 2 * (v8 >> 8))))))
                           + v8;
            }
          }
          else
          {
            LOWORD(v8) = v8 - 32;
          }
        }
        v4 = (unsigned __int16)v8 + 65599 * v4;
      }
      while ( v7 );
    }
    else
    {
      do
      {
        v10 = *Buffer++;
        v4 = v10 + 65599 * v4;
        --v7;
      }
      while ( v7 );
    }
  }
  *HashValue = v4;
  return 0;
}
