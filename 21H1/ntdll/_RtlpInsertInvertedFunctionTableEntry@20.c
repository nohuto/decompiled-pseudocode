/*
 * XREFs of _RtlpInsertInvertedFunctionTableEntry@20 @ 0x4B2B9D68
 * Callers:
 *     _RtlInsertInvertedFunctionTable@8 @ 0x4B2B9D0A (_RtlInsertInvertedFunctionTable@8.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __fastcall RtlpInsertInvertedFunctionTableEntry(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int result; // eax
  unsigned int v7; // esi
  unsigned int *v8; // ecx
  int v9; // esi

  result = LdrpInvertedFunctionTable;
  if ( LdrpInvertedFunctionTable == dword_4B3A9364 )
  {
    byte_4B3A936C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_4B3A9368);
    v7 = 1;
    if ( LdrpInvertedFunctionTable != 1 )
    {
      if ( (unsigned int)LdrpInvertedFunctionTable > 1 )
      {
        v8 = (unsigned int *)&unk_4B3A9384;
        do
        {
          if ( a2 < *v8 )
            break;
          ++v7;
          v8 += 4;
        }
        while ( v7 < LdrpInvertedFunctionTable );
      }
      if ( v7 != LdrpInvertedFunctionTable )
        memmove((char *)&unk_4B3A9380 + 16 * v7, &dword_4B3A9370[4 * v7], 16 * (LdrpInvertedFunctionTable - v7));
    }
    v9 = 4 * v7;
    dword_4B3A9370[v9] = a3;
    dword_4B3A9378[v9] = a4;
    result = a5;
    dword_4B3A9374[v9] = a2;
    dword_4B3A937C[v9] = a5;
    ++LdrpInvertedFunctionTable;
    _InterlockedIncrement(&dword_4B3A9368);
  }
  return result;
}
