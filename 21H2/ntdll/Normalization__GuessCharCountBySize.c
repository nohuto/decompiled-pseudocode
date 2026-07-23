/*
 * XREFs of Normalization__GuessCharCountBySize @ 0x180100340
 * Callers:
 *     RtlpNormalizeStringWorker @ 0x180080BD0 (RtlpNormalizeStringWorker.c)
 *     Normalization__Normalize @ 0x180080C58 (Normalization__Normalize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__GuessCharCountBySize(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a2 + (a2 >> 3));
  if ( (int)result < 64 )
  {
    result = (unsigned int)(a2 * *(_DWORD *)(a1 + 24));
    if ( (int)result > 64 )
      return 64LL;
  }
  return result;
}
