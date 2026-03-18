/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C008E510
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00C5120 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00C5314 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00C5750 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00C5824 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00C5B44 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C00C5B7C (CmRegUtilWstrValueSetFullBuffer.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00C5BD8 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdmlibRtlInitUnicodeStringEx(_UNICODE_STRING *DestinationString, wchar_t *SourceString)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // rax
  __int64 result; // rax
  unsigned __int16 v5; // ax

  v2 = 0;
  if ( SourceString )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( SourceString[v3] );
    if ( v3 > 0x7FFE )
      return 3221225734LL;
    v5 = 2 * v3;
    v2 = v5 + 2;
  }
  else
  {
    SourceString = 0LL;
    v5 = 0;
  }
  DestinationString->Length = v5;
  result = 0LL;
  DestinationString->MaximumLength = v2;
  DestinationString->Buffer = SourceString;
  return result;
}
