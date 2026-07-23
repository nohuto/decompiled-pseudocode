/*
 * XREFs of HalpGetFullPmuOwnership @ 0x1404B9324
 * Callers:
 *     HalAllocateHardwareCounters @ 0x1408643E0 (HalAllocateHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetFullPmuOwnership(__int64 *a1)
{
  __int64 v1; // rax

  if ( _InterlockedCompareExchange(&HalpPmuInUse, 1, 0) )
    return 3221225626LL;
  v1 = HalpFullPmuHandle + 1;
  HalpFullPmuHandle = v1;
  if ( v1 == 3221225472LL )
  {
    v1 = 0x80000000LL;
    HalpFullPmuHandle = 0x80000000LL;
  }
  *a1 = v1;
  return 0LL;
}
