/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x140915120
 * Callers:
 *     PiGetDefaultMessageString @ 0x1407562E4 (PiGetDefaultMessageString.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x140589478 (CountUTF8ToUnicode.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x1406E1920 (RtlUTF8ToUnicodeN.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlUTF8StringToUnicodeString(__int16 *a1, unsigned __int16 *a2, char a3)
{
  int v6; // edx
  char *v7; // rcx
  __int64 result; // rax
  SIZE_T v9; // rax
  unsigned __int16 v10; // cx
  PVOID StringRoutine; // rax
  unsigned __int64 v12; // rdx
  ULONG v13; // edx
  NTSTATUS v14; // edi
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp+20h] BYREF

  v6 = *a2 + 1;
  LODWORD(NumberOfBytes) = 0;
  v7 = (char *)*((_QWORD *)a2 + 1);
  UnicodeStringActualByteCount = 0;
  result = CountUTF8ToUnicode(v7, v6, &NumberOfBytes);
  if ( (int)result >= 0 )
  {
    v9 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes > 0xFFFE )
      return 3221225712LL;
    v10 = NumberOfBytes - 2;
    *a1 = NumberOfBytes - 2;
    if ( a3 )
    {
      a1[1] = v9;
      StringRoutine = ExpAllocateStringRoutine(v9);
      *((_QWORD *)a1 + 1) = StringRoutine;
      if ( !StringRoutine )
        return 3221225495LL;
      v10 = *a1;
    }
    else
    {
      v12 = v10 + 2LL;
      if ( v12 > (unsigned __int16)a1[1] || v12 < 2 )
        return 2147483653LL;
    }
    v14 = RtlUTF8ToUnicodeN(*((PWSTR *)a1 + 1), v10, &UnicodeStringActualByteCount, *((PCCH *)a2 + 1), *a2);
    if ( v14 < 0 )
    {
      if ( a3 )
      {
        ExFreePoolWithTag(*((PVOID *)a1 + 1), v13);
        *((_QWORD *)a1 + 1) = 0LL;
      }
    }
    else
    {
      v14 = 0;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)UnicodeStringActualByteCount >> 1)) = 0;
    }
    return (unsigned int)v14;
  }
  return result;
}
