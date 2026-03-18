/*
 * XREFs of RtlStringCchCopyExW @ 0x1402E6214
 * Callers:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406AAB3C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiDmGetObjectListCallback @ 0x1406ABA90 (PiDmGetObjectListCallback.c)
 *     DrvDbGetDriverDatabaseList @ 0x1406AD604 (DrvDbGetDriverDatabaseList.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406AE410 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406AE73C (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmGetDeviceParent @ 0x1406B1884 (_CmGetDeviceParent.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406B2300 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406B25A4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406B2EB0 (PiPnpRtlGetFilteredDeviceList.c)
 *     IopGetDeviceInterfaces @ 0x1406B3D5C (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140717798 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceName @ 0x14072E55C (_CmGetDeviceInterfaceName.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140755BD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14079810C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1407985B8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140798B20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140798E80 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140799170 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x1407A7470 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x1407B2B00 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x140899CB4 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A3724 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AC170 (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1409749B4 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x14097550C (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x14097810C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097851C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140979870 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1402E6350 (RtlStringCopyWorkerW_1.c)
 *     memset @ 0x140408F80 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x1405068E8 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  NTSTRSAFE_PWSTR v10; // rbp
  size_t v11; // rsi
  const wchar_t *v12; // rax
  NTSTATUS v13; // eax
  size_t v14; // rcx
  size_t *v16; // [rsp+20h] [rbp-48h]
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-30h] BYREF

  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v10 = pszDest;
    pcchNewDestLength = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&cchOriginalDestLength;
      if ( pszSrc )
        v12 = pszSrc;
      pszSrc = v12;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength = 0LL;
      v13 = RtlStringCopyWorkerW_1(pszDest, cchDest, &pcchNewDestLength, pszSrc, (size_t)v16);
      v14 = pcchNewDestLength;
      v9 = v13;
      v11 = cchDest - pcchNewDestLength;
      pcchNewDestLength = cchDest - pcchNewDestLength;
      v10 = &pszDest[v14];
      ppszDestEnda = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*pszSrc )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)pszSrc, &ppszDestEnda, &pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_13;
  }
  return v9;
}
