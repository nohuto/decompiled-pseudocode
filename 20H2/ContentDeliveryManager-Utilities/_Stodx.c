/*
 * XREFs of _Stodx @ 0x1800B1388
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x180035EE0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180035EE0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x180094290 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180094290.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x1800B61B0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B61B0.c)
 * Callees:
 *     _Stopfx @ 0x1800B779C (_Stopfx.c)
 *     _Stoflt @ 0x1800B78D8 (_Stoflt.c)
 *     _Stoxflt @ 0x1800B7B74 (_Stoxflt.c)
 *     _Dscale @ 0x1800B8AC4 (_Dscale.c)
 *     _Xp_addx @ 0x1800B90A0 (_Xp_addx.c)
 *     _Xp_mulx @ 0x1800B93C8 (_Xp_mulx.c)
 *     _Xp_setn @ 0x1800B94D8 (_Xp_setn.c)
 *     _Xp_setw @ 0x1800B9500 (_Xp_setw.c)
 *     _Dtento @ 0x1800B9614 (_Dtento.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

__m128 __fastcall Stodx(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __m128 result; // xmm0
  int v5; // ebx
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rsi
  double v15; // xmm0_8
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // [rsp+30h] [rbp-89h] BYREF
  double v21; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-75h]
  double v24[3]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v25[24]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v26[24]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE Src[48]; // [rsp+98h] [rbp-21h] BYREF

  v5 = a1;
  v20 = a1;
  v8 = Stopfx(&v20);
  v9 = v8 & 8;
  if ( a4 )
    *a4 = 0;
  v10 = v8 & 0xFFFFFFF7;
  switch ( v10 )
  {
    case 1u:
      *(double *)result.m128_u64 = Stoflt(v5, v20, a2, (unsigned int)&v22, 2);
      v12 = v11;
      Xp_setw(v25, 3LL);
      if ( (_DWORD)v12 )
      {
        Xp_setn(v24, 3LL, v23);
        v13 = v12;
        if ( v12 > 1 )
        {
          v14 = 1LL;
          do
          {
            Xp_mulx(v24, Src);
            ++v14;
            Xp_setn(v26, 3LL, *(&v22 + v14));
            Xp_addx(v24);
          }
          while ( v14 < v13 );
        }
      }
      else
      {
        Xp_setw(v24, 3LL);
      }
      Dtento(v24);
      break;
    case 2u:
      v15 = Stoxflt(v5, v20, a2, (unsigned int)&v22, 2);
      v17 = v16;
      Xp_setw(v26, 3LL);
      if ( (_DWORD)v17 )
      {
        Xp_setn(v24, 3LL, v23);
        v18 = v17;
        if ( v17 > 1 )
        {
          v19 = 1LL;
          do
          {
            Xp_mulx(v24, Src);
            ++v19;
            Xp_setn(v25, 3LL, *(&v22 + v19));
            Xp_addx(v24);
          }
          while ( v19 < v18 );
        }
      }
      else
      {
        Xp_setw(v24, 3LL);
      }
      Dtento(v24);
      v21 = v15;
      Dscale(&v21, v22);
      result = (__m128)*(unsigned __int64 *)&v21;
      break;
    case 3u:
      result = (__m128)*(unsigned __int64 *)&Inf._Double;
      break;
    case 4u:
      result = (__m128)*(unsigned __int64 *)&Nan._Double;
      break;
    default:
      result = 0LL;
      break;
  }
  if ( v9 )
    return _mm_xor_ps(result, (__m128)_xmm);
  return result;
}
