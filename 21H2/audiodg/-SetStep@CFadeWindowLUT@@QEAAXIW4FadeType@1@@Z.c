/*
 * XREFs of ?SetStep@CFadeWindowLUT@@QEAAXIW4FadeType@1@@Z @ 0x140064F80
 * Callers:
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140064E34 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFadeWindowLUT::SetStep(__int64 a1, int a2, int a3)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm4_4
  __int64 result; // rax

  v3 = FLOAT_1_0;
  v4 = FLOAT_N1_0;
  if ( a3 )
    v5 = FLOAT_1_0;
  else
    v5 = FLOAT_N1_0;
  v6 = (float)*(int *)(a1 + 144);
  result = (unsigned int)a2;
  *(float *)(a1 + 140) = (float)(v6 / (float)a2) * v5;
  if ( a3 )
    v6 = 0.0;
  *(float *)(a1 + 136) = v6;
  if ( a3 )
  {
    v4 = FLOAT_1_0;
    v3 = 0.0;
  }
  *(float *)(a1 + 148) = v3;
  *(float *)(a1 + 152) = v4;
  return result;
}
