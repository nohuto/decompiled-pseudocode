/*
 * XREFs of ?vInit@tagRlsFilter@Prediction@@QAEXVCFixPred@2@000@Z @ 0x158F9C
 * Callers:
 *     ?InitializeContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x15754D (-InitializeContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION.c)
 * Callees:
 *     ??KPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AFF (--KPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 *     ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAEXABVCFixPred@2@@Z @ 0x158D12 (-diag@-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAEXABVCFixPred@2@@Z.c)
 */

int __thiscall Prediction::tagRlsFilter::vInit(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  char *v10; // edi
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  __int64 v14; // [esp+Ch] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h]

  v10 = (char *)(this + 424);
  if ( (int *)(this + 424) != &a2 )
  {
    *(_DWORD *)v10 = a2;
    *(_DWORD *)(this + 428) = a3;
  }
  v11 = (_DWORD *)(this + 400);
  if ( (int *)(this + 400) != &a4 )
  {
    *v11 = a4;
    *(_DWORD *)(this + 404) = a5;
  }
  if ( (int *)(this + 408) != &a6 )
  {
    *(_DWORD *)(this + 408) = a6;
    *(_DWORD *)(this + 412) = a7;
  }
  if ( (_DWORD *)(this + 384) != v11 )
  {
    *(_DWORD *)(this + 384) = *v11;
    *(_DWORD *)(this + 388) = *(_DWORD *)(this + 404);
  }
  v15 = 0;
  v16 = 1;
  v12 = Prediction::operator/(&v14, &v15, (_DWORD *)(this + 384));
  if ( (_DWORD *)(this + 392) != v12 )
  {
    *(_DWORD *)(this + 392) = *v12;
    *(_DWORD *)(this + 396) = v12[1];
  }
  if ( (int *)(this + 416) != &a8 )
  {
    *(_DWORD *)(this + 416) = a8;
    *(_DWORD *)(this + 420) = a9;
  }
  Prediction::SquareMatrix<Prediction::CFixPred,3>::diag((char *)(this + 144), v10);
  v15 = 0;
  v16 = 1;
  return Prediction::SquareMatrix<Prediction::CFixPred,3>::diag((char *)(this + 288), (char *)&v15);
}
