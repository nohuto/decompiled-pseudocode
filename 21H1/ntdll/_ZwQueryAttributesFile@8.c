/*
 * XREFs of _ZwQueryAttributesFile@8 @ 0x4B2F2D50
 * Callers:
 *     _LdrpIsReparsePoint@4 @ 0x4B2A87A0 (_LdrpIsReparsePoint@4.c)
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _LdrpGetNtPathFromDosPath@8 @ 0x4B2D204F (_LdrpGetNtPathFromDosPath@8.c)
 *     _RtlDoesFileExists_UstrEx@8 @ 0x4B2E318E (_RtlDoesFileExists_UstrEx@8.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 *     _LdrpResValidateFilePath@4 @ 0x4B343BC4 (_LdrpResValidateFilePath@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  return Wow64SystemServiceCall();
}
