/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1C00322D0
 * Callers:
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0074934 (RaidGetStorageAdapterSerialNumberProperty.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // rbx
  unsigned __int64 v6; // r8
  NTSTATUS result; // eax
  unsigned __int64 MaximumLength; // r9
  __int64 v9; // rdx
  __int16 v10; // cx
  signed __int64 v11; // rbx

  Length = DestinationString->Length;
  Buffer = 0LL;
  v6 = 0LL;
  result = 0;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > (unsigned __int16)MaximumLength || (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || (_WORD)MaximumLength) )
  {
    result = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v6 = MaximumLength >> 1;
  }
  if ( result >= 0 )
  {
    v9 = 0x7FFFLL;
    result = 0;
    v10 = 0;
    if ( !v6 )
      goto LABEL_24;
    v11 = (char *)Buffer - (char *)pszSrc;
    do
    {
      if ( !v9 )
        break;
      if ( !*pszSrc )
        break;
      *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v11) = *pszSrc;
      --v9;
      ++pszSrc;
      ++v10;
      --v6;
    }
    while ( v6 );
    if ( !v6 && v9 )
    {
LABEL_24:
      if ( *pszSrc )
        result = -2147483643;
    }
    DestinationString->Length = 2 * v10;
  }
  return result;
}
