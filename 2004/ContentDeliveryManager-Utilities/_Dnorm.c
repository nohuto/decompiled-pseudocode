/*
 * XREFs of _Dnorm @ 0x1800CC8F8
 * Callers:
 *     _Dscale @ 0x1800B8F14 (_Dscale.c)
 *     _Dunscale @ 0x1800CCC00 (_Dunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Dnorm(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  __int16 v3; // di
  __int16 v4; // cx
  unsigned __int16 v5; // r11
  unsigned __int16 v6; // r8
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // r10
  int v13; // kr00_4
  unsigned __int16 v14; // r10
  unsigned __int16 v15; // r9
  __int64 result; // rax

  v1 = a1[3];
  v3 = v1 & 0x8000;
  v4 = 0;
  v5 = 1;
  v6 = v1 & 0xF;
  if ( v6 || a1[2] || a1[1] || *a1 )
  {
    v7 = v6;
    if ( !v6 )
    {
      v8 = a1[2];
      v9 = a1[1];
      do
      {
        v10 = v8;
        v6 = v8;
        v7 = v8;
        v5 -= 16;
        v8 = v9;
        v9 = *a1;
        *a1 = 0;
      }
      while ( !v10 );
      a1[2] = v8;
      a1[1] = v9;
    }
    if ( v6 < 0x10u )
    {
      v11 = a1[2];
      v12 = a1[1];
      do
      {
        v6 = (v11 >> 15) | (2 * v7);
        --v5;
        v11 = (2 * v11) | (v12 >> 15);
        v7 = v6;
        v13 = 2 * *a1;
        v12 = HIWORD(v13) | (2 * v12);
        *a1 = v13;
      }
      while ( v6 < 0x10u );
      a1[2] = v11;
      a1[1] = v12;
    }
    if ( v6 >= 0x20u )
    {
      v14 = a1[1];
      v6 = v7;
      v15 = a1[2];
      do
      {
        ++v5;
        *a1 = (*a1 >> 1) | (v14 << 15);
        v14 = (v14 >> 1) | (v15 << 15);
        v15 = (v6 << 15) | (v15 >> 1);
        v6 >>= 1;
      }
      while ( v6 >= 0x20u );
      a1[2] = v15;
      a1[1] = v14;
    }
    v4 = v6 & 0xF;
  }
  result = v5;
  a1[3] = v3 | v4;
  return result;
}
