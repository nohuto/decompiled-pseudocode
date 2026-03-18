/*
 * XREFs of RtlCompareUnicodeString @ 0x140671CB0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402E48A4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     FsRtlCompareNodeAndKey @ 0x1402F8600 (FsRtlCompareNodeAndKey.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037E454 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x140381010 (KsepCacheHwIdEqual.c)
 *     IopEliminateBogusConflict @ 0x14050EB50 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140594A20 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpFindNameInListCellWithStatus @ 0x14066FEB0 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x140671F90 (CmpDoCompareKeyName.c)
 *     CmpCheckLexicographicalOrder @ 0x140675B30 (CmpCheckLexicographicalOrder.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1406AAADC (SepCaptureTokenSecurityAttributesInformation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406C96F4 (RtlpProcessIFEOKeyFilter.c)
 *     PnpCompareInstancePath @ 0x1406CB5E0 (PnpCompareInstancePath.c)
 *     PopAvlComparePowerRequestKeys @ 0x1406DE770 (PopAvlComparePowerRequestKeys.c)
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     PiCompareDDBCacheEntries @ 0x140766720 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x14076C510 (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14076F628 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x1407BFFF4 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x1407CD6E0 (KsepCacheDeviceEqual.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x14087E090 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A8834 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408AAB40 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1408BB664 (IopExecuteHardwareProfileChange.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1409164BC (RtlpCapabilityCheckSystemCapability.c)
 *     SepAdtStagingEvent @ 0x140922A40 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1409231C0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140927420 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x140959C14 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140959CF0 (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A57E7C (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140A63CB8 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     NLS_UPCASE @ 0x140268110 (NLS_UPCASE.c)
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
