/*
 * XREFs of _RtlHashUnicodeString@16 @ 0x4B2A7970
 * Callers:
 *     _RtlpFindUnicodeStringInSection@32 @ 0x4B2CA720 (_RtlpFindUnicodeStringInSection@32.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

NTSTATUS __cdecl RtlHashUnicodeString(
        PUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  NTSTATUS v4; // esi
  int v5; // ebx
  PULONG v6; // edx
  wchar_t *Buffer; // ecx
  int v8; // edi
  wchar_t *v9; // esi
  int v10; // ecx
  int v12; // eax

  v4 = 0;
  v5 = 0;
  if ( !String )
    return -1073741811;
  v6 = HashValue;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v8 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( v8 )
  {
    if ( CaseInSensitive )
    {
      v9 = Buffer;
      do
      {
        v10 = *v9++;
        v5 = (unsigned __int16)NLS_UPCASE(v10) + 65599 * v5;
        --v8;
      }
      while ( v8 );
      v6 = HashValue;
      v4 = 0;
    }
    else
    {
      do
      {
        v12 = *Buffer++;
        v5 = v12 + 65599 * v5;
        --v8;
      }
      while ( v8 );
    }
  }
  *v6 = v5;
  return v4;
}
