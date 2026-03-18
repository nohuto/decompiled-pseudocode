/*
 * XREFs of ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01EC398
 * Callers:
 *     DoPrediction @ 0x1C01EE070 (DoPrediction.c)
 * Callees:
 *     memset @ 0x1C015F880 (memset.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01EBCF4 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01EDF8C (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 */

void __fastcall InitializeContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rbx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 y; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+48h] BYREF
  struct tagPOINT v22; // [rsp+A8h] [rbp+50h] BYREF
  struct tagPOINT v23; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+60h] BYREF

  v23 = a3;
  v22 = a2;
  memset(a4, 0, 0x1B0uLL);
  memset((char *)a4 + 864, 0, 0x1B0uLL);
  memset((char *)a4 + 432, 0, 0x1B0uLL);
  memset((char *)a4 + 1296, 0, 0x1B0uLL);
  v9 = gPredictorRLSLambdaLearningRate;
  v10 = gPredictorRLSLambdaMax;
  v11 = gPredictorRLSLambdaMin;
  v21 = gPredictorRLSDelta;
  v20[0] = gPredictorRLSDelta;
  v24 = gPredictorRLSLambdaLearningRate;
  v18 = gPredictorRLSLambdaMax;
  v19 = gPredictorRLSLambdaMin;
  Prediction::tagRlsFilter::vInit(a4, v20, &v19, &v18, &v24);
  v12 = gPredictorRLSExpoSmoothAlpha;
  v13 = 0LL;
  *((_OWORD *)a4 + 108) = 0LL;
  *((_OWORD *)a4 + 109) = 0LL;
  *((_OWORD *)a4 + 116) = 0LL;
  if ( (__int64 *)((char *)a4 + 1856) != &v24 )
    *((_QWORD *)a4 + 232) = v12;
  *((_QWORD *)a4 + 276) = 0LL;
  v14 = (__int64)a3.x << 32;
  *((_QWORD *)a4 + 268) = v14;
  *((_QWORD *)a4 + 272) = v14;
  v18 = v21;
  v24 = v9;
  v20[0] = v10;
  v19 = v11;
  *(double *)&v13 = Prediction::tagRlsFilter::vInit((char *)a4 + 864, &v18, &v19, v20, &v24);
  *((_OWORD *)a4 + 112) = v13;
  *((_OWORD *)a4 + 113) = v13;
  *((_OWORD *)a4 + 118) = 0LL;
  if ( (__int64 *)((char *)a4 + 1888) != &v24 )
    *((_QWORD *)a4 + 236) = v12;
  *((_QWORD *)a4 + 278) = 0LL;
  v15 = (__int64)a2.x << 32;
  *((_QWORD *)a4 + 270) = v15;
  *((_QWORD *)a4 + 274) = v15;
  v18 = v21;
  v24 = v9;
  v20[0] = v10;
  v19 = v11;
  *(double *)&v13 = Prediction::tagRlsFilter::vInit((char *)a4 + 432, &v18, &v19, v20, &v24);
  *((_OWORD *)a4 + 110) = v13;
  *((_OWORD *)a4 + 111) = v13;
  *((_OWORD *)a4 + 117) = 0LL;
  if ( (__int64 *)((char *)a4 + 1872) != &v24 )
    *((_QWORD *)a4 + 234) = v12;
  y = v23.y;
  *((_QWORD *)a4 + 277) = 0LL;
  y <<= 32;
  *((_QWORD *)a4 + 269) = y;
  *((_QWORD *)a4 + 273) = y;
  v23 = (struct tagPOINT)v9;
  v24 = v10;
  v20[0] = v11;
  *(double *)&v13 = Prediction::tagRlsFilter::vInit((char *)a4 + 1296, &v21, v20, &v24, &v23);
  *((_OWORD *)a4 + 114) = v13;
  *((_OWORD *)a4 + 115) = v13;
  *((_OWORD *)a4 + 119) = 0LL;
  if ( (struct tagPOINT *)((char *)a4 + 1904) != &v23 )
    *((_QWORD *)a4 + 238) = v12;
  v17 = (__int64)v22.y << 32;
  *((_QWORD *)a4 + 271) = v17;
  *((_QWORD *)a4 + 275) = v17;
  *((_QWORD *)a4 + 279) = 0LL;
  *((_QWORD *)a4 + 262) = 0LL;
  *((_QWORD *)a4 + 263) = 0LL;
  *((_QWORD *)a4 + 264) = 0LL;
  *((_QWORD *)a4 + 265) = 0LL;
  memset((char *)a4 + 1924, 0, 0x54uLL);
  *((_DWORD *)a4 + 480) = 3;
  memset((char *)a4 + 2012, 0, 0x54uLL);
  *((_DWORD *)a4 + 502) = 3;
  v23.x = 0;
  v22 = 0LL;
  v21 = 0LL;
  Prediction::tagRlsFilter::Filter(a4, &v24, (__int64)&v21, (__int64)&v22, &v23);
  v22 = 0LL;
  v21 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 54, &v24, (__int64)&v21, (__int64)&v22, &v23);
  v22 = 0LL;
  v21 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 108, &v24, (__int64)&v21, (__int64)&v22, &v23);
  v22 = 0LL;
  v21 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 162, &v24, (__int64)&v21, (__int64)&v22, &v23);
  *a5 = a2;
  *a6 = a3;
}
