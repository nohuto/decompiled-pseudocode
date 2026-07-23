/*
 * XREFs of _RtlpQueryRegistryDirect@16 @ 0x4B2EB1AB
 * Callers:
 *     _RtlpCallQueryRegistryRoutine@28 @ 0x4B2EB0AD (_RtlpCallQueryRegistryRoutine@28.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpQueryRegistryDirect(unsigned int a1, unsigned int *a2, unsigned int Size, unsigned int *Size_4)
{
  unsigned int v6; // edx
  unsigned __int16 v7; // si
  PVOID StringRoutine; // eax
  int v9; // ecx
  size_t v10; // [esp-4h] [ebp-14h]

  if ( a1 != 1 && a1 != 2 && a1 != 7 )
  {
    if ( Size <= 4 )
    {
      if ( Size_4 != a2 )
      {
        if ( Size )
        {
          LODWORD(v10) = Size;
          memcpy(Size_4, a2, v10);
        }
      }
      return 0;
    }
    v6 = *Size_4;
    if ( (*Size_4 & 0x80000000) == 0 )
    {
      if ( v6 >= Size + 8 )
      {
        LODWORD(v10) = Size;
        *Size_4 = Size;
        Size_4[1] = a1;
        memcpy(Size_4 + 2, a2, v10);
        return 0;
      }
    }
    else if ( -v6 >= Size )
    {
      LODWORD(v10) = Size;
      memcpy(Size_4, a2, v10);
      return 0;
    }
    return -1073741789;
  }
  v7 = -2;
  if ( Size <= 0xFFFE )
    v7 = Size;
  StringRoutine = (PVOID)Size_4[1];
  if ( StringRoutine )
  {
    if ( v7 > *((_WORD *)Size_4 + 1) )
      return -1073741789;
    v9 = v7;
LABEL_17:
    LODWORD(v10) = v9;
    memcpy(StringRoutine, a2, v10);
    *(_WORD *)Size_4 = v7 - 2;
    return 0;
  }
  StringRoutine = NtdllpAllocateStringRoutine(v7);
  Size_4[1] = (unsigned int)StringRoutine;
  if ( StringRoutine )
  {
    v9 = v7;
    *((_WORD *)Size_4 + 1) = v7;
    goto LABEL_17;
  }
  return -1073741801;
}
