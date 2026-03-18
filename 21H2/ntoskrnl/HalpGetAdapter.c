/*
 * XREFs of HalpGetAdapter @ 0x140845CD8
 * Callers:
 *     HaliGetDmaAdapter @ 0x1403CCF90 (HaliGetDmaAdapter.c)
 *     HalGetAdapter @ 0x1409084A0 (HalGetAdapter.c)
 * Callees:
 *     HalpAreDriversDmarCompatible @ 0x1403CCFD4 (HalpAreDriversDmarCompatible.c)
 *     HalGetAdapterV2 @ 0x140845A60 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x140845F30 (HalGetAdapterV3.c)
 */

__int64 __fastcall HalpGetAdapter(__int64 a1, struct _DEVICE_OBJECT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi

  v3 = 0LL;
  *a3 = 0;
  v7 = 0;
  if ( a2 && HalpAreDriversDmarCompatible(a2) )
    v7 = 3;
  if ( *(_DWORD *)a1 <= 2u )
  {
    if ( !v7 )
      return HalGetAdapterV2(a1, (__int64)a2, a3);
    if ( !*(_BYTE *)(a1 + 4) )
      return v3;
    return HalGetAdapterV3(a1, a2, v7, a3);
  }
  if ( *(_DWORD *)a1 == 3 )
    return HalGetAdapterV3(a1, a2, v7, a3);
  return v3;
}
