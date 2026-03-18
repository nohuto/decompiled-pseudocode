/*
 * XREFs of PopCloneUnicodeString @ 0x140989650
 * Callers:
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x14099E598 (PopDirectedDripsDiagCreateDeviceDescription.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140208AD8 (RtlUnicodeStringCopy.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopCloneUnicodeString(PCUNICODE_STRING SourceString, PUNICODE_STRING DestinationString)
{
  wchar_t *Buffer; // r8
  unsigned int Length; // eax
  unsigned int v6; // eax
  unsigned int v7; // esi
  NTSTATUS v8; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v10; // rbp

  Buffer = SourceString->Buffer;
  if ( !Buffer || (Length = SourceString->Length, Length < 2) )
  {
    *SourceString = 0LL;
    return 0;
  }
  v6 = Length >> 1;
  v7 = 2 * v6 + 2;
  if ( !Buffer[v6 - 1] )
    v7 = 2 * v6;
  if ( v7 < 0xFFFF )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v7, 1734960208LL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741670;
      goto LABEL_11;
    }
    DestinationString->Buffer = Pool2;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = v7;
    v8 = RtlUnicodeStringCopy(DestinationString, SourceString);
    if ( v8 < 0 )
    {
      ExFreePoolWithTag(v10, 0x67696450u);
      goto LABEL_11;
    }
    return 0;
  }
  v8 = -2147483643;
LABEL_11:
  *DestinationString = 0LL;
  return (unsigned int)v8;
}
