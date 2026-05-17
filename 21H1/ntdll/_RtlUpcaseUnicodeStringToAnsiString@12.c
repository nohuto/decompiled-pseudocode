/*
 * XREFs of _RtlUpcaseUnicodeStringToAnsiString@12 @ 0x4B34DD30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUpcaseUnicodeToMultiByteN@20 @ 0x4B2E0B90 (_RtlUpcaseUnicodeToMultiByteN@20.c)
 *     _RtlxUnicodeStringToOemSize@4 @ 0x4B2E0C60 (_RtlxUnicodeStringToOemSize@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlUpcaseUnicodeStringToAnsiString@12 @ 0x4B34DD30 (_RtlUpcaseUnicodeStringToAnsiString@12.c)
 */

int __thiscall RtlUpcaseUnicodeStringToAnsiString(void *this, unsigned __int16 *a2, unsigned __int16 *a3, char a4)
{
  ULONG v4; // eax
  int StringRoutine; // eax
  int v7; // edi
  int v8; // [esp+14h] [ebp-20h] BYREF
  int v9; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v4 = RtlxUnicodeStringToOemSize(this, (PWCH *)a3);
  if ( v4 > 0xFFFF )
    return -1073741584;
  *a2 = v4 - 1;
  if ( a4 )
  {
    a2[1] = v4;
    StringRoutine = NtdllpAllocateStringRoutine(v4);
    *((_DWORD *)a2 + 1) = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v4 - 1) >= a2[1] )
  {
    return -2147483643;
  }
  v9 = 0;
  ms_exc.registration.TryLevel = 0;
  v7 = RtlUpcaseUnicodeToMultiByteN(*((_DWORD *)a2 + 1), *a2, (int)&v8, *((_DWORD *)a3 + 1), *a3);
  v9 = v7;
  if ( v7 >= 0 )
  {
    *(_BYTE *)(v8 + *((_DWORD *)a2 + 1)) = 0;
    v7 = 0;
    v9 = 0;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v7 < 0 )
  {
    if ( a4 )
    {
      RtlDeleteBoundaryDescriptor(*((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 1) = 0;
    }
  }
  return v7;
}
