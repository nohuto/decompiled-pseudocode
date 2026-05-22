/*
 * XREFs of ?PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1801974A0
 * Callers:
 *     <none>
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079A68 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079B10 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCEyeGazeProcessor::PopulateTargetingData(
        MPCEyeGazeProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  int v3; // eax
  __int64 v4; // r9
  int v5; // eax
  float *v6; // r8
  _DWORD *v7; // r8
  __int64 v8; // r9
  float v9; // xmm1_4
  float v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  float v14[4]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]

  *((_BYTE *)a3 + 48) = 1;
  v3 = *((_DWORD *)a3 + 180);
  v15 = *((_QWORD *)a3 + 89);
  v16 = v3;
  Windows::Foundation::Numerics::transform(v14, (float *)&v15, (float *)a2);
  v5 = *(_DWORD *)(v4 + 732);
  v17 = *(_QWORD *)(v4 + 724);
  v18 = v5;
  Windows::Foundation::Numerics::transform_normal((float *)&v15, (float *)&v17, v6);
  if ( *(_BYTE *)(v8 + 736) )
  {
    v9 = v14[1];
    *(float *)(v8 + 120) = v14[0];
    v10 = v14[2];
    *(float *)(v8 + 124) = v9;
    v11 = v15;
    *(float *)(v8 + 128) = v10;
    v12 = HIDWORD(v15);
    *(_DWORD *)(v8 + 132) = v11;
    v13 = v16;
    *(_DWORD *)(v8 + 136) = v12;
    *(_DWORD *)(v8 + 140) = v13;
  }
  else
  {
    *(_DWORD *)(v8 + 120) = v7[38];
    *(_DWORD *)(v8 + 124) = v7[39];
    *(_DWORD *)(v8 + 128) = v7[40];
    *(_DWORD *)(v8 + 132) = v7[41];
    *(_DWORD *)(v8 + 136) = v7[42];
    *(_DWORD *)(v8 + 140) = v7[43];
  }
}
