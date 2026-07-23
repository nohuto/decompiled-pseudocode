/*
 * XREFs of _RtlDnsHostNameToComputerName@12 @ 0x4B34DAA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0 (_RtlOemStringToUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlUpcaseUnicodeToOemN@20 @ 0x4B3444F0 (_RtlUpcaseUnicodeToOemN@20.c)
 *     _RtlpDidUnicodeToOemWork@8 @ 0x4B344552 (_RtlpDidUnicodeToOemWork@8.c)
 */

NTSTATUS __cdecl RtlDnsHostNameToComputerName(
        PUNICODE_STRING ComputerNameString,
        PUNICODE_STRING DnsHostNameString,
        BOOLEAN AllocateComputerNameString)
{
  wchar_t *Buffer; // esi
  int v4; // eax
  unsigned __int16 v5; // cx
  NTSTATUS result; // eax
  ULONG BytesInOemString; // [esp+8h] [ebp-28h] BYREF
  _STRING SourceString; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v9[2]; // [esp+14h] [ebp-1Ch] BYREF
  CHAR OemString[16]; // [esp+1Ch] [ebp-14h] BYREF

  Buffer = DnsHostNameString->Buffer;
  v9[0] = *(_DWORD *)&DnsHostNameString->Length;
  v4 = 0;
  v5 = v9[0];
  v9[1] = Buffer;
  if ( LOWORD(v9[0]) >> 1 )
  {
    while ( Buffer[v4] != 46 )
    {
      if ( ++v4 >= (unsigned int)(LOWORD(v9[0]) >> 1) )
        goto LABEL_6;
    }
    v5 = 2 * v4;
    LOWORD(v9[0]) = 2 * v4;
  }
LABEL_6:
  if ( v5 < 2u )
    return -1073741534;
  result = RtlUpcaseUnicodeToOemN(OemString, 0xFu, &BytesInOemString, (PCWCH)Buffer, v5);
  if ( result >= 0 || result == -2147483643 )
  {
    SourceString.Buffer = OemString;
    SourceString.MaximumLength = 16;
    SourceString.Length = BytesInOemString;
    if ( RtlpDidUnicodeToOemWork(&SourceString.Length, (int)v9) )
    {
      result = RtlOemStringToUnicodeString(ComputerNameString, &SourceString, AllocateComputerNameString);
      if ( result >= 0 )
        return 0;
      return result;
    }
    return -1073741534;
  }
  return result;
}
