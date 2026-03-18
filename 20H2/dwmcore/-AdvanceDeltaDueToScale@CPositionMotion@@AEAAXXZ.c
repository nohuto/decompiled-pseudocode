/*
 * XREFs of ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x18020C5E4
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x18020C63C (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x18020C720 (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPositionMotion::AdvanceDeltaDueToScale(CPositionMotion *this)
{
  float v1; // xmm0_4
  float v2; // xmm3_4

  v1 = *((float *)this + 47);
  v2 = *(float *)&FLOAT_1_0;
  if ( v1 > 0.0 )
    v2 = *((float *)this + 40) / v1;
  *((float *)this + 45) = (float)((float)((float)(*((float *)this + 46) - *((float *)this + 42)) * v2)
                                + *((float *)this + 42))
                        - *((float *)this + 46);
}
