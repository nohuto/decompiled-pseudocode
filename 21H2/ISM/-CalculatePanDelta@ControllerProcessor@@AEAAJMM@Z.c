/*
 * XREFs of ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180120910
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x180121E14 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     sqrtf_0 @ 0x18004B22B (sqrtf_0.c)
 */

__int64 __fastcall ControllerProcessor::CalculatePanDelta(ControllerProcessor *this, float a2, float a3)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  float v10; // xmm7_4

  v3 = a2;
  v4 = a3;
  if ( COERCE_FLOAT(LODWORD(a3) & _xmm) > 0.00000011920929 || COERCE_FLOAT(LODWORD(a2) & _xmm) > 0.00000011920929 )
  {
    v6 = sqrtf_0((float)(a3 * a3) + (float)(a2 * a2));
    if ( v6 > 1.0 )
    {
      v3 = a2 / v6;
      v4 = a3 / v6;
    }
    v7 = v3 * -11.0;
    v8 = v4 * 11.0;
    if ( v7 == 0.0
      || (LODWORD(v9) = COERCE_UNSIGNED_INT(v8 / v7) & _xmm, v8 == 0.0)
      || *(float *)&dword_180209330 >= v9
      || v9 >= (float)(1.0 / *(float *)&dword_180209330) )
    {
      if ( COERCE_FLOAT(LODWORD(v7) & _xmm) <= COERCE_FLOAT(LODWORD(v8) & _xmm) )
        v7 = 0.0;
      else
        v8 = 0.0;
    }
    v10 = v8 + *((float *)this + 102);
    *((float *)this + 101) = v7 + *((float *)this + 101);
    *((float *)this + 102) = v10;
  }
  return 0LL;
}
