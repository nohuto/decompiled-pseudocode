/*
 * XREFs of DpiCopyUnicodeString @ 0x1C0205560
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C0026E20 (DpiGetDeviceRegistryPaths.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0204478 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v2; // ebx
  wchar_t *PoolWithTag; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = 0;
  if ( !DestinationString || !SourceString || !SourceString->MaximumLength || !SourceString->Buffer )
  {
    v7 = -1073741811LL;
    v2 = -1073741811;
    v8 = 2LL;
LABEL_10:
    WdLogSingleEntry1(v8, v7);
    return v2;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString->MaximumLength, 0x74727044u);
  DestinationString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = -1073741801LL;
    v2 = -1073741801;
    v8 = 6LL;
    goto LABEL_10;
  }
  DestinationString->MaximumLength = SourceString->MaximumLength;
  RtlCopyUnicodeString(DestinationString, SourceString);
  return v2;
}
