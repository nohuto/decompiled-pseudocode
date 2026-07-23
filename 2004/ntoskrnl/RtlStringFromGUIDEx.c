/*
 * XREFs of RtlStringFromGUIDEx @ 0x1406A7C78
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403B0C98 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x140521A7C (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x1406A7B50 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x1406A7C60 (RtlStringFromGUID.c)
 *     PpDevCfgProcessDeviceClass @ 0x14071DFA8 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071E318 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071E56C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14072EED0 (PiDevCfgLogDeviceConfigured.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14074CC84 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1407590A4 (PiDevCfgQueryDriverConfiguration.c)
 *     PipGenerateContainerID @ 0x14075B958 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407698D0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpStartRMLog @ 0x14076ECD4 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x140771DE0 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x14077279C (BiConvertElementToRegistryData.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407AB764 (IopUpdateSecureDeviceClassState.c)
 *     CmpRecoverEnlistment @ 0x140871A54 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x140871D9C (CmpAddRemoveRMLogContainer.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x14089B710 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408A67B0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409124D8 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094C7BC (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14094ECAC (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x14096BAE0 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14096FE4C (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14097BB18 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403D32F0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406F19D0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlStringFromGUIDEx(PGUID Guid, PUNICODE_STRING GuidString, BOOLEAN AllocateGuidString)
{
  wchar_t *StringRoutine; // rax
  unsigned __int16 MaximumLength; // dx

  if ( AllocateGuidString )
  {
    GuidString->MaximumLength = 78;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(0x4EuLL);
    GuidString->Buffer = StringRoutine;
    if ( StringRoutine )
    {
      MaximumLength = GuidString->MaximumLength;
LABEL_4:
      GuidString->Length = 76;
      swprintf_s(
        GuidString->Buffer,
        (unsigned __int64)MaximumLength >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        Guid->Data1,
        Guid->Data2,
        Guid->Data3,
        Guid->Data4[0],
        Guid->Data4[1],
        Guid->Data4[2],
        Guid->Data4[3],
        Guid->Data4[4],
        Guid->Data4[5],
        Guid->Data4[6],
        Guid->Data4[7]);
      return 0;
    }
    return -1073741801;
  }
  else
  {
    MaximumLength = GuidString->MaximumLength;
    if ( MaximumLength >= 0x4Eu )
      goto LABEL_4;
    return -1073741789;
  }
}
