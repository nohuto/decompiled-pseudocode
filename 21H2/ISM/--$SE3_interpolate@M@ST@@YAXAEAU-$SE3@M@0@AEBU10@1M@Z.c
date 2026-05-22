/*
 * XREFs of ??$SE3_interpolate@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1M@Z @ 0x1801A5314
 * Callers:
 *     Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x18015FC50 (Windows--Internal--Holographic--PosePredictionHelpers--InterpolatePoses.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1801A51BC (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1801A54B8 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1801A55EC (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_mult_a_binv@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1801A564C (--$SE3_mult_a_binv@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 */

__int64 __fastcall ST::SE3_interpolate<float>(_OWORD *a1, __int64 a2, __int64 a3, float a4)
{
  __int64 i; // rax
  __int64 result; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD v10[3]; // [rsp+28h] [rbp-39h] BYREF
  __int128 v11; // [rsp+58h] [rbp-9h] BYREF
  __int128 v12; // [rsp+68h] [rbp+7h]
  __int128 v13; // [rsp+78h] [rbp+17h]

  ST::SE3_mult_a_binv<float>(&v11, a3, a2);
  v10[0] = v11;
  v10[1] = v12;
  v10[2] = v13;
  ST::SE3_log<float>(&v11, v10);
  for ( i = 0LL; i < 6; ++i )
    *((float *)&v11 + i) = a4 * *((float *)&v11 + i);
  ST::SE3_exp<float>((float *)v10, (float *)&v11);
  result = ST::SE3_mult<float>(&v11, v10, a2);
  v8 = v12;
  *a1 = v11;
  v9 = v13;
  a1[1] = v8;
  a1[2] = v9;
  return result;
}
