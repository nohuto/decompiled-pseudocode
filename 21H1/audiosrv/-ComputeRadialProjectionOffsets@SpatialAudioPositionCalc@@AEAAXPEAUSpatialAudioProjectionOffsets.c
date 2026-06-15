/*
 * XREFs of ?ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x18012B208
 * Callers:
 *     ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x180020B20 (-CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I.c)
 * Callees:
 *     sinf_0 @ 0x180074B1F (sinf_0.c)
 */

void __fastcall SpatialAudioPositionCalc::ComputeRadialProjectionOffsets(
        SpatialAudioPositionCalc *this,
        struct SpatialAudioProjectionOffsets *a2,
        struct StaticObjectProjectionData *a3)
{
  float v5; // xmm8_4
  float v6; // xmm0_4
  float v7; // xmm11_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm6_4

  v5 = *((float *)a3 + 26);
  v6 = sinf_0(*((float *)a3 + 9) * 0.017453292);
  *(float *)a2 = v5;
  v7 = v6 * v5;
  v8 = *((float *)a3 + 6) * 0.017453292;
  *((float *)a2 + 1) = v7;
  *((float *)a2 + 2) = sinf_0(v8) * v5;
  v9 = sinf_0((float)(90.0 - *((float *)a3 + 6)) * 0.017453292);
  v10 = *((float *)a3 + 7);
  *((_DWORD *)a2 + 3) = COERCE_UNSIGNED_INT(v9 * v5) ^ _xmm;
  *((float *)a2 + 4) = sinf_0(v10 * 0.017453292) * v5;
  v11 = sinf_0((float)(v10 - 90.0) * 0.017453292);
  v12 = *((float *)a3 + 8);
  *((float *)a2 + 5) = v11 * v5;
  *((float *)a2 + 6) = sinf_0((float)(180.0 - v12) * 0.017453292) * v5;
  *((float *)a2 + 7) = sinf_0((float)(v12 - 90.0) * 0.017453292) * v5;
  *((float *)a2 + 8) = sinf_0((float)(90.0 - *((float *)a3 + 9)) * 0.017453292) * v5;
  *((float *)a2 + 9) = sinf_0(*((float *)a3 + 10) * 0.017453292) * v7;
  v13 = sinf_0((float)(90.0 - *((float *)a3 + 10)) * 0.017453292);
  v14 = *((float *)a3 + 11);
  *((float *)a2 + 10) = v13 * v7;
  *((float *)a2 + 11) = sinf_0((float)(180.0 - v14) * 0.017453292) * v7;
  *((float *)a2 + 12) = sinf_0((float)(v14 - 90.0) * 0.017453292) * v7;
}
