/*
 * XREFs of ?InitializeContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x15754D
 * Callers:
 *     _DoPrediction@36 @ 0x159075 (_DoPrediction@36.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QAEXVCFixPred@2@000@Z @ 0x158F9C (-vInit@tagRlsFilter@Prediction@@QAEXVCFixPred@2@000@Z.c)
 */

void __userpurge InitializeContactPrediction(
        int a1@<edx>,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        struct tagHPD_PREDICTION_INFO *a5,
        struct tagPOINT *a6,
        struct tagPOINT *a7)
{
  int v8; // esi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  char v12; // [esp+10h] [ebp-40h] BYREF
  char v13; // [esp+18h] [ebp-38h] BYREF
  char v14; // [esp+20h] [ebp-30h] BYREF
  char v15; // [esp+28h] [ebp-28h] BYREF
  int v16; // [esp+30h] [ebp-20h] BYREF
  int v17; // [esp+34h] [ebp-1Ch]
  int v18; // [esp+38h] [ebp-18h]
  int v19; // [esp+3Ch] [ebp-14h]
  int v20; // [esp+40h] [ebp-10h]
  int v21; // [esp+44h] [ebp-Ch]
  int v22; // [esp+48h] [ebp-8h]
  int v23; // [esp+4Ch] [ebp-4h] BYREF

  memset((void *)a1, 0, 0x1B0u);
  memset((void *)(a1 + 864), 0, 0x1B0u);
  memset((void *)(a1 + 432), 0, 0x1B0u);
  memset((void *)(a1 + 1296), 0, 0x1B0u);
  v8 = gPredictorRLSLambdaLearningRate;
  v23 = dword_273D2C;
  v21 = dword_273D34;
  v22 = gPredictorRLSLambdaMax;
  v20 = gPredictorRLSLambdaMin;
  v19 = dword_273D3C;
  v18 = gPredictorRLSDelta;
  v17 = dword_273D44;
  Prediction::tagRlsFilter::vInit(
    a1,
    gPredictorRLSDelta,
    dword_273D44,
    gPredictorRLSLambdaMin,
    dword_273D3C,
    gPredictorRLSLambdaMax,
    dword_273D34,
    gPredictorRLSLambdaLearningRate,
    dword_273D2C);
  memset((void *)(a1 + 1728), 0, 0x20u);
  *(_DWORD *)(a1 + 1856) = 0;
  *(_DWORD *)(a1 + 1860) = 0;
  *(_DWORD *)(a1 + 1864) = 0;
  *(_DWORD *)(a1 + 1868) = 0;
  if ( (char *)(a1 + 1856) != &v15 )
  {
    *(_DWORD *)(a1 + 1856) = gPredictorRLSExpoSmoothAlpha;
    *(_DWORD *)(a1 + 1860) = dword_273D24;
  }
  *(_DWORD *)(a1 + 2144) = 0;
  *(_DWORD *)(a1 + 2176) = 0;
  *(_DWORD *)(a1 + 2208) = 0;
  *(_DWORD *)(a1 + 2212) = 0;
  v9 = v23;
  *(_DWORD *)(a1 + 2148) = a4.y;
  *(_DWORD *)(a1 + 2180) = a4.y;
  Prediction::tagRlsFilter::vInit(a1 + 864, v18, v17, v20, v19, v22, v21, v8, v9);
  memset((void *)(a1 + 1792), 0, 0x20u);
  *(_DWORD *)(a1 + 1888) = 0;
  *(_DWORD *)(a1 + 1892) = 0;
  *(_DWORD *)(a1 + 1896) = 0;
  *(_DWORD *)(a1 + 1900) = 0;
  if ( (char *)(a1 + 1888) != &v14 )
  {
    *(_DWORD *)(a1 + 1888) = gPredictorRLSExpoSmoothAlpha;
    *(_DWORD *)(a1 + 1892) = dword_273D24;
  }
  *(_DWORD *)(a1 + 2160) = 0;
  *(_DWORD *)(a1 + 2192) = 0;
  *(_DWORD *)(a1 + 2224) = 0;
  *(_DWORD *)(a1 + 2228) = 0;
  v10 = v23;
  *(_DWORD *)(a1 + 2164) = a3.y;
  *(_DWORD *)(a1 + 2196) = a3.y;
  Prediction::tagRlsFilter::vInit(a1 + 432, v18, v17, v20, v19, v22, v21, v8, v10);
  memset((void *)(a1 + 1760), 0, 0x20u);
  *(_DWORD *)(a1 + 1872) = 0;
  *(_DWORD *)(a1 + 1876) = 0;
  *(_DWORD *)(a1 + 1880) = 0;
  *(_DWORD *)(a1 + 1884) = 0;
  if ( (char *)(a1 + 1872) != &v13 )
  {
    *(_DWORD *)(a1 + 1872) = gPredictorRLSExpoSmoothAlpha;
    *(_DWORD *)(a1 + 1876) = dword_273D24;
  }
  *(_DWORD *)(a1 + 2152) = 0;
  *(_DWORD *)(a1 + 2184) = 0;
  *(_DWORD *)(a1 + 2216) = 0;
  *(_DWORD *)(a1 + 2220) = 0;
  v11 = v23;
  *(_DWORD *)(a1 + 2156) = a5;
  *(_DWORD *)(a1 + 2188) = a5;
  Prediction::tagRlsFilter::vInit(a1 + 1296, v18, v17, v20, v19, v22, v21, v8, v11);
  memset((void *)(a1 + 1824), 0, 0x20u);
  *(_DWORD *)(a1 + 1904) = 0;
  *(_DWORD *)(a1 + 1908) = 0;
  *(_DWORD *)(a1 + 1912) = 0;
  *(_DWORD *)(a1 + 1916) = 0;
  if ( (char *)(a1 + 1904) != &v12 )
  {
    *(_DWORD *)(a1 + 1904) = gPredictorRLSExpoSmoothAlpha;
    *(_DWORD *)(a1 + 1908) = dword_273D24;
  }
  *(_DWORD *)(a1 + 2168) = 0;
  *(_DWORD *)(a1 + 2172) = a4.x;
  *(_DWORD *)(a1 + 2204) = a4.x;
  *(_DWORD *)(a1 + 2200) = 0;
  *(_DWORD *)(a1 + 2232) = 0;
  *(_DWORD *)(a1 + 2236) = 0;
  *(_DWORD *)(a1 + 2096) = 0;
  *(_DWORD *)(a1 + 2100) = 0;
  *(_DWORD *)(a1 + 2104) = 0;
  *(_DWORD *)(a1 + 2108) = 0;
  *(_DWORD *)(a1 + 2112) = 0;
  *(_DWORD *)(a1 + 2116) = 0;
  *(_DWORD *)(a1 + 2120) = 0;
  *(_DWORD *)(a1 + 2124) = 0;
  memset((void *)(a1 + 1924), 0, 0x54u);
  *(_DWORD *)(a1 + 1920) = 3;
  memset((void *)(a1 + 2012), 0, 0x54u);
  *(_DWORD *)(a1 + 2008) = 3;
  v23 = 0;
  Prediction::tagRlsFilter::Filter((char *)a1, &v16, &v23, 0, 0, 0, 0);
  Prediction::tagRlsFilter::Filter((char *)(a1 + 432), &v16, &v23, 0, 0, 0, 0);
  Prediction::tagRlsFilter::Filter((char *)(a1 + 864), &v16, &v23, 0, 0, 0, 0);
  Prediction::tagRlsFilter::Filter((char *)(a1 + 1296), &v16, &v23, 0, 0, 0, 0);
  *(_DWORD *)a2 = a3.y;
  *((_DWORD *)a2 + 1) = a4.x;
  *(_DWORD *)a3.x = a4.y;
  *(_DWORD *)(a3.x + 4) = a5;
}
