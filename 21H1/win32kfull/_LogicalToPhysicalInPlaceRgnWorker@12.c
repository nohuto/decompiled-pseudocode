/*
 * XREFs of _LogicalToPhysicalInPlaceRgnWorker@12 @ 0xA1A12
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     ?ValidateParents@@YGHPAUtagWND@@H@Z @ 0x7D624 (-ValidateParents@@YGHPAUtagWND@@H@Z.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656 (-GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TransformRgn@@YGPAUHRGN__@@PAU1@PAUtagXFORM@@@Z @ 0x15014E (-TransformRgn@@YGPAUHRGN__@@PAU1@PAUtagXFORM@@@Z.c)
 */

int __fastcall LogicalToPhysicalInPlaceRgnWorker(struct tagWND *a1, HRGN *a2, int a3)
{
  struct tagWND *TopLevelOrDpiBoundaryWindow; // esi
  int v5; // esi
  float *v7; // eax
  double v8; // st6
  HRGN v9; // eax
  HRGN v10; // [esp+0h] [ebp-5Ch]
  struct tagXFORM *v11; // [esp+4h] [ebp-58h]
  float v12; // [esp+8h] [ebp-54h]
  float v13; // [esp+Ch] [ebp-50h]
  float v14; // [esp+14h] [ebp-48h]
  float v15; // [esp+14h] [ebp-48h]
  struct _KFLOATING_SAVE FloatSave; // [esp+18h] [ebp-44h] BYREF
  char v17; // [esp+38h] [ebp-24h]
  float v18; // [esp+3Ch] [ebp-20h]
  float v19; // [esp+40h] [ebp-1Ch]
  float v20; // [esp+44h] [ebp-18h]
  float v21; // [esp+48h] [ebp-14h]
  float v22; // [esp+4Ch] [ebp-10h]
  float v23; // [esp+50h] [ebp-Ch]

  v17 = 0;
  TopLevelOrDpiBoundaryWindow = a1;
  if ( a3 )
    TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  if ( (unsigned int)*a2 > 2
    && TopLevelOrDpiBoundaryWindow
    && *((_DWORD *)TopLevelOrDpiBoundaryWindow + 30)
    && IsWindowDesktopComposed(TopLevelOrDpiBoundaryWindow)
    && CSmartFloatingSave::Save(&FloatSave) >= 0 )
  {
    v7 = (float *)*((_DWORD *)TopLevelOrDpiBoundaryWindow + 30);
    v19 = 0.0;
    v20 = 0.0;
    v14 = *v7;
    v8 = v14;
    v18 = v14;
    v13 = v7[5];
    v21 = v13;
    v12 = v7[12];
    v22 = v12;
    v15 = v7[13];
    v23 = v15;
    if ( 1.0 == v8 && v13 == 1.0 && v15 == 0.0 && v12 == 0.0 || (v9 = TransformRgn(v10, v11)) == 0 )
    {
      v5 = 0;
    }
    else
    {
      *a2 = v9;
      v5 = 1;
    }
    KeRestoreFloatingPointState(&FloatSave);
    v17 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( v17 )
    KeRestoreFloatingPointState(&FloatSave);
  return v5;
}
