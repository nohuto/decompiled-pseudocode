/*
 * XREFs of _RtlpRemoveInvertedFunctionTableEntry@8 @ 0x4B2E6870
 * Callers:
 *     _RtlxRemoveInvertedFunctionTable@8 @ 0x4B2E6831 (_RtlxRemoveInvertedFunctionTable@8.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __fastcall RtlpRemoveInvertedFunctionTableEntry(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  _InterlockedIncrement(&dword_4B3A9368);
  v2 = LdrpInvertedFunctionTable;
  if ( LdrpInvertedFunctionTable != 2 )
  {
    memmove(&dword_4B3A9370[4 * a2], (char *)&unk_4B3A9380 + 16 * a2, 16 * (LdrpInvertedFunctionTable - a2) - 16);
    v2 = LdrpInvertedFunctionTable;
  }
  result = v2 - 1;
  LdrpInvertedFunctionTable = result;
  _InterlockedIncrement(&dword_4B3A9368);
  return result;
}
