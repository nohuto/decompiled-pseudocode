/*
 * XREFs of KsepStringAnsiToUnicode @ 0x1407BF210
 * Callers:
 *     KsepMatchInitCpuInfo @ 0x140A6B58C (KsepMatchInitCpuInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140A6B61C (KsepMatchInitAcpiOemInfo.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall KsepStringAnsiToUnicode(wchar_t *a1, unsigned __int16 a2, char *a3, unsigned __int16 a4)
{
  ANSI_STRING v5; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v6; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(&v5.MaximumLength + 1) = 0;
  *(_DWORD *)(&v6.MaximumLength + 1) = 0;
  v6.Buffer = a1;
  v6.MaximumLength = a2;
  v5.Buffer = a3;
  v6.Length = 0;
  v5.MaximumLength = a4;
  v5.Length = a4;
  return RtlAnsiStringToUnicodeString(&v6, &v5, 0);
}
