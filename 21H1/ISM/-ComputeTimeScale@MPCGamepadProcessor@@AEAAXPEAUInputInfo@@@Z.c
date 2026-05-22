/*
 * XREFs of ?ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801924FC
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180192AA0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCGamepadProcessor::ComputeTimeScale(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  double v2; // xmm3_8
  double v3; // xmm2_8
  float v4; // xmm0_4

  v2 = *((double *)this + 641);
  v3 = (float)((double)(int)*((_QWORD *)a2 + 2) / (double)(int)qword_1802092F0);
  if ( v2 == 0.0 )
    v4 = FLOAT_1_0;
  else
    v4 = (float)(v3 - v2) / 0.02;
  *((float *)this + 1284) = v4;
  *((double *)this + 641) = v3;
}
