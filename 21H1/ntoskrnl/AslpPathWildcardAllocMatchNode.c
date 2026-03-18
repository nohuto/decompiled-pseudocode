/*
 * XREFs of AslpPathWildcardAllocMatchNode @ 0x140965268
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1409640FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409646CC (AslPathWildcardFindNext.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14025C490 (RtlUnicodeStringCopy.c)
 *     RtlUShortAdd @ 0x140303D34 (RtlUShortAdd.c)
 *     RtlUnicodeStringCatString @ 0x1403C037C (RtlUnicodeStringCatString.c)
 *     ZwOpenFile @ 0x1403F2990 (ZwOpenFile.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1405BB0DC (RtlUnicodeStringCbCatStringN.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x140743A84 (AslAlloc.c)
 *     AslpPathWildcardFreeMatchNode @ 0x14096555C (AslpPathWildcardFreeMatchNode.c)
 */

__int64 __fastcall AslpPathWildcardAllocMatchNode(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        _WORD *a3,
        int a4,
        NTSTRSAFE_PCWSTR pszSrc,
        USHORT a6)
{
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  SIZE_T v10; // rdx
  wchar_t *v11; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  USHORT pusResult; // [rsp+90h] [rbp+20h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = 0LL;
  DestinationString[1].Buffer = 0LL;
  while ( 1 )
  {
    *(_QWORD *)&DestinationString[1].Length = a3;
    if ( !*a3 )
      break;
    ++a3;
  }
  *(_QWORD *)&DestinationString[1].Length = a3 + 1;
  if ( !a3[1] )
  {
    v8 = a4 != 0 ? -1073741638 : -1073741197;
    goto LABEL_20;
  }
  if ( !a4 )
  {
    v8 = -1073741565;
LABEL_21:
    AslpPathWildcardFreeMatchNode(DestinationString);
    return (unsigned int)v8;
  }
  pusResult = SourceString->Length;
  v8 = RtlUShortAdd(pusResult, a6, &pusResult);
  if ( v8 >= 0 )
  {
    v8 = RtlUShortAdd(pusResult, 4u, &pusResult);
    if ( v8 >= 0 )
    {
      v10 = pusResult;
      DestinationString->MaximumLength = pusResult;
      DestinationString->Length = 0;
      v11 = (wchar_t *)AslAlloc(v9, v10);
      DestinationString->Buffer = v11;
      if ( !v11 )
      {
        v8 = -1073741801;
        goto LABEL_21;
      }
      v8 = RtlUnicodeStringCopy(DestinationString, SourceString);
      if ( v8 >= 0 )
      {
        if ( DestinationString->Buffer[((unsigned __int64)DestinationString->Length >> 1) - 1] == 92
          || (v8 = RtlUnicodeStringCatString(DestinationString, L"\\"), v8 >= 0) )
        {
          if ( !pszSrc || !a6 || (v8 = RtlUnicodeStringCbCatStringN(DestinationString, pszSrc, a6), v8 >= 0) )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.ObjectName = DestinationString;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v8 = ZwOpenFile(
                   (PHANDLE)&DestinationString[1].Buffer,
                   0x100001u,
                   &ObjectAttributes,
                   &IoStatusBlock,
                   1u,
                   0x21u);
            if ( v8 >= 0 )
              return (unsigned int)v8;
          }
        }
      }
    }
  }
  AslLogCallPrintf(1LL);
LABEL_20:
  if ( v8 < 0 )
    goto LABEL_21;
  return (unsigned int)v8;
}
