/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C0035D20
 * Callers:
 *     ndisMiniportQueryDeviceProperty @ 0x1C0109138 (ndisMiniportQueryDeviceProperty.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C01287B4 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01289A8 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C0128CE8 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C0128DBC (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C01290DC (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C0129114 (CmRegUtilWstrValueSetFullBuffer.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C0129170 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int16 v4; // ax
  NTSTATUS result; // eax

  v2 = 0;
  if ( !SourceString )
  {
    SourceString = 0LL;
    v4 = 0;
    goto LABEL_6;
  }
  v3 = -1LL;
  do
    ++v3;
  while ( SourceString[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    v2 = v4 + 2;
LABEL_6:
    DestinationString->Length = v4;
    result = 0;
    DestinationString->MaximumLength = v2;
    DestinationString->Buffer = (wchar_t *)SourceString;
    return result;
  }
  return -1073741562;
}
