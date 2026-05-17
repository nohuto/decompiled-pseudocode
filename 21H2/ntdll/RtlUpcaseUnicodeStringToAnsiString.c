/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB4E0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1800626B0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800627D0 (RtlxUnicodeStringToOemSize.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBE0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(unsigned __int16 *a1, PWCH *a2, char a3)
{
  unsigned int v5; // eax
  __int64 StringRoutine; // rax
  int v8; // edi
  unsigned int v9; // [rsp+78h] [rbp+20h] BYREF

  v5 = RtlxUnicodeStringToOemSize(a2);
  if ( v5 > 0xFFFF )
    return 3221225712LL;
  *a1 = v5 - 1;
  if ( a3 )
  {
    a1[1] = v5;
    StringRoutine = NtdllpAllocateStringRoutine(v5);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v5 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v8 = RtlUpcaseUnicodeToMultiByteN(*((_QWORD *)a1 + 1), *a1, (__int64)&v9);
  if ( v8 >= 0 )
  {
    *(_BYTE *)(v9 + *((_QWORD *)a1 + 1)) = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( a3 )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v8;
}
