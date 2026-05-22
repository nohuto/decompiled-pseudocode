/*
 * XREFs of ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18007E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079B08 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079BB0 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18007F28C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

void __fastcall MPCHandProcessor::PopulateTargetingData(
        MPCHandProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  int v5; // r9d
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  float *v10; // rax
  __int64 v11; // r10
  __int128 v12; // xmm0
  __int64 v13; // r10
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  float *v17; // rax
  _DWORD *v18; // r10
  __int64 v19; // [rsp+20h] [rbp-19h] BYREF
  float v20; // [rsp+28h] [rbp-11h]
  float v21[4]; // [rsp+30h] [rbp-9h] BYREF
  __int128 v22; // [rsp+40h] [rbp+7h] BYREF
  __int128 v23; // [rsp+50h] [rbp+17h] BYREF
  __int128 v24; // [rsp+60h] [rbp+27h]
  __int128 v25; // [rsp+70h] [rbp+37h]
  __int128 v26; // [rsp+80h] [rbp+47h]

  v5 = **((_DWORD **)this + 3);
  *((_DWORD *)a3 + 21) = *((_DWORD *)a3 + 207);
  *((_DWORD *)a3 + 20) = v5;
  if ( *((_BYTE *)a3 + 764) )
  {
    if ( *((_BYTE *)a3 + 765) )
    {
      v6 = *(_OWORD *)((char *)a3 + 1960);
      v7 = *(_OWORD *)((char *)a3 + 1976);
      v20 = *((float *)a3 + 190);
      v23 = v6;
      v8 = *(_OWORD *)((char *)a3 + 1992);
      v24 = v7;
      v9 = *(_OWORD *)((char *)a3 + 2008);
      v25 = v8;
      v19 = *((_QWORD *)a3 + 94);
      v26 = v9;
      Windows::Foundation::Numerics::transform(v21, (float *)&v19, (float *)&v23);
      v10 = Windows::Foundation::Numerics::transform((float *)&v19, v21, (float *)a2);
      *((_QWORD *)this + 1370) = *(_QWORD *)v10;
      *(float *)&v10 = v10[2];
      v19 = 0LL;
      *((_DWORD *)this + 2742) = (_DWORD)v10;
      v12 = *(_OWORD *)(v11 + 736);
      v20 = FLOAT_N1_0;
      v22 = v12;
      Windows::Foundation::Numerics::transform(v21, &v19, &v22);
      v14 = *(_OWORD *)(v13 + 1976);
      v23 = *(_OWORD *)(v13 + 1960);
      v15 = *(_OWORD *)(v13 + 1992);
      v24 = v14;
      v16 = *(_OWORD *)(v13 + 2008);
      v25 = v15;
      v26 = v16;
      Windows::Foundation::Numerics::transform_normal((float *)&v19, v21, (float *)&v23);
      v17 = Windows::Foundation::Numerics::transform_normal(v21, (float *)&v19, (float *)a2);
      *(_QWORD *)((char *)this + 10948) = *(_QWORD *)v17;
      *((float *)this + 2739) = v17[2];
      v18[30] = *((_DWORD *)this + 2740);
      v18[31] = *((_DWORD *)this + 2741);
      v18[32] = *((_DWORD *)this + 2742);
      v18[33] = *((_DWORD *)this + 2737);
      v18[34] = *((_DWORD *)this + 2738);
      v18[35] = *((_DWORD *)this + 2739);
      *((_BYTE *)this + 10944) = 1;
    }
  }
}
