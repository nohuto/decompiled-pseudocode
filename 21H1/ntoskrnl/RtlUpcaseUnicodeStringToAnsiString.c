/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x14090B650
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14061B9D0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x140746570 (RtlxUnicodeStringToAnsiSize.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(unsigned __int16 *a1, const UNICODE_STRING *a2, char a3)
{
  ULONG v6; // eax
  PVOID StringRoutine; // rax
  ULONG v9; // edx
  NTSTATUS v10; // edi
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+20h] BYREF

  BytesInMultiByteString = 0;
  v6 = RtlxUnicodeStringToAnsiSize(a2);
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  *a1 = v6 - 1;
  if ( a3 )
  {
    a1[1] = v6;
    StringRoutine = ExpAllocateStringRoutine(v6);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v10 = RtlUpcaseUnicodeToMultiByteN(*((PCHAR *)a1 + 1), *a1, &BytesInMultiByteString, a2->Buffer, a2->Length);
  if ( v10 >= 0 )
  {
    *(_BYTE *)(BytesInMultiByteString + *((_QWORD *)a1 + 1)) = 0;
    v10 = 0;
  }
  if ( v10 < 0 )
  {
    if ( a3 )
    {
      ExFreePoolWithTag(*((PVOID *)a1 + 1), v9);
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v10;
}
