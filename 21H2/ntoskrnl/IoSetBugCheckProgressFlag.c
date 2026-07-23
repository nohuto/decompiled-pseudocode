/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x140502928
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140502B60 (IoUpdateBugCheckProgressEnvVariable.c)
 */

__int64 __fastcall IoSetBugCheckProgressFlag(int a1)
{
  __int64 result; // rax

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= a1;
    return IoUpdateBugCheckProgressEnvVariable();
  }
  return result;
}
