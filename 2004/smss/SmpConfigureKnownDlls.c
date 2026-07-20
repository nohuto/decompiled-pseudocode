/*
 * XREFs of SmpConfigureKnownDlls @ 0x140008A40
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x140008F10 (SmpSaveRegistryValue_U.c)
 */

__int64 __fastcall SmpConfigureKnownDlls(
        PCWSTR SourceString,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  struct _UNICODE_STRING *v8; // r8
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( !_wcsicmp(SourceString, L"DllDirectory")
    || !_wcsicmp(SourceString, L"DllDirectory32")
    || !_wcsicmp(SourceString, L"DllDirectoryArm32") )
  {
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( a3 )
  {
    RtlInitUnicodeString(&v10, a3);
    v8 = &v10;
  }
  else
  {
    v8 = 0LL;
  }
  return SmpSaveRegistryValue_U(a6, &DestinationString, v8, 1LL, 0LL);
}
