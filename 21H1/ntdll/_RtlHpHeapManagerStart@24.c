/*
 * XREFs of _RtlHpHeapManagerStart@24 @ 0x4B375DB6
 * Callers:
 *     _RtlHpInitializeHeapManager@0 @ 0x4B37080D (_RtlHpInitializeHeapManager@0.c)
 * Callees:
 *     _RtlpHpVaMgrCtxStart@20 @ 0x4B37AE19 (_RtlpHpVaMgrCtxStart@20.c)
 *     _RtlCSparseBitmapStart@16 @ 0x4B37E275 (_RtlCSparseBitmapStart@16.c)
 */

int __thiscall RtlHpHeapManagerStart(void *this, int a2, __int64 a3, int a4)
{
  int result; // eax
  int v5; // ecx

  dword_4B3A6DC4 = 0;
  result = RtlCSparseBitmapStart(this, 0);
  if ( result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart(v5, a3 - 1, v5);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
