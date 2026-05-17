/*
 * XREFs of _RtlpHeapQueryTotalReserveSize@8 @ 0x4B358310
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQueryMemoryUsageHeap@12 @ 0x4B35970A (_RtlpQueryMemoryUsageHeap@12.c)
 */

int __stdcall RtlpHeapQueryTotalReserveSize(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  if ( a1[2] == -571548178 )
  {
    v7 = (a1[19] << 12) + (a1[32] << 12);
    v6 = a1[33] << 12;
    v2 = (a1[20] << 12) + v6;
    v3 = 0;
LABEL_5:
    v4 = v7;
    a2[1] += v2;
    *a2 += v4;
    ++a2[2];
    return v3;
  }
  v3 = RtlpQueryMemoryUsageHeap(&v6);
  if ( v3 >= 0 )
  {
    v2 = v6;
    goto LABEL_5;
  }
  return v3;
}
