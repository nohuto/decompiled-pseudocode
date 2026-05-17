/*
 * XREFs of _RtlpLfhBlockBitmapAllocate@20 @ 0x4B379BA9
 * Callers:
 *     _RtlpHpLfhSubsegmentAllocateBlock@16 @ 0x4B376D27 (_RtlpHpLfhSubsegmentAllocateBlock@16.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpLfhBlockBitmapAllocate(unsigned int *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  volatile signed __int32 *v5; // ebx
  unsigned int v6; // ecx
  volatile signed __int32 *v8; // esi
  volatile signed __int32 *v9; // edx
  unsigned int v10; // ebx
  signed __int32 v11; // eax
  int v12; // eax
  char v13; // cl
  int v14; // edx
  signed __int32 v15; // ecx
  unsigned int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+14h] [ebp-10h]
  volatile signed __int32 *v20; // [esp+18h] [ebp-Ch]
  unsigned int v21; // [esp+1Ch] [ebp-8h]
  signed __int32 v22; // [esp+20h] [ebp-4h]

  v21 = *a1;
  v5 = (volatile signed __int32 *)a1[1];
  v6 = v21;
  v8 = &v5[(unsigned int)(2 * a2) >> 5];
  v20 = v5;
  v9 = &v5[(v21 - 1) >> 5];
  v10 = a4;
  v17 = (unsigned int)v9;
LABEL_2:
  if ( v6 >= 0x20 )
  {
    while ( 1 )
    {
      v22 = *v8;
      if ( (*v8 & 0x55555555) != 0x55555555 )
        break;
      if ( v8 == v9 )
        v8 = v20;
      else
        ++v8;
    }
    v10 = a4;
    if ( v8 == v9 && (v21 & 0x1F) != 0 && (v21 & 0x1F) < a4 )
    {
      v10 = v21 & 0x1F;
      a4 = v10;
    }
    v11 = *v8;
  }
  else
  {
    if ( v6 < v10 )
    {
      v10 = v6;
      a4 = v6;
    }
    v11 = *v8;
    v22 = *v8;
  }
  a3 = ((v10 * a3) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v12 = ~v11;
    v18 = v12;
    if ( v10 >= 0x20 )
    {
      v14 = 1431655765;
    }
    else
    {
      _BitScanForward((unsigned int *)&v12, v12 & 0x55555555);
      a3 += v12;
      v13 = v12;
      v12 = v18;
      v14 = (((1 << v10) - 1) << v13) & 0x55555555;
    }
    _BitScanForward((unsigned int *)&v12, __ROR4__(v14 & v12, a3));
    v19 = ((_BYTE)a3 + (_BYTE)v12) & 0x1F;
    v15 = v22;
    v11 = _InterlockedCompareExchange(v8, v22 | (a5 << v19), v22);
    if ( v11 == v15 )
      return (unsigned int)(v19 + 32 * (v8 - v20)) >> 1;
    if ( (v11 & 0x55555555) == 0x55555555 )
    {
      v9 = (volatile signed __int32 *)v17;
      ++v8;
      v6 = v21;
      if ( (unsigned int)v8 > v17 )
        v8 = v20;
      goto LABEL_2;
    }
    v22 = v11;
  }
}
