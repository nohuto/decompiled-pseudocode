/*
 * XREFs of RtlStringFromGUIDEx @ 0x14070EF18
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403AB00C (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x14052142C (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x14070EDF0 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x14070EF00 (RtlStringFromGUID.c)
 *     PpDevCfgProcessDeviceClass @ 0x14071C028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071C398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071C5EC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140757600 (PiDevCfgQueryDriverConfiguration.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140758064 (IopCreateSecureDeviceClassSettings.c)
 *     PipGenerateContainerID @ 0x140759D50 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407674F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpStartRMLog @ 0x14076C534 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x14077038C (BiConvertElementToRegistryData.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407A8604 (IopUpdateSecureDeviceClassState.c)
 *     CmpRecoverEnlistment @ 0x140870774 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x140870ABC (CmpAddRemoveRMLogContainer.c)
 *     VrpPreLoadKey @ 0x14087EFAC (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x14089A3F0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408A5490 (PiDevCfgResolveVariableGenerateGuid.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140911158 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094B41C (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14094D90C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x14096A740 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14096EAAC (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14097A778 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140A547C4 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403D24B0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
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
