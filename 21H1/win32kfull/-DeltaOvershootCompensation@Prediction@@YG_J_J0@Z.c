/*
 * XREFs of ?DeltaOvershootCompensation@Prediction@@YG_J_J0@Z @ 0x156D5F
 * Callers:
 *     ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x157E5A (-UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INF.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 */

int __stdcall Prediction::DeltaOvershootCompensation(int this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // esi

  LODWORD(v3) = 0;
  if ( (int)a2 < 0 )
  {
    if ( __SPAIR64__(a3, HIDWORD(a2)) > 0 )
    {
      v3 = __SPAIR64__(a3, HIDWORD(a2)) / 2;
      v4 = -this;
      if ( __SPAIR64__(a3, HIDWORD(a2)) / 2 > -__SPAIR64__(a2, this) )
        goto LABEL_9;
    }
  }
  else if ( __SPAIR64__(a2, this) > 0 && (int)a3 < 0 )
  {
    v3 = __SPAIR64__(a3, HIDWORD(a2)) / 2;
    v4 = -this;
    if ( __SPAIR64__(a3, HIDWORD(a2)) / 2 < -__SPAIR64__(a2, this) )
LABEL_9:
      LODWORD(v3) = v4;
  }
  return v3;
}
