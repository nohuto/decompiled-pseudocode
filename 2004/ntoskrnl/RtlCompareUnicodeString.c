/*
 * XREFs of RtlCompareUnicodeString @ 0x1405E66D0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FC4E0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     FsRtlCompareNodeAndKey @ 0x140330568 (FsRtlCompareNodeAndKey.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037C724 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x14037F2E0 (KsepCacheHwIdEqual.c)
 *     IopEliminateBogusConflict @ 0x14050B220 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140590F80 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpFindNameInListCellWithStatus @ 0x1405E3260 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1405E69B0 (CmpDoCompareKeyName.c)
 *     CmpCheckLexicographicalOrder @ 0x140671B70 (CmpCheckLexicographicalOrder.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1406B95CC (SepCaptureTokenSecurityAttributesInformation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406F6868 (RtlpProcessIFEOKeyFilter.c)
 *     PnpCompareInstancePath @ 0x1406F8720 (PnpCompareInstancePath.c)
 *     PopAvlComparePowerRequestKeys @ 0x14070C640 (PopAvlComparePowerRequestKeys.c)
 *     PiDevCfgConfigureDevice @ 0x1407232F0 (PiDevCfgConfigureDevice.c)
 *     PiCompareDDBCacheEntries @ 0x140757AE0 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x14075DEA0 (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140761018 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x1407B20AC (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x1407BEE50 (KsepCacheDeviceEqual.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140878520 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A2D04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A5010 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1408B5A44 (IopExecuteHardwareProfileChange.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x14091097C (RtlpCapabilityCheckSystemCapability.c)
 *     SepAdtStagingEvent @ 0x14091CDC0 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x14091D540 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140921600 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x140953E54 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140953F30 (ExpCovQueryHypervisorInformation.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 *     CmpSetSystemBiosInformation @ 0x140A577FC (CmpSetSystemBiosInformation.c)
 *     KiHwPolicyFindDriverImage @ 0x140A5C958 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
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
