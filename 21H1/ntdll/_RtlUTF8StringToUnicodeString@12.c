/*
 * XREFs of _RtlUTF8StringToUnicodeString@12 @ 0x4B36A6A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 *     _CountUTF8ToUnicode@12 @ 0x4B2DD464 (_CountUTF8ToUnicode@12.c)
 */

int __stdcall RtlUTF8StringToUnicodeString(__int16 *a1, char **a2, char a3)
{
  int result; // eax
  int v4; // eax
  unsigned __int16 v5; // cx
  int StringRoutine; // eax
  unsigned int v7; // edx
  int v8; // edi
  unsigned int v9; // [esp+4h] [ebp-4h] BYREF

  result = CountUTF8ToUnicode(a2[1], *(unsigned __int16 *)a2 + 1, &v9);
  if ( result >= 0 )
  {
    v4 = v9;
    if ( v9 > 0xFFFE )
      return -1073741584;
    v5 = v9 - 2;
    *a1 = v9 - 2;
    if ( a3 )
    {
      a1[1] = v4;
      StringRoutine = NtdllpAllocateStringRoutine(v4);
      *((_DWORD *)a1 + 1) = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      v5 = *a1;
    }
    else
    {
      v7 = v5 + 2;
      if ( v7 > (unsigned __int16)a1[1] || v7 < 2 )
        return -2147483643;
    }
    v8 = RtlUTF8ToUnicodeN(*((char **)a1 + 1), v5, &v9, a2[1], *(unsigned __int16 *)a2);
    if ( v8 < 0 )
    {
      if ( a3 )
      {
        RtlDeleteBoundaryDescriptor(*((_DWORD *)a1 + 1));
        *((_DWORD *)a1 + 1) = 0;
      }
    }
    else
    {
      v8 = 0;
      *(_WORD *)(*((_DWORD *)a1 + 1) + 2 * (v9 >> 1)) = 0;
    }
    return v8;
  }
  return result;
}
