/*
 * XREFs of CcGetVacbLargeOffset @ 0x14022C898
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x14031A194 (CcGetVirtualAddressIfMapped.c)
 *     CcGetVacbMiss @ 0x14031B710 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetVacbLargeOffset(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r11
  int v4; // r9d
  int v5; // r10d
  __int64 result; // rax
  __int64 v7; // rdx

  v2 = 0;
  v3 = a2;
  v4 = 25;
  do
  {
    v5 = v4;
    v4 += 7;
    ++v2;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v4 );
  for ( result = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (a2 >> v5));
        result && v2;
        result = *(_QWORD *)(result + 8 * (v3 >> v5)) )
  {
    v7 = 1LL << v5;
    v5 -= 7;
    --v2;
    v3 &= v7 - 1;
  }
  return result;
}
