/*
 * XREFs of _RtlpWow64SelectSystem32PathInternal@12 @ 0x4B2E615E
 * Callers:
 *     _RtlReplaceSystemDirectoryInPath@16 @ 0x4B2E6110 (_RtlReplaceSystemDirectoryInPath@16.c)
 * Callees:
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall RtlpWow64SelectSystem32PathInternal(__int16 a1, char a2, PUNICODE_STRING DestinationString)
{
  const wchar_t *v3; // eax

  switch ( a1 )
  {
    case 1:
      v3 = L"\\System32\\";
      if ( !a2 )
        v3 = L"System32";
      goto LABEL_5;
    case 332:
      if ( a2 )
        v3 = L"\\SysWOW64\\";
      else
        v3 = (const wchar_t *)L"SysWOW64";
LABEL_5:
      RtlInitUnicodeString(DestinationString, (PCWSTR)v3);
      return 0;
    case 452:
      if ( a2 )
        v3 = L"\\SysARM32\\";
      else
        v3 = L"SysARM32";
      goto LABEL_5;
    case 14948:
      if ( a2 )
        v3 = L"\\SyCHPE32\\";
      else
        v3 = L"SyCHPE32";
      goto LABEL_5;
  }
  return -1073741811;
}
