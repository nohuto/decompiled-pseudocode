/*
 * XREFs of _RtlpHpSegSegmentInitialize@12 @ 0x4B37D82A
 * Callers:
 *     _RtlpHpSegContextReserve@12 @ 0x4B37B777 (_RtlpHpSegContextReserve@12.c)
 *     _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863 (_RtlpHpSegPageRangeAllocate@12.c)
 * Callees:
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 */

int __fastcall RtlpHpSegSegmentInitialize(int a1, int a2, unsigned int a3)
{
  unsigned __int8 v5; // al
  int v6; // edi
  _DWORD *v7; // ebx
  int v8; // eax
  unsigned __int8 *v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  int result; // eax
  unsigned int v15; // [esp+Ch] [ebp-4h] BYREF

  if ( (*(_BYTE *)(a1 + 9) & 7) != 0 )
  {
    RtlpHpQueryVA(a2 & 0xFFE00000, &v15, 0, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
    *(_DWORD *)(a2 + 12) = v15;
  }
  v5 = *(_BYTE *)(a1 + 6);
  v6 = a2 + 16 * v5;
  *(_BYTE *)(v6 + 15) = -v5;
  v7 = (_DWORD *)(v6 + 12);
  *(_BYTE *)(v6 + 12) |= 2u;
  v8 = 1 << *(_BYTE *)(a1 + 5);
  if ( a3 )
  {
    v9 = (unsigned __int8 *)(v6 + 12);
    v10 = a3;
    v11 = v8;
    do
    {
      v15 = v10;
      if ( v10 >= v11 )
        v15 = v11;
      v12 = *v9;
      LOBYTE(v15) = 32 * v15;
      v13 = v15 | v12 & 0x1F;
      *v9 = v13;
      v9 += 16;
      v10 -= v13 >> 5;
    }
    while ( v10 );
    v7 = (_DWORD *)(v6 + 12);
  }
  *v7 ^= (*v7 ^ (~a3 << 8)) & 0xFFFF00;
  result = 2 * (*(unsigned __int8 *)(v6 + 15) - 1);
  *(_BYTE *)(v6 + 16 * (*(unsigned __int8 *)(v6 + 15) - 1) + 15) = *(_BYTE *)(v6 + 15) - 1;
  *(_DWORD *)v6 = -857879331;
  return result;
}
