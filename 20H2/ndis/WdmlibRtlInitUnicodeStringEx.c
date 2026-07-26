/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C00359C0
 * Callers:
 *     ndisMiniportQueryDeviceProperty @ 0x1C01090D8 (ndisMiniportQueryDeviceProperty.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C01287F4 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01289E8 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C0128D28 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C0128DFC (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C012911C (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C0129154 (CmRegUtilWstrValueSetFullBuffer.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C01291B0 (CmRegUtilWstrValueSetWstrString.c)
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
