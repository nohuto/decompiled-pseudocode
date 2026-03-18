/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x1C001B594
 * Callers:
 *     HUBID_BuildContainerID @ 0x1C001C4B8 (HUBID_BuildContainerID.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int64 Length; // r10
  unsigned __int64 MaximumLength; // rax
  wchar_t *Buffer; // rdi
  NTSTATUS v8; // ecx
  size_t v9; // r9
  unsigned __int64 v10; // rdx
  __int16 v11; // r10
  unsigned __int64 v12; // r8
  char *v13; // rdi

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  v8 = 0;
  if ( !Buffer && ((_WORD)Length || (_WORD)MaximumLength) )
    return -1073741811;
  v9 = cbToAppend >> 1;
  v10 = Length >> 1;
  if ( cbToAppend >> 1 > 0x7FFF )
    return -1073741811;
  v11 = 0;
  v12 = (MaximumLength >> 1) - v10;
  if ( v12 )
  {
    v13 = (char *)Buffer + 2 * v10 - (_QWORD)pszSrc;
    while ( v9 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v13) = *pszSrc;
        --v9;
        ++pszSrc;
        ++v11;
        if ( --v12 )
          continue;
      }
      if ( v12 )
        break;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( v9 && *pszSrc )
      v8 = -2147483643;
  }
  DestinationString->Length = 2 * (v11 + v10);
  return v8;
}
