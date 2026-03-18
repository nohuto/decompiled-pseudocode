/*
 * XREFs of ??KPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AFF
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 *     ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x157E5A (-UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INF.c)
 *     ?vInit@tagRlsFilter@Prediction@@QAEXVCFixPred@2@000@Z @ 0x158F9C (-vInit@tagRlsFilter@Prediction@@QAEXVCFixPred@2@000@Z.c)
 * Callees:
 *     ?Div128by64@@YG_J_J_K0AA_J@Z @ 0x156DE4 (-Div128by64@@YG_J_J_K0AA_J@Z.c)
 */

_QWORD *__fastcall Prediction::operator/(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v5; // [esp-10h] [ebp-20h]
  __int64 v6; // [esp-8h] [ebp-18h]
  __int64 *v7; // [esp+0h] [ebp-10h]

  HIDWORD(v6) = a3[1];
  LODWORD(v6) = *a3;
  HIDWORD(v5) = *a2;
  LODWORD(v5) = 0;
  *a1 = Div128by64((int)a2[1], v5, v6, v7);
  return a1;
}
