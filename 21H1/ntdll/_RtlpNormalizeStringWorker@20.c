/*
 * XREFs of _RtlpNormalizeStringWorker@20 @ 0x4B36860D
 * Callers:
 *     _RtlNormalizeString@20 @ 0x4B3685C0 (_RtlNormalizeString@20.c)
 * Callees:
 *     _Normalization__GuessCharCount@16 @ 0x4B3676B1 (_Normalization__GuessCharCount@16.c)
 *     _Normalization__Normalize@24 @ 0x4B367CF9 (_Normalization__Normalize@24.c)
 */

int __fastcall RtlpNormalizeStringWorker(int a1, const unsigned __int16 *a2, int a3, unsigned int a4, int *a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // kr00_4

  v5 = a3;
  v6 = a1;
  v7 = *a5;
  *a5 = 0;
  if ( a3 == -1 )
  {
    v8 = wcslen(a2);
    v6 = a1;
    v5 = v8 + 1;
  }
  if ( v7 <= 0 || !a4 )
    return Normalization__GuessCharCount(v6, (int)a2, v5, a5);
  if ( a4 >= (unsigned int)&a2[v5] || a4 + 2 * v7 <= (unsigned int)a2 )
    return Normalization__Normalize(a1, (int)a2, v5, a4, v7, a5);
  return -1073741811;
}
