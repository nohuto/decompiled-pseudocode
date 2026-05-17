/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x18005A910
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x18005A9E0 (RtlUTF8ToUnicodeN.c)
 *     CountUTF8ToUnicode @ 0x18005AD90 (CountUTF8ToUnicode.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBE0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlUTF8StringToUnicodeString(__int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 result; // rax
  unsigned int v7; // eax
  unsigned __int16 v8; // cx
  __int64 StringRoutine; // rax
  int v10; // edi
  unsigned __int64 v11; // rdx
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  result = CountUTF8ToUnicode(*((_QWORD *)a2 + 1), (unsigned int)*a2 + 1, &v12);
  if ( (int)result >= 0 )
  {
    v7 = v12;
    if ( v12 > 0xFFFE )
      return 3221225712LL;
    v8 = v12 - 2;
    *a1 = v12 - 2;
    if ( a3 )
    {
      a1[1] = v7;
      StringRoutine = NtdllpAllocateStringRoutine(v7);
      *((_QWORD *)a1 + 1) = StringRoutine;
      if ( !StringRoutine )
        return 3221225495LL;
      v8 = *a1;
    }
    else
    {
      v11 = v8 + 2LL;
      if ( v11 > (unsigned __int16)a1[1] || v11 < 2 )
        return 2147483653LL;
    }
    v10 = RtlUTF8ToUnicodeN(*((_QWORD *)a1 + 1), v8, (unsigned int)&v12, *((_QWORD *)a2 + 1), *a2);
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
        *((_QWORD *)a1 + 1) = 0LL;
      }
    }
    else
    {
      v10 = 0;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v12 >> 1)) = 0;
    }
    return (unsigned int)v10;
  }
  return result;
}
