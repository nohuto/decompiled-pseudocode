/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x180004C10
 * Callers:
 *     RtlpHpVaMgrRangeCleanup @ 0x180004820 (RtlpHpVaMgrRangeCleanup.c)
 *     RtlpHpSegSegmentFree @ 0x180004B70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1800060D0 (RtlpHpVaMgrRangeCreate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x180006390 (RtlCSparseBitmapBitmaskWrite.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x180004F78 (RtlpCSparseBitmapPageDecommit.c)
 */

void __fastcall RtlCSparseBitmapBitsClear(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r9
  signed __int64 v7; // rbx
  __int64 v8; // rax
  signed __int64 v9; // r11
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  volatile signed __int32 *v12; // r8
  __int64 v13; // r10
  unsigned int v14; // eax
  unsigned __int64 v15; // r9
  __int64 *v16; // r8
  __int64 *v17; // r10
  __int64 v18; // rdx
  __int64 *i; // r8
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rcx
  signed __int64 v25; // [rsp+28h] [rbp-80h]
  unsigned __int64 v26; // [rsp+60h] [rbp-48h]
  signed __int64 v27; // [rsp+C8h] [rbp+20h]

  while ( a3 )
  {
    v6 = a2 & 0x7FFF;
    v7 = a3;
    v27 = a3;
    v8 = v6 + a3;
    if ( a3 < 0 )
    {
      v7 = ~v6;
      if ( v8 >= 0 )
        v7 = a3;
    }
    else
    {
      if ( v8 <= 0x8000 )
        goto LABEL_4;
      v7 = 0x8000 - v6;
    }
    v27 = v7;
LABEL_4:
    v9 = v7;
    v25 = v7;
    v10 = a2 >> 15;
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    {
      if ( !_bittest64(*(const signed __int64 **)a1, v10) )
        goto LABEL_35;
      v26 = *(_QWORD *)(a1 + 8) + (v10 << 12);
      v11 = v7;
      v12 = (volatile signed __int32 *)(v26 + 4 * (v6 >> 5));
      v13 = a2 & 0x1F;
      if ( (unsigned __int64)(v13 + v7) <= 0x20 )
      {
        if ( v7 == 32 )
        {
          *v12 = 0;
        }
        else
        {
          v14 = ~(((1 << v7) - 1) << v13);
LABEL_15:
          _InterlockedAnd(v12, v14);
          v7 = v27;
        }
      }
      else
      {
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v12, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v13));
          v7 = v27;
          v11 = v27 - (32 - (unsigned int)(a2 & 0x1F));
          ++v12;
        }
        while ( v11 >= 0x20 )
        {
          *v12++ = 0;
          v11 -= 32LL;
        }
        if ( v11 )
        {
          v14 = -1 << v11;
          goto LABEL_15;
        }
      }
      if ( v7 >= 512 )
      {
        v21 = 1;
      }
      else
      {
        v15 = a2 & 0x7E00;
        if ( 0x8000 - v15 < 0x200 )
        {
          v21 = 0;
        }
        else
        {
          v16 = (__int64 *)(v26 + 8 * (v15 >> 6));
          v17 = (__int64 *)(v26 + 8 * ((v15 + 511) >> 6));
          v18 = *v16;
          if ( v16 == v17 )
          {
            v22 = v18 == 0;
            goto LABEL_28;
          }
          if ( v18 )
          {
LABEL_24:
            v21 = 0;
          }
          else
          {
            for ( i = v16 + 1; ; ++i )
            {
              v20 = *i;
              if ( i == v17 )
                break;
              if ( v20 )
                goto LABEL_24;
            }
            v22 = v20 == 0;
LABEL_28:
            v21 = v22;
          }
          v9 = v25;
        }
        v7 = v27;
      }
      if ( v21 )
        RtlpCSparseBitmapPageDecommit(a1, a2 >> 15, v9 == 0x8000);
      goto LABEL_35;
    }
    v23 = a2 & 0x3FFFFFFF;
    v7 = a3;
    v24 = v23 + a3;
    if ( a3 >= 0 )
    {
      if ( v24 > 0x40000000 )
        v7 = 0x40000000 - v23;
    }
    else
    {
      v7 = ~(unsigned __int64)(unsigned int)v23;
      if ( v24 >= 0 )
        v7 = a3;
    }
LABEL_35:
    a2 += v7;
    a3 -= v7;
  }
}
