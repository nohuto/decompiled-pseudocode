/*
 * XREFs of _RtlpLfhFindClearBitAndSet@16 @ 0x4B307931
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpLfhFindClearBitAndSet(unsigned int *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // esi
  int v6; // edi
  int *v7; // ecx
  int *v8; // edx
  unsigned int v9; // ecx
  int *v10; // eax
  int *v11; // ebx
  int v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // ecx
  unsigned int *v18; // [esp+Ch] [ebp-4h]

  v5 = *a1;
  v6 = -1;
  v7 = (int *)a1[1];
  v18 = a1;
  if ( v5 >= 0x20 )
  {
    v10 = &v7[(v5 - 1) >> 5];
    v8 = &v7[a2 >> 5];
    v11 = v8;
    do
    {
      if ( *v8 != -1 )
        break;
      if ( v8 == v10 )
        v8 = v7;
      else
        ++v8;
    }
    while ( v8 != v11 );
    if ( v8 != v10 || (v5 &= 0x1Fu) == 0 )
    {
      v9 = a4;
      goto LABEL_14;
    }
  }
  else
  {
    v8 = v7;
  }
  v9 = a4;
  if ( v5 < a4 )
    v9 = v5;
LABEL_14:
  v12 = *v8;
  v13 = (v9 * a3) >> 7;
  if ( v9 < 0x20 )
  {
    _BitScanForward(&v14, ~v12);
    LOBYTE(v13) = v14 + v13;
    v6 = ((1 << v9) - 1) << v14;
  }
  _BitScanForward(&v15, ~__ROR4__(v12 | ~v6, v13));
  v16 = ((_BYTE)v13 + (_BYTE)v15) & 0x1F;
  *v8 = v12 | (1 << v16);
  return v16 + 32 * ((int)((int)v8 - v18[1]) >> 2);
}
