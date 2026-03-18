/*
 * XREFs of RtlStringFromGUIDEx @ 0x1406FA618
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403B3608 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x14052544C (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x1406FA4F4 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x1406FA600 (RtlStringFromGUID.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072BE44 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14072C1B4 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072C408 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073D688 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14073E648 (PiDevCfgQueryDriverConfiguration.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14075B864 (IopCreateSecureDeviceClassSettings.c)
 *     PipGenerateContainerID @ 0x14076A248 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140777EE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpStartRMLog @ 0x140779704 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x140780D9C (BiConvertElementToRegistryData.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407B96A4 (IopUpdateSecureDeviceClassState.c)
 *     CmpRecoverEnlistment @ 0x1408775A4 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1408778EC (CmpAddRemoveRMLogContainer.c)
 *     VrpPreLoadKey @ 0x140885DEC (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x1408A1240 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408AC2E0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140918018 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x14095257C (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x140954A6C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x1409718B0 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140975C1C (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x1409818E8 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403D5F80 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  PVOID StringRoutine; // rax
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
