/*
 * XREFs of HalpLaBltAdd @ 0x1404D95E8
 * Callers:
 *     HalpLaAllocateBlt @ 0x1404D93F4 (HalpLaAllocateBlt.c)
 *     HalpLaDeleteBlt @ 0x1404D96B4 (HalpLaDeleteBlt.c)
 *     HalpLaReserveRange @ 0x1404D99C4 (HalpLaReserveRange.c)
 *     HalpLapDeleteSubtree @ 0x1404D9BE0 (HalpLapDeleteSubtree.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall HalpLaBltAdd(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r8
  __int64 **result; // rax

  _BitScanForward64(&v2, a1[8]);
  v3 = *(_QWORD *)(a2 + 64) + 16LL * (unsigned int)(v2 - 12);
  result = *(__int64 ***)(v3 + 8);
  if ( *result != (__int64 *)v3 )
    __fastfail(3u);
  *a1 = v3;
  a1[1] = (__int64)result;
  *result = a1;
  *(_QWORD *)(v3 + 8) = a1;
  return result;
}
