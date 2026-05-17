/*
 * XREFs of _RtlPrefixUnicodeString@12 @ 0x4B2E40C0
 * Callers:
 *     _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107 (_RtlpProcessIFEOKeyFilter@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlpDetermineDosPathNameType4@16 @ 0x4B2E400E (_RtlpDetermineDosPathNameType4@16.c)
 *     _RtlNtPathNameToDosPathName@16 @ 0x4B32D370 (_RtlNtPathNameToDosPathName@16.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

char __stdcall RtlPrefixUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // edx
  unsigned __int16 *v4; // edi
  unsigned __int16 *v5; // edx
  int v6; // ebx
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // si
  int v10; // ecx
  unsigned __int16 *v11; // [esp+Ch] [ebp-4h]

  v3 = *a1;
  v4 = (unsigned __int16 *)*((_DWORD *)a1 + 1);
  if ( *a2 >= v3 )
  {
    v5 = (unsigned __int16 *)((char *)v4 + v3);
    v11 = v5;
    if ( v4 >= v5 )
      return 1;
    if ( a3 )
    {
      v6 = *((_DWORD *)a2 + 1) - (_DWORD)v4;
      while ( 1 )
      {
        v7 = *(unsigned __int16 *)((char *)v4 + v6);
        if ( *v4 != v7 )
        {
          v9 = NLS_UPCASE(v7);
          if ( NLS_UPCASE(*v4) != v9 )
            return 0;
          v5 = v11;
        }
        if ( ++v4 >= v5 )
          return 1;
      }
    }
    v10 = *((_DWORD *)a2 + 1) - (_DWORD)v4;
    while ( *v4 == *(unsigned __int16 *)((char *)v4 + v10) )
    {
      if ( ++v4 >= v5 )
        return 1;
    }
  }
  return 0;
}
