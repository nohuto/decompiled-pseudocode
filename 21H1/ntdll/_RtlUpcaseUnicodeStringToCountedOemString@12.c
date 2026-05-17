/*
 * XREFs of _RtlUpcaseUnicodeStringToCountedOemString@12 @ 0x4B34DE20
 * Callers:
 *     _RtlIsNameLegalDOS8Dot3@12 @ 0x4B362D70 (_RtlIsNameLegalDOS8Dot3@12.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlxUnicodeStringToOemSize@4 @ 0x4B2E0C60 (_RtlxUnicodeStringToOemSize@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlUpcaseUnicodeToOemN@20 @ 0x4B3444F0 (_RtlUpcaseUnicodeToOemN@20.c)
 *     _RtlpDidUnicodeToOemWork@8 @ 0x4B344552 (_RtlpDidUnicodeToOemWork@8.c)
 *     _RtlUpcaseUnicodeStringToCountedOemString@12 @ 0x4B34DE20 (_RtlUpcaseUnicodeStringToCountedOemString@12.c)
 */

int __thiscall RtlUpcaseUnicodeStringToCountedOemString(
        void *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        char a4)
{
  unsigned int v4; // eax
  int StringRoutine; // eax
  signed int v7; // esi
  unsigned int v8; // [esp+10h] [ebp-24h] BYREF
  int v9; // [esp+14h] [ebp-20h]
  int v10; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v4 = RtlxUnicodeStringToOemSize(this, (PWCH *)a3) - 1;
  if ( !v4 )
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    return 0;
  }
  if ( v4 > 0xFFFF )
    return -1073741584;
  *a2 = v4;
  if ( a4 )
  {
    a2[1] = v4;
    StringRoutine = NtdllpAllocateStringRoutine(v4);
    *((_DWORD *)a2 + 1) = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)v4 > a2[1] )
  {
    return -2147483643;
  }
  v10 = 0;
  ms_exc.registration.TryLevel = 0;
  v9 = 1;
  v7 = RtlUpcaseUnicodeToOemN(*((_DWORD *)a2 + 1), *a2, &v8, *((_DWORD *)a3 + 1), *a3);
  v10 = v7;
  if ( v7 >= 0 )
  {
    if ( !RtlpDidUnicodeToOemWork(a2, (int)a3) )
    {
      v7 = -1073741470;
      v10 = -1073741470;
    }
    if ( v7 >= 0 )
    {
      v7 = 0;
      v10 = 0;
    }
  }
  ms_exc.registration.TryLevel = -2;
  v9 = 0;
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
