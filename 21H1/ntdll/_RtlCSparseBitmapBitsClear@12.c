/*
 * XREFs of _RtlCSparseBitmapBitsClear@12 @ 0x4B37DE0D
 * Callers:
 *     _RtlpHpVaMgrRangeCleanup@8 @ 0x4B37AF05 (_RtlpHpVaMgrRangeCleanup@8.c)
 *     _RtlpHpVaMgrRangeCreate@12 @ 0x4B37B05E (_RtlpHpVaMgrRangeCreate@12.c)
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 *     _RtlCSparseBitmapBitmaskWrite@16 @ 0x4B37DD69 (_RtlCSparseBitmapBitmaskWrite@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpCSparseBitmapPageDecommit@12 @ 0x4B37E559 (_RtlpCSparseBitmapPageDecommit@12.c)
 */

unsigned int __fastcall RtlCSparseBitmapBitsClear(int a1, unsigned int a2, int a3)
{
  unsigned int result; // eax
  unsigned int v5; // edi
  int v6; // esi
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  volatile signed __int32 *v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  _DWORD *v14; // esi
  _DWORD *v15; // edx
  bool i; // zf
  int v17; // eax
  int v18; // ecx
  int v19; // [esp+18h] [ebp-4Ch]
  int v20; // [esp+24h] [ebp-40h]
  unsigned int v22; // [esp+3Ch] [ebp-28h]
  int v23; // [esp+40h] [ebp-24h]
  int v24; // [esp+44h] [ebp-20h]

  result = a2;
  v22 = a2;
  while ( a3 )
  {
    v5 = result & 0x7FFF;
    v6 = a3;
    v24 = a3;
    v7 = v5 + a3;
    if ( a3 >= 0 )
    {
      if ( v7 <= 0x8000 )
        goto LABEL_9;
      v6 = 0x8000 - v5;
    }
    else
    {
      if ( v7 >= 0 )
        goto LABEL_9;
      v6 = ~v5;
    }
    v24 = v6;
LABEL_9:
    v20 = v6;
    v8 = result >> 15;
    if ( _bittest((const signed __int32 *)(a1 + 32), result >> 30) )
    {
      if ( !_bittest(*(const signed __int32 **)a1, v8) )
        goto LABEL_41;
      v19 = *(_DWORD *)(a1 + 4) + (v8 << 12);
      v9 = v6;
      v10 = (volatile signed __int32 *)(v19 + 4 * (v5 >> 5));
      v23 = result & 0x1F;
      if ( (unsigned int)(v6 + v23) > 0x20 )
      {
        if ( (result & 0x1F) != 0 )
        {
          _InterlockedAnd(v10, ~(((1 << (32 - v23)) - 1) << v23));
          v9 = v6 - (32 - v23);
          ++v10;
        }
        while ( v9 >= 0x20 )
        {
          *v10++ = 0;
          v9 -= 32;
        }
        if ( v9 )
        {
          v11 = -1 << v9;
          goto LABEL_21;
        }
      }
      else
      {
        if ( v6 == 32 )
        {
          *v10 = 0;
          goto LABEL_22;
        }
        v11 = ~(((1 << v6) - 1) << v23);
LABEL_21:
        _InterlockedAnd(v10, v11);
      }
LABEL_22:
      if ( v6 >= 512 )
      {
        v12 = 1;
        goto LABEL_34;
      }
      v13 = v5 & 0xFFFFFE00;
      if ( v13 >= 0x8000 || 0x8000 - v13 < 0x200 )
      {
LABEL_25:
        v12 = 0;
      }
      else
      {
        v14 = (_DWORD *)(v19 + 4 * (v13 >> 5));
        v15 = (_DWORD *)(v19 + 4 * ((v13 + 511) >> 5));
        if ( v14 != v15 )
        {
          for ( i = ((-1 << v13) & *v14) == 0; i; i = *v14 == 0 )
          {
            if ( ++v14 == v15 )
              goto LABEL_32;
          }
          goto LABEL_25;
        }
LABEL_32:
        v12 = 1;
      }
      v6 = v24;
LABEL_34:
      if ( v12 )
        RtlpCSparseBitmapPageDecommit(v20 == 0x8000);
      goto LABEL_41;
    }
    v17 = v22 & 0x3FFFFFFF;
    v6 = a3;
    v18 = (v22 & 0x3FFFFFFF) + a3;
    if ( a3 >= 0 )
    {
      if ( v18 > 0x40000000 )
        v6 = 0x40000000 - v17;
    }
    else if ( v18 < 0 )
    {
      v6 = ~v17;
    }
LABEL_41:
    result = v6 + v22;
    v22 += v6;
    a3 -= v6;
  }
  return result;
}
