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

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 StringRoutine; // rax
  unsigned __int16 v6; // dx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(0x4EuLL);
    *(_QWORD *)(a2 + 8) = StringRoutine;
    if ( StringRoutine )
    {
      v6 = *(_WORD *)(a2 + 2);
LABEL_4:
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        (unsigned __int64)v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    v6 = *(_WORD *)(a2 + 2);
    if ( v6 >= 0x4Eu )
      goto LABEL_4;
    return 3221225507LL;
  }
}
