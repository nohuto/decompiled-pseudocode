/*
 * XREFs of PiDmInitializeComparisonObject @ 0x14062B9B4
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x14062A0C4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x14062B90C (PiDmLookupObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x14062BAB0 (RtlHashUnicodeString.c)
 */

NTSTATUS __fastcall PiDmInitializeComparisonObject(wchar_t *a1, int a2, __int64 a3)
{
  wchar_t *Buffer; // r9
  NTSTATUS result; // eax
  __int64 v6; // rdx
  wchar_t *v7; // rax
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // dx
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)(a3 + 28) = a2;
  Buffer = a1;
  result = 0;
  String = 0LL;
  if ( !a1 )
    goto LABEL_13;
  v6 = 0x7FFFLL;
  v7 = a1;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  result = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
  {
    Length = 2 * (v6 != 0 ? 0x7FFF - v6 : 0);
    String.Buffer = Buffer;
    String.Length = Length;
    MaximumLength = Length + 2;
    String.MaximumLength = Length + 2;
  }
  else
  {
LABEL_13:
    Buffer = String.Buffer;
    MaximumLength = String.MaximumLength;
    Length = String.Length;
  }
  if ( result >= 0 )
  {
    if ( a2 == 3 )
    {
      if ( Length <= 8u )
        return -1073741772;
      String.Length = Length - 8;
      String.Buffer = Buffer + 4;
      String.MaximumLength = MaximumLength - 8;
    }
    return RtlHashUnicodeString(&String, 1u, 0, (PULONG)(a3 + 24));
  }
  return result;
}
