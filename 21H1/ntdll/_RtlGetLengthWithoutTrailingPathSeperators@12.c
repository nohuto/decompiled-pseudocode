/*
 * XREFs of _RtlGetLengthWithoutTrailingPathSeperators@12 @ 0x4B32D310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetLengthWithoutTrailingPathSeperators(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  NTSTATUS v3; // esi
  ULONG v4; // ecx
  wchar_t *v5; // eax
  int v6; // edi

  v3 = 0;
  if ( Length )
    *Length = 0;
  if ( !PathString || !Length || Flags )
    return -1073741811;
  v4 = PathString->Length >> 1;
  if ( v4 )
  {
    v5 = &PathString->Buffer[v4 - 1];
    do
    {
      v6 = *v5;
      if ( v6 != 92 && v6 != 47 )
        break;
      --v5;
      --v4;
    }
    while ( v4 );
  }
  *Length = v4;
  return v3;
}
