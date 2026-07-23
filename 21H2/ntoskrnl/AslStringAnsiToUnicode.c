/*
 * XREFs of AslStringAnsiToUnicode @ 0x140967A64
 * Callers:
 *     AslpFileGet16BitDescription @ 0x14096A924 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x14096AA08 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x14096AF60 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x14096B324 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x140663960 (RtlxAnsiStringToUnicodeSize.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const CHAR *a2)
{
  ULONG v3; // eax
  __int64 v4; // rcx
  unsigned __int16 v5; // di
  NTSTATUS v6; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING v9; // [rsp+30h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, a2);
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
