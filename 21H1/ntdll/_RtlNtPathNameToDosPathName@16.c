/*
 * XREFs of _RtlNtPathNameToDosPathName@16 @ 0x4B32D370
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpEnsureBufferSize@12 @ 0x4B2E1480 (_RtlpEnsureBufferSize@12.c)
 *     _RtlPrefixUnicodeString@12 @ 0x4B2E40C0 (_RtlPrefixUnicodeString@12.c)
 *     _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE (_RtlDetermineDosPathNameType_Ustr@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

NTSTATUS __cdecl RtlNtPathNameToDosPathName(
        ULONG Flags,
        PRTL_UNICODE_STRING_BUFFER Path,
        PULONG Disposition,
        PWSTR *FilePart)
{
  NTSTATUS v4; // esi
  const _UNICODE_STRING *v5; // ebx
  unsigned int v6; // eax
  RTL_BUFFER *p_ByteBuffer; // ecx
  wchar_t *Buffer; // edx
  int Length; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  size_t v13; // [esp-10h] [ebp-28h]
  size_t v14; // [esp-4h] [ebp-1Ch]
  unsigned int v15; // [esp+Ch] [ebp-Ch]
  const _UNICODE_STRING *v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+10h] [ebp-8h]
  int *v18; // [esp+14h] [ebp-4h]

  v4 = 0;
  v15 = 0;
  if ( Disposition )
    *Disposition = 0;
  if ( !Path )
    return -1073741811;
  if ( Flags )
    return -1073741811;
  if ( FilePart )
  {
    if ( *FilePart )
    {
      v15 = ((char *)*FilePart - (char *)Path->String.Buffer) >> 1;
      if ( v15 >= Path->String.Length >> 1 )
        return -1073741811;
    }
  }
  v16 = &RtlpDosDevicesUncPrefix;
  if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesUncPrefix, &Path->String, 1u) )
  {
    v18 = &dword_4B281988;
    if ( Disposition )
      *Disposition = 2;
  }
  else
  {
    v16 = &RtlpDosDevicesPrefix;
    if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesPrefix, &Path->String, 1u) )
    {
      if ( Disposition )
      {
        switch ( RtlDetermineDosPathNameType_Ustr(Path) )
        {
          case 0:
          case 3:
          case 4:
          case 5:
            *Disposition = 1;
            break;
          case 1:
          case 2:
          case 6:
          case 7:
            *Disposition = 4;
            break;
          default:
            return v4;
        }
      }
      return v4;
    }
    v18 = &RtlpEmptyString;
    if ( Disposition )
      *Disposition = 3;
  }
  v5 = v16;
  v17 = (unsigned __int16)((*(_WORD *)v18 >> 1) + (Path->String.Length >> 1) - (v16->Length >> 1));
  v6 = 2 * v17 + 2;
  if ( v6 > 0xFFFE )
    return -1073741562;
  p_ByteBuffer = &Path->ByteBuffer;
  if ( Path == (PRTL_UNICODE_STRING_BUFFER)-8 || v6 > LODWORD(Path->ByteBuffer.Size) )
  {
    if ( RtlpEnsureBufferSize(0, (int)&Path->ByteBuffer, v6) < 0 )
      return -1073741801;
    p_ByteBuffer = &Path->ByteBuffer;
  }
  Buffer = (wchar_t *)p_ByteBuffer->Buffer;
  Path->String.MaximumLength = Path->ByteBuffer.Size;
  Length = Path->String.Length;
  Path->String.Buffer = Buffer;
  v10 = v5->Length;
  LODWORD(v14) = Length - v10;
  memmove(&Buffer[*(unsigned __int16 *)v18 >> 1], &Buffer[v10 >> 1], v14);
  LODWORD(v13) = *(unsigned __int16 *)v18;
  memcpy(Path->String.Buffer, (const void *)v18[1], v13);
  v11 = (unsigned __int16)(2 * v17);
  Path->String.Length = v11;
  Path->String.Buffer[v11 >> 1] = 0;
  if ( v15 )
    *FilePart = (PWSTR)&Path->String.Buffer[v15 + (*(unsigned __int16 *)v18 >> 1) - (v5->Length >> 1)];
  return v4;
}
