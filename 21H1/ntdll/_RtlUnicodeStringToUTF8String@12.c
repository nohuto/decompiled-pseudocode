/*
 * XREFs of _RtlUnicodeStringToUTF8String@12 @ 0x4B36A770
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 *     _CountUnicodeToUTF8@12 @ 0x4B2E47B1 (_CountUnicodeToUTF8@12.c)
 */

int __stdcall RtlUnicodeStringToUTF8String(unsigned __int16 *a1, char **a2, char a3)
{
  int result; // eax
  int v4; // eax
  unsigned __int16 v5; // cx
  int StringRoutine; // eax
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v10; // edi
  unsigned int v11; // [esp+4h] [ebp-8h] BYREF
  int v12; // [esp+8h] [ebp-4h]

  v12 = 0;
  result = CountUnicodeToUTF8(a2[1], *(unsigned __int16 *)a2 + 2, &v11);
  if ( result >= 0 )
  {
    v4 = v11;
    if ( v11 > 0xFFFF )
      return -1073741584;
    v5 = v11 - 1;
    *a1 = v11 - 1;
    if ( a3 )
    {
      a1[1] = v4;
      StringRoutine = NtdllpAllocateStringRoutine(v4);
      *((_DWORD *)a1 + 1) = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      v7 = *a1;
    }
    else
    {
      v8 = a1[1];
      v7 = v5;
      if ( v5 >= v8 )
      {
        if ( !v8 )
          return -2147483643;
        v9 = v8 - 1;
        v12 = -2147483643;
        *a1 = v9;
        v7 = v9;
      }
    }
    v10 = RtlUnicodeToUTF8N(*((_BYTE **)a1 + 1), v7, &v11, (unsigned int *)a2[1], *(unsigned __int16 *)a2);
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        RtlDeleteBoundaryDescriptor(*((_DWORD *)a1 + 1));
        *((_DWORD *)a1 + 1) = 0;
      }
    }
    else
    {
      v10 = v12;
      *(_BYTE *)(v11 + *((_DWORD *)a1 + 1)) = 0;
    }
    return v10;
  }
  return result;
}
