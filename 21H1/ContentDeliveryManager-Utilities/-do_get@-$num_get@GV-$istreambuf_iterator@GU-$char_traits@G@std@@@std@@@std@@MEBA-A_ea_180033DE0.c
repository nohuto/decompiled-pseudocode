/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x180033DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800352F0 (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180038478 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     _Stofx @ 0x1800AE640 (_Stofx.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        float *a7)
{
  unsigned int v10; // eax
  double v11; // xmm0_8
  float v12; // xmm6_4
  _OWORD *result; // rax
  int v14; // [rsp+38h] [rbp-61h] BYREF
  int v15; // [rsp+3Ch] [rbp-5Dh] BYREF
  _BYTE *v16; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v17[64]; // [rsp+48h] [rbp-51h] BYREF

  v15 = 0;
  v14 = 0;
  v10 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffld(
          a1,
          (unsigned int)v17,
          a3,
          a4,
          a5,
          (__int64)&v14);
  v11 = Stofx(v17, &v16, v10, &v15);
  v12 = *(float *)&v11;
  if ( v14 )
    v12 = ldexp(*(float *)&v11, 4 * v14);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( *(_QWORD *)a4 )
LABEL_11:
    *a6 |= 1u;
LABEL_12:
  if ( v16 == v17 || v15 )
    *a6 |= 2u;
  else
    *a7 = v12;
  result = a2;
  *a2 = *(_OWORD *)a3;
  return result;
}
