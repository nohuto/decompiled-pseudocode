/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x140552F34
 * Callers:
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140553164 (IoUpdateBugCheckProgressEnvVariable.c)
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
