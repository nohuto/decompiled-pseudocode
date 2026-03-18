/*
 * XREFs of ?Smooth@tagExpoSmoother@Prediction@@QAE?AVCFixPred@2@V32@@Z @ 0x157DF2
 * Callers:
 *     ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x157E5A (-UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INF.c)
 * Callees:
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 */

_QWORD *__thiscall Prediction::tagExpoSmoother::Smooth(int this, _QWORD *a2, __int64 a3)
{
  bool v4; // cf
  char *v5; // edi
  _QWORD *v6; // ebx
  _QWORD *v7; // eax
  __int64 v8; // kr00_8
  _QWORD *result; // eax
  char v10; // [esp+Ch] [ebp-18h] BYREF
  __int64 v11; // [esp+14h] [ebp-10h] BYREF
  __int64 v12; // [esp+1Ch] [ebp-8h] BYREF

  v4 = *(_DWORD *)this != 0;
  v5 = (char *)(this + 8);
  LODWORD(v12) = -*(_DWORD *)this;
  HIDWORD(v12) = 1 - (v4 + *(_DWORD *)(this + 4));
  v6 = Prediction::operator*(&v11, (__int64 *)(this + 8), &v12);
  v7 = Prediction::operator*(&v12, &a3, (__int64 *)this);
  if ( v5 == &v10 )
  {
    v8 = *(_QWORD *)v5;
  }
  else
  {
    v8 = *v7 + *v6;
    *(_QWORD *)v5 = v8;
  }
  result = a2;
  *a2 = v8;
  return result;
}
