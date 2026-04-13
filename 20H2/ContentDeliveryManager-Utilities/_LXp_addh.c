/*
 * XREFs of _LXp_addh @ 0x1800B989C
 * Callers:
 *     _LXp_addx @ 0x1800B9BF4 (_LXp_addx.c)
 *     _LXp_mulh @ 0x1800B9C6C (_LXp_mulh.c)
 * Callees:
 *     _LDscale @ 0x1800B9890 (_LDscale.c)
 *     _Feraise @ 0x1800CC2B8 (_Feraise.c)
 *     _LDtest @ 0x1800CC850 (_LDtest.c)
 *     _LDint @ 0x1800CC85C (_LDint.c)
 *     _LDunscale @ 0x1800CC868 (_LDunscale.c)
 */

long double *__fastcall LXp_addh(long double *a1, int a2, double a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // r15
  long double *v11; // r12
  __int16 v12; // ax
  long double v13; // xmm1_8
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // edx
  __int64 i; // rdx
  double v19; // xmm1_8
  __int64 v20; // rax
  double v21; // xmm0_8
  __int64 v22; // rdx
  long double v23; // xmm0_8
  __int64 v24; // rax
  double v25; // xmm0_8
  int v26; // r15d
  long double *v27; // rbx
  double v28; // xmm1_8
  double v29; // xmm0_8
  long double v31[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v32; // [rsp+90h] [rbp+48h] BYREF
  __int16 v33; // [rsp+98h] [rbp+50h] BYREF
  double v34; // [rsp+A0h] [rbp+58h] BYREF
  double v35; // [rsp+A8h] [rbp+60h] BYREF

  v34 = a3;
  v3 = 0LL;
  v35 = a3;
  v5 = a2;
  if ( !a2 )
    return a1;
  v6 = LDunscale(&v32, &v35);
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      return a1;
    v8 = 2048;
    v9 = 0;
    v10 = v5;
    if ( (int)v5 <= 0 )
      return a1;
    v11 = a1 - 1;
    while ( 1 )
    {
      v31[0] = a1[v3];
      v12 = LDunscale(&v33, v31);
      if ( v12 > 0 )
        return a1;
      if ( !v12 )
      {
        a1[v9] = v34;
        if ( v9 + 1 < (int)v5 )
          a1[v9 + 1] = 0.0;
        return a1;
      }
      v13 = v34;
      v14 = v33 - v32;
      if ( v14 > -26 || v34 == 0.0 )
      {
        if ( v14 < 26 || v34 == 0.0 )
        {
          v19 = v34 + a1[v3];
          a1[v3] = v19;
          if ( v19 == 0.0 )
          {
            v20 = v3;
            do
            {
              if ( ++v20 >= v10 )
                break;
              v21 = a1[v20];
              a1[v20 - 1] = v21;
            }
            while ( v21 != 0.0 );
            a1[v10 - 1] = 0.0;
            v19 = a1[v3];
            if ( v19 == 0.0 )
              return a1;
          }
          v34 = v19;
          LDunscale(&v32, &v34);
          v22 = (unsigned int)v32;
          if ( v8 - 26 < (int)v22 )
          {
            LOWORD(v22) = v32 - v8 + 26;
            LDint(&v34, v22);
            LDscale(&v34, v32);
            v23 = a1[v3] - v34;
            a1[v3] = v23;
            if ( v23 == 0.0 )
            {
              v24 = v3;
              do
              {
                if ( ++v24 >= v10 )
                  break;
                v25 = a1[v24];
                a1[v24 - 1] = v25;
              }
              while ( v25 != 0.0 );
              a1[v10 - 1] = 0.0;
            }
            --v3;
            --v11;
            if ( --v9 )
            {
              v35 = *v11;
              LDunscale(&v33, &v35);
              v8 = v33;
            }
            else
            {
              v8 = 2048;
            }
            goto LABEL_51;
          }
          v26 = v9 + 1;
          if ( v9 + 1 == (_DWORD)v5 )
            return a1;
          v34 = a1[v3];
          v27 = &a1[v9];
          LDunscale(&v33, v27);
          LDint(v27, 26LL);
          LDscale(v27, v33);
          v28 = a1[v3];
          v8 = v33;
          v29 = v34 - v28;
          v34 = v34 - v28;
          if ( v34 == 0.0 )
            v35 = v28;
          else
            v35 = v29;
          LDunscale(&v32, &v35);
          v9 = v26;
          v10 = v5;
        }
        else
        {
          v8 = v33;
          ++v9;
        }
        ++v3;
        ++v11;
      }
      else
      {
        v15 = v9;
        v16 = v3;
        do
        {
          v17 = v15;
          ++v16;
          ++v15;
        }
        while ( v16 < v10 && a1[v16] != 0.0 );
        if ( v15 >= (int)v5 - 1 )
        {
          if ( v15 == (_DWORD)v5 )
            v15 = v17;
        }
        else
        {
          ++v15;
        }
        for ( i = v15; i > v3; --i )
          a1[i] = a1[i - 1];
        a1[v3] = v13;
        v34 = 0.0;
      }
LABEL_51:
      if ( v9 >= (int)v5 )
        return a1;
    }
  }
  if ( v6 == 2 || (v7 = LDtest(a1), v7 <= 0) )
  {
    *a1 = v34;
  }
  else if ( v7 != 2 && ((HIWORD(v34) ^ *((_WORD *)a1 + 3)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = LNan._Long_double;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}
