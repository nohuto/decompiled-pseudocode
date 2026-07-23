/*
 * XREFs of AslpFileGetClrVersionAttribute @ 0x14096D4E8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407ADB80 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407ADCAC (AslFileMappingEnsure.c)
 *     AslStringXmlSanitize @ 0x1407AE134 (AslStringXmlSanitize.c)
 *     AslStringAnsiToUnicode @ 0x14096A014 (AslStringAnsiToUnicode.c)
 *     AslpFileGetClrVersion @ 0x14096D310 (AslpFileGetClrVersion.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x14096D978 (AslpFileGetFileKindDetailAttribute.c)
 */

__int64 __fastcall AslpFileGetClrVersionAttribute(__int64 a1, __int64 a2)
{
  int ClrVersion; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  wchar_t *v8; // [rsp+30h] [rbp-138h] BYREF
  CHAR v9[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(v9, 0, sizeof(v9));
  v8 = 0LL;
  ClrVersion = AslFileMappingEnsure(a2);
  if ( ClrVersion < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 64) != 6 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 920) & 1) != 0 || (ClrVersion = AslpFileGetFileKindDetailAttribute(a1, a2), ClrVersion >= 0) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 912) - 12) > 3 )
    {
LABEL_4:
      *(_DWORD *)(a1 + 888) |= 2u;
      return 0;
    }
    ClrVersion = AslpFileGetClrVersion(v9, a2);
    if ( ClrVersion >= 0 )
    {
      ClrVersion = AslStringAnsiToUnicode(&v8, v9);
      if ( ClrVersion >= 0 )
      {
        ClrVersion = AslStringXmlSanitize(v8);
        if ( ClrVersion >= 0 )
        {
          *(_DWORD *)(a1 + 864) = 4;
          v6 = -1LL;
          do
            ++v6;
          while ( *(_WORD *)(v5 + 2 * v6) );
          *(_DWORD *)(a1 + 888) |= 5u;
          *(_QWORD *)(a1 + 872) = v6;
          *(_QWORD *)(a1 + 880) = v5;
          return 0;
        }
      }
    }
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ClrVersion;
}
