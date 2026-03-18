/*
 * XREFs of AslStringAnsiToUnicode @ 0x140A14988
 * Callers:
 *     AslpFileGet16BitDescription @ 0x140A18474 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x140A18558 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x140A18AA0 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x140A18E64 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14075A820 (RtlxAnsiStringToUnicodeSize.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const char *a2)
{
  ULONG v3; // eax
  __int64 v4; // rcx
  unsigned __int16 v5; // di
  NTSTATUS v6; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING v9; // [rsp+30h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  RtlInitString(&DestinationString, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v5 = v3;
  *a1 = 0LL;
  v9 = 0LL;
  if ( v3 > 0xFFFF )
  {
    v6 = -1073741811;
LABEL_3:
    AslLogCallPrintf(1LL);
    Buffer = v9.Buffer;
    goto LABEL_8;
  }
  v9.Buffer = (wchar_t *)AslAlloc(v4, v3);
  if ( !v9.Buffer )
  {
    v6 = -1073741801;
    AslLogCallPrintf(1LL);
    return (unsigned int)v6;
  }
  v9.MaximumLength = v5;
  v9.Length = 0;
  v6 = RtlAnsiStringToUnicodeString(&v9, &DestinationString, 0);
  if ( v6 < 0 )
    goto LABEL_3;
  Buffer = 0LL;
  *a1 = v9.Buffer;
  v6 = 0;
LABEL_8:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)v6;
}
