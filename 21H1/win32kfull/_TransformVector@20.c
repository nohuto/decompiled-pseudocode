/*
 * XREFs of _TransformVector@20 @ 0x17BC83
 * Callers:
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _TransformVectorWithInputTargetPrecedence@12 @ 0x14E6DF (_TransformVectorWithInputTargetPrecedence@12.c)
 *     _LogicalToPhysicalPointForWindow@16 @ 0x15148D (_LogicalToPhysicalPointForWindow@16.c)
 *     _PhysicalToLogicalPointForWindow@16 @ 0x151670 (_PhysicalToLogicalPointForWindow@16.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1796EB (-ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z @ 0x17A360 (-TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 *     _FixedPointSubPixel@8 @ 0x151063 (_FixedPointSubPixel@8.c)
 */

NTSTATUS (__stdcall *__fastcall TransformVector(
        float *a1,
        int *a2,
        int *a3,
        int *a4,
        int a5))(PKFLOATING_SAVE FloatSave)
{
  int *v5; // esi
  char v6; // bl
  bool v8; // sf
  NTSTATUS (__stdcall *result)(PKFLOATING_SAVE); // eax
  double v10; // st7
  double v11; // st7
  float v12; // [esp+Ch] [ebp-3Ch]
  float v14; // [esp+18h] [ebp-30h]
  float v15; // [esp+18h] [ebp-30h]
  float v16; // [esp+1Ch] [ebp-2Ch]
  float v17; // [esp+1Ch] [ebp-2Ch]
  float v18; // [esp+1Ch] [ebp-2Ch]
  struct _KFLOATING_SAVE FloatSave; // [esp+20h] [ebp-28h] BYREF
  char v20; // [esp+40h] [ebp-8h]

  v5 = a3;
  v6 = 0;
  v20 = 0;
  v8 = CSmartFloatingSave::Save(&FloatSave) < 0;
  result = KeRestoreFloatingPointState;
  if ( v8 )
  {
    v6 = v20;
  }
  else
  {
    if ( a5 )
    {
      v10 = 0.0;
      if ( a4 )
      {
        v14 = FixedPointSubPixel(*a4);
        v10 = 0.0;
      }
      else
      {
        v14 = 0.0;
      }
      v12 = (float)*a2;
      *a2 = (int)((v12 + v14 - a1[12]) / *a1);
      if ( a4 )
        v10 = FixedPointSubPixel(a4[1]);
      v5 = a3;
      v15 = v10;
      v16 = (float)*a3;
      v11 = (v16 + v15 - a1[13]) / a1[5];
    }
    else
    {
      v17 = (float)*a2;
      *a2 = (int)(v17 * *a1 + a1[12]);
      v18 = (float)*a3;
      v11 = a1[5] * v18 + a1[13];
    }
    *v5 = (int)v11;
    KeRestoreFloatingPointState(&FloatSave);
    result = KeRestoreFloatingPointState;
    v20 = 0;
  }
  if ( v6 )
    return (NTSTATUS (__stdcall *)(PKFLOATING_SAVE))result(&FloatSave);
  return result;
}
