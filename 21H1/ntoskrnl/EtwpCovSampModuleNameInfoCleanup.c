/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x140940C08
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x14093EC10 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleCleanup @ 0x140940A68 (EtwpCovSampModuleCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x140941C14 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 */

void __fastcall EtwpCovSampModuleNameInfoCleanup(__int64 *a1)
{
  __int64 v2; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  v2 = *a1;
  if ( *a1 )
  {
    if ( (v2 & 1) != 0 )
    {
      (*(void (__fastcall **)(unsigned __int64))(FltMgrCallbacks + 32))(v2 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    else
    {
      UnicodeString.Buffer = (wchar_t *)(v2 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_DWORD *)&UnicodeString.Length = 65537;
      RtlFreeAnsiString(&UnicodeString);
    }
    *a1 = 0LL;
  }
}
