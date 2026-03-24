/*
 * XREFs of HalpGetAdapter @ 0x14076474C
 * Callers:
 *     HaliGetDmaAdapter @ 0x140379630 (HaliGetDmaAdapter.c)
 *     HalGetAdapter @ 0x140864260 (HalGetAdapter.c)
 * Callees:
 *     HalpAreDriversDmarCompatible @ 0x140379674 (HalpAreDriversDmarCompatible.c)
 *     HalGetAdapterV2 @ 0x140764810 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407C33B0 (HalGetAdapterV3.c)
 */

__int64 __fastcall HalpGetAdapter(__int64 a1, struct _DEVICE_OBJECT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  char v7; // al
  __int64 v8; // r8
  unsigned int v9; // eax

  v3 = 0LL;
  *a3 = 0;
  if ( !a2 || (v7 = HalpAreDriversDmarCompatible(a2), v8 = 2LL, !v7) )
    v8 = 0LL;
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 2u && !(_DWORD)v8 )
    return HalGetAdapterV2(a1, a2, a3);
  if ( v9 == 3 || v9 <= 2 && *(_BYTE *)(a1 + 4) && (_DWORD)v8 == 2 )
    return HalGetAdapterV3(a1, a2, v8, a3);
  return v3;
}
