/*
 * XREFs of std::_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CAED4
 * Callers:
 *     std::_Guess_median_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CABC0 (std--_Guess_median_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 * Callees:
 *     _lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator() @ 0x1800CBB98 (_lambda_cc7dd983a7a4322fbd155d916a9399c1_--operator().c)
 */

__int64 __fastcall std::_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int64 a1,
        __int64 a2)
{
  __int128 *v2; // rdx
  __int128 *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r10
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  __int128 v8; // xmm5
  __int128 v9; // xmm6
  __int64 v10; // xmm2_8
  __int64 result; // rax
  __int64 v12; // rcx
  __int128 *v13; // r9
  __int128 *v14; // r10
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int128 v18; // xmm5
  __int64 v19; // xmm6_8
  __int64 v20; // rcx
  __int64 v21; // r9
  __int128 v22; // xmm4
  __int128 v23; // xmm5

  if ( (unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(a1, a2, a1) )
  {
    v6 = *v2;
    v7 = v2[1];
    v8 = v2[2];
    v9 = v2[3];
    v10 = *((_QWORD *)v2 + 8);
    *v2 = *v3;
    v2[1] = v3[1];
    v2[2] = v3[2];
    v2[3] = v3[3];
    *((_QWORD *)v2 + 8) = *((_QWORD *)v3 + 8);
    *v3 = v6;
    v3[1] = v7;
    v3[2] = v8;
    v3[3] = v9;
    *((_QWORD *)v3 + 8) = v10;
  }
  result = lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v3, v5, v4);
  if ( (_BYTE)result )
  {
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = *((_QWORD *)v14 + 8);
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    *((_QWORD *)v14 + 8) = *((_QWORD *)v13 + 8);
    *v13 = v15;
    v13[1] = v16;
    v13[2] = v17;
    v13[3] = v18;
    *((_QWORD *)v13 + 8) = v19;
    result = lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v12, v13, v12);
    if ( (_BYTE)result )
    {
      *(_OWORD *)v21 = *(_OWORD *)v20;
      *(_OWORD *)(v21 + 16) = *(_OWORD *)(v20 + 16);
      *(_OWORD *)(v21 + 32) = *(_OWORD *)(v20 + 32);
      *(_OWORD *)(v21 + 48) = *(_OWORD *)(v20 + 48);
      *(_QWORD *)(v21 + 64) = *(_QWORD *)(v20 + 64);
      *(_OWORD *)v20 = v15;
      *(_OWORD *)(v20 + 16) = v16;
      *(_OWORD *)(v20 + 32) = v22;
      *(_OWORD *)(v20 + 48) = v23;
      *(_QWORD *)(v20 + 64) = v19;
    }
  }
  return result;
}
