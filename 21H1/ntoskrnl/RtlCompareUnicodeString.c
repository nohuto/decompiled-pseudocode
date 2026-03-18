/*
 * XREFs of RtlCompareUnicodeString @ 0x14061BCF0
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x1402F3968 (FsRtlCompareNodeAndKey.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403584C0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037BB20 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x14037E8F0 (KsepCacheHwIdEqual.c)
 *     IopEliminateBogusConflict @ 0x14050ABD0 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140590890 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpCheckLexicographicalOrder @ 0x1405F9A90 (CmpCheckLexicographicalOrder.c)
 *     CmpFindNameInListCellWithStatus @ 0x140618880 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x14061BFD0 (CmpDoCompareKeyName.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140651528 (SepCaptureTokenSecurityAttributesInformation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D3A74 (RtlpProcessIFEOKeyFilter.c)
 *     PnpCompareInstancePath @ 0x1406D52A0 (PnpCompareInstancePath.c)
 *     PopAvlComparePowerRequestKeys @ 0x1406E8670 (PopAvlComparePowerRequestKeys.c)
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 *     PiCompareDDBCacheEntries @ 0x140755B70 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x14075B9C0 (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14075ED28 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x1407AEEC8 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x1407BBCE0 (KsepCacheDeviceEqual.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140877230 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A3CF0 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1408B4724 (IopExecuteHardwareProfileChange.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x14090F5DC (RtlpCapabilityCheckSystemCapability.c)
 *     SepAdtStagingEvent @ 0x14091BB10 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x14091C290 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140920350 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x140952788 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140952864 (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A51AFC (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140A5D8B8 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int16 *Buffer; // r9
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rbx
  char *v8; // r11
  int v10; // r8d
  unsigned __int64 v11; // r10
  int v12; // eax
  int v13; // ecx
  char *v14; // r8

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( Buffer >= v7 )
    return v4 - v5;
  if ( CaseInSensitive )
  {
    v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      if ( *Buffer != *(unsigned __int16 *)((char *)Buffer + (_QWORD)v8) )
      {
        v10 = NLS_UPCASE(*Buffer);
        if ( (unsigned int)v11 >= 0x61 )
        {
          if ( (unsigned int)v11 > 0x7A )
          {
            if ( Nls844UnicodeUpcaseTable )
            {
              if ( (unsigned __int16)v11 >= 0xC0u )
                LOWORD(v11) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2
                                       * ((v11 & 0xF)
                                        + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                              + 2LL
                                                              * (((unsigned __int8)v11 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v11 >> 8))))))
                            + v11;
            }
          }
          else
          {
            LOWORD(v11) = v11 - 32;
          }
        }
        if ( (_WORD)v10 != (_WORD)v11 )
          break;
      }
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    v12 = (unsigned __int16)v11;
    v13 = v10;
  }
  else
  {
    v14 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v13 = *Buffer;
      v12 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v14);
      if ( (_WORD)v13 != (_WORD)v12 )
        break;
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
  }
  return v13 - v12;
}
