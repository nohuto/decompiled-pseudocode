/*
 * XREFs of ?abs@CFixPred@Prediction@@QBE?AV12@XZ @ 0x158C8E
 * Callers:
 *     ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x157E5A (-UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INF.c)
 * Callees:
 *     <none>
 */

int *__thiscall Prediction::CFixPred::abs(int *this, int *a2)
{
  int v2; // edx
  int v3; // ecx
  int *result; // eax

  v2 = *this;
  v3 = this[1];
  if ( v3 < 0 )
  {
    v2 = -v2;
    v3 = (unsigned __int64)-__SPAIR64__(v3, v2) >> 32;
  }
  result = a2;
  *a2 = v2;
  a2[1] = v3;
  return result;
}
