/*
 * XREFs of DpiCopyUnicodeString @ 0x1C018B000
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C0021EB0 (DpiGetDeviceRegistryPaths.c)
 *     DpiGdoSetupGdiParameters @ 0x1C018A5BC (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v2; // ebx
  wchar_t *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = 0;
  if ( DestinationString && SourceString && SourceString->MaximumLength && SourceString->Buffer )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString->MaximumLength, 0x74727044u);
    DestinationString->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      DestinationString->MaximumLength = SourceString->MaximumLength;
      RtlCopyUnicodeString(DestinationString, SourceString);
    }
    else
    {
      v2 = -1073741801;
      v11 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
      *(_QWORD *)(v11 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v11);
    }
  }
  else
  {
    v2 = -1073741811;
    v12 = WdLogNewEntry5_WdError(DestinationString, SourceString);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  return v2;
}
