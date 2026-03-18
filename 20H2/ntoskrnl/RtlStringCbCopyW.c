/*
 * XREFs of RtlStringCbCopyW @ 0x14023FDE8
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1402111B0 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x140326628 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403B7468 (RtlpGetNameFromLangInfoNode.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x140579A68 (PopIdleWakeFinalizeWakeSource.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405CE694 (EtwTimLogRedirectionTrustPolicy.c)
 *     PnpAllocatePWSTR @ 0x140640358 (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x1406474CC (WmipInsertStaticNames.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140648B00 (PiDcHandleCustomDeviceEvent.c)
 *     WmipEnumerateMofResources @ 0x1406DE824 (WmipEnumerateMofResources.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PiSwFindSwDevice @ 0x140741ED0 (PiSwFindSwDevice.c)
 *     PiSwCompleteCreate @ 0x140746764 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceRegister @ 0x140746F1C (PiSwIrpInterfaceRegister.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x1407BA18C (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x1407BAEF0 (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407CCEBC (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x140886F3C (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A60A0 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x14093500C (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x1409820F0 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140A769A4 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140A96D20 (ViMakeVerifierSettings.c)
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
