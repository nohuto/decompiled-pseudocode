/*
 * XREFs of RtlStringCbCopyW @ 0x1402727B8
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1402993C0 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x140355968 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403B383C (RtlpGetNameFromLangInfoNode.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x140576038 (PopIdleWakeFinalizeWakeSource.c)
 *     PnpAllocatePWSTR @ 0x1405DBA78 (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x140645EDC (WmipInsertStaticNames.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140647510 (PiDcHandleCustomDeviceEvent.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     WmipEnumerateMofResources @ 0x14070C6F4 (WmipEnumerateMofResources.c)
 *     PiSwFindSwDevice @ 0x140732A40 (PiSwFindSwDevice.c)
 *     PiSwCompleteCreate @ 0x1407372D4 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceRegister @ 0x140737A8C (PiSwIrpInterfaceRegister.c)
 *     PipMakeGloballyUniqueId @ 0x1407597C8 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x1407AC24C (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x1407ACFB0 (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407BE62C (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x1408813EC (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A0570 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x14092F1DC (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x14097C320 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140A7056C (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140A910BC (ViMakeVerifierSettings.c)
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
