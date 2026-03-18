/*
 * XREFs of RtlHashUnicodeString @ 0x1406A8C20
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x1402DF6A8 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x14037D390 (KsepCacheHwIdHash.c)
 *     SepGetCachedHandlesEntry @ 0x1406781A4 (SepGetCachedHandlesEntry.c)
 *     PiDmInitializeComparisonObject @ 0x1406A8B24 (PiDmInitializeComparisonObject.c)
 *     PiDmObjectCreate @ 0x14072EBE8 (PiDmObjectCreate.c)
 *     PipFindDeviceOverrideEntry @ 0x14074CB6C (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x140756694 (PnpGenerateDeviceIdsHash.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14075A4E0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     KsepCacheDeviceHash @ 0x14075E0A0 (KsepCacheDeviceHash.c)
 *     PiDevCfgResolveVariable @ 0x140766BD0 (PiDevCfgResolveVariable.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408DFE60 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1408E147C (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1408E15CC (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140A55C40 (PipInitDeviceOverrideCache.c)
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
