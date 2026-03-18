/*
 * XREFs of FinishHash @ 0x1C0018E58
 * Callers:
 *     ComputeFlushPeriod @ 0x1C00B3864 (ComputeFlushPeriod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FinishHash(_DWORD *a1)
{
  __int64 result; // rax

  result = 32769 * ((9 * *a1) ^ ((unsigned int)(9 * *a1) >> 11));
  *a1 = result;
  return result;
}
