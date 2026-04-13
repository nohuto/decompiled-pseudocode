/*
 * XREFs of _FDscale @ 0x1800B5C70
 * Callers:
 *     _Stofx @ 0x1800AE640 (_Stofx.c)
 *     _FXp_addh @ 0x1800B5E40 (_FXp_addh.c)
 *     _FXp_mulh @ 0x1800B62B4 (_FXp_mulh.c)
 *     _FXp_setw @ 0x1800B662C (_FXp_setw.c)
 * Callees:
 *     _FDnorm @ 0x1800C9FD4 (_FDnorm.c)
 */

__int64 __fastcall FDscale(unsigned __int16 *a1, int a2)
{
  __int16 v4; // cx
  __int64 result; // rax
  float Float; // xmm0_4
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // bp
  unsigned int v9; // r11d
  unsigned __int16 v10; // si
  __int16 v11; // r11
  unsigned __int16 v12; // r10

  v4 = (unsigned __int8)(a1[1] >> 7);
  if ( v4 == 255 )
  {
    if ( (a1[1] & 0x7F) != 0 )
      return 2LL;
    result = 1LL;
    if ( *a1 )
      return 2LL;
    return result;
  }
  if ( !v4 )
  {
    v4 = FDnorm(a1);
    if ( v4 > 0 )
      return 0LL;
  }
  if ( a2 <= 0 || 255 - v4 > a2 )
  {
    if ( -v4 < a2 )
    {
      a1[1] = a1[1] & 0x807F | ((v4 + (_WORD)a2) << 7);
      return 0xFFFFFFFFLL;
    }
    v7 = a1[1] & 0x7F | 0x80;
    v8 = a1[1] & 0x8000;
    v9 = v4 + a2 - 1;
    if ( v9 < 0xFFFFFFE8 )
    {
      a1[1] = v8;
      *a1 = 0;
    }
    else
    {
      v10 = 0;
      if ( (__int16)v9 <= -16 )
      {
        v10 = *a1;
        LOWORD(v9) = v9 + 16;
        *a1 = v7;
        v7 = 0;
      }
      v11 = -(__int16)v9;
      if ( v11 )
      {
        v10 = (v10 != 0) | (unsigned __int16)(*a1 << (16 - v11));
        *a1 = (*a1 >> v11) | (v7 << (16 - v11));
        v7 >>= v11;
      }
      v12 = v8 | v7;
      a1[1] = v12;
      if ( (v10 > 0x8000u || v10 == 0x8000 && (*(_BYTE *)a1 & 1) != 0) && (*a1)++ == 0xFFFF )
      {
        a1[1] = v12 + 1;
        return 0xFFFFFFFFLL;
      }
      if ( v12 != v8 || *a1 )
        return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  Float = FInf._Float;
  if ( (a1[1] & 0x8000u) != 0 )
    LODWORD(Float) = LODWORD(FInf._Float) ^ _xmm;
  *(float *)a1 = Float;
  return 1LL;
}
