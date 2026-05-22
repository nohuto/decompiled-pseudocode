/*
 * XREFs of ??$SE3_left_update@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1801A4FA0
 * Callers:
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x18015A92C (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1801A4D0C (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1801A513C (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 */

__int64 __fastcall ST::SE3_left_update<float>(_OWORD *a1, float *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  ST::SE3_exp<float>((float *)v6, a2);
  result = ST::SE3_mult<float>(v6, v6, a1);
  v4 = v6[1];
  *a1 = v6[0];
  v5 = v6[2];
  a1[1] = v4;
  a1[2] = v5;
  return result;
}
