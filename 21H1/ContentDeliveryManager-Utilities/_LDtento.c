/*
 * XREFs of _LDtento @ 0x1800B7E9C
 * Callers:
 *     _Stoldx @ 0x1800AF7B4 (_Stoldx.c)
 * Callees:
 *     _LXp_getw @ 0x1800B6F08 (_LXp_getw.c)
 *     _Xp_movx @ 0x1800B6F98 (_Xp_movx.c)
 *     _LXp_mulx @ 0x1800B7C50 (_LXp_mulx.c)
 *     _LXp_setw @ 0x1800B7D88 (_LXp_setw.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

double __fastcall LDtento(long double *a1, int a2, _DWORD *a3)
{
  int v4; // ebx
  double result; // xmm0_8
  double v7[3]; // [rsp+30h] [rbp-98h] BYREF
  double v8[3]; // [rsp+48h] [rbp-80h] BYREF
  char Src[48]; // [rsp+60h] [rbp-68h] BYREF

  v4 = a2;
  if ( !a2 || *a1 == 0.0 )
    return LXp_getw(a1, 3);
  if ( a2 <= 0 )
  {
    v4 = -a2;
    Xp_movx(v7, 3, &unk_1800FD3A8);
  }
  else
  {
    LXp_setw((__int64)v7, 3, 10.0);
  }
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      LXp_mulx(a1, 3, v7, 3, Src);
    v4 >>= 1;
    if ( !v4 )
      break;
    Xp_movx(v8, 3, v7);
    LXp_mulx(v7, 3, v8, 3, Src);
  }
  result = LXp_getw(a1, 3);
  if ( result == 0.0 || result == LInf._Double || result == COERCE_DOUBLE(*(_QWORD *)&LInf._Double ^ _xmm) )
  {
    *_errno() = 34;
    if ( a3 )
      *a3 |= 1u;
  }
  return result;
}
