/*
 * XREFs of PopCloneUnicodeString @ 0x1408E12A8
 * Callers:
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x1408F6F90 (PopDirectedDripsDiagCreateDeviceDescription.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1402AB600 (RtlUnicodeStringCopy.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopCloneUnicodeString(PCUNICODE_STRING SourceString, PUNICODE_STRING DestinationString)
{
  wchar_t *Buffer; // r8
  wchar_t *v5; // rdi
  unsigned int Length; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebp
  NTSTATUS v9; // ebx
  wchar_t *PoolWithTag; // rax

  Buffer = SourceString->Buffer;
  v5 = 0LL;
  if ( Buffer && (Length = SourceString->Length, Length >= 2) )
  {
    v7 = Length >> 1;
    v8 = 2 * v7 + 2;
    if ( !Buffer[v7 - 1] )
      v8 = 2 * v7;
    if ( v8 >= 0xFFFF )
    {
      v9 = -2147483643;
LABEL_15:
      *DestinationString = 0LL;
      return (unsigned int)v9;
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x67696450u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_15;
    }
    memset(PoolWithTag, 0, v8);
    DestinationString->Buffer = v5;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = v8;
    v9 = RtlUnicodeStringCopy(DestinationString, SourceString);
    if ( v9 >= 0 )
      return 0;
  }
  else
  {
    v9 = 0;
    *SourceString = 0LL;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x67696450u);
  if ( v9 < 0 )
    goto LABEL_15;
  return (unsigned int)v9;
}
