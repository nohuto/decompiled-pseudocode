/*
 * XREFs of RtlStringCbCopyW @ 0x1402DF118
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1402068B0 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x140317EB8 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403B3C50 (RtlpGetNameFromLangInfoNode.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x1405759E8 (PopIdleWakeFinalizeWakeSource.c)
 *     WmipInsertStaticNames @ 0x14068103C (WmipInsertStaticNames.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140684F18 (PiDcHandleCustomDeviceEvent.c)
 *     PnpAllocatePWSTR @ 0x1406AA0A8 (PnpAllocatePWSTR.c)
 *     WmipEnumerateMofResources @ 0x1406E8724 (WmipEnumerateMofResources.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PiSwFindSwDevice @ 0x140734680 (PiSwFindSwDevice.c)
 *     PiSwIrpInterfaceRegister @ 0x140752F94 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x140753438 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140757BAC (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x1407A90EC (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x1407A9E50 (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407BB4BC (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x1408800CC (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14089F250 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x14092DF2C (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x14097AF80 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140A6F9A4 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140A919AC (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  size_t v5; // r10
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTRSAFE_PWSTR v8; // rax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v5 + v3) )
          break;
        v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
        if ( !v7 )
          break;
        *pszDest++ = v7;
        --v3;
      }
      while ( v3 );
    }
    v8 = pszDest - 1;
    if ( v3 )
      v8 = pszDest;
    v4 = v3 == 0 ? 0x80000005 : 0;
    *v8 = 0;
  }
  return v4;
}
