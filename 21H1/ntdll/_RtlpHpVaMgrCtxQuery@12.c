/*
 * XREFs of _RtlpHpVaMgrCtxQuery@12 @ 0x4B37AD9C
 * Callers:
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 * Callees:
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlSparseArrayElementAllocated@8 @ 0x4B37E3A6 (_RtlSparseArrayElementAllocated@8.c)
 */

int __fastcall RtlpHpVaMgrCtxQuery(int a1, int a2, _DWORD *a3)
{
  int v5; // eax
  int v6; // esi
  int v8; // eax
  int v9; // ecx

  v5 = RtlSparseArrayElementAllocated(a1 + 8, (unsigned int)(a2 - *(_DWORD *)(a1 + 4)) >> 20);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(_BYTE *)v5 & 4) != 0 )
      v8 = *(_DWORD *)(v5 + 12);
    else
      v8 = *(unsigned __int16 *)(v5 + 12);
    *a3 = v8 << 20;
    v9 = 28 * *(unsigned __int8 *)(v6 + 1);
    a3[4] = 8;
    a3[1] = (*(unsigned __int8 *)(v9 + a1 + 86) >> 1) & 3;
    a3[2] = *(unsigned __int8 *)(v9 + a1 + 85);
    a3[3] = v6 + 4;
    return 0;
  }
  else
  {
    RtlpLogHeapFailure(22, a2, 0, 0, 0, 0);
    return -1073741823;
  }
}
