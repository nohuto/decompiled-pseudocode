/*
 * XREFs of RtlGetLengthWithoutTrailingPathSeperators @ 0x180085970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetLengthWithoutTrailingPathSeperators(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  NTSTATUS v3; // r9d
  ULONG v4; // ecx
  wchar_t *Buffer; // r10
  __int64 v6; // rdx

  v3 = 0;
  if ( Length )
    *Length = 0;
  if ( !PathString || !Length || Flags )
    return -1073741811;
  v4 = PathString->Length >> 1;
  if ( v4 )
  {
    Buffer = PathString->Buffer;
    do
    {
      v6 = v4 - 1;
      if ( Buffer[v6] != 92 && Buffer[v6] != 47 )
        break;
      --v4;
    }
    while ( (_DWORD)v6 );
  }
  *Length = v4;
  return v3;
}
