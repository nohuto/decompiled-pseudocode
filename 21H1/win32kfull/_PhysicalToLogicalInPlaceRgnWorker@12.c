/*
 * XREFs of _PhysicalToLogicalInPlaceRgnWorker@12 @ 0x36FD6
 * Callers:
 *     _PhysicalToLogicalInPlaceRgn@8 @ 0x36FCA (_PhysicalToLogicalInPlaceRgn@8.c)
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656 (-GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TransformRgn@@YGPAUHRGN__@@PAU1@PAUtagXFORM@@@Z @ 0x15014E (-TransformRgn@@YGPAUHRGN__@@PAU1@PAUtagXFORM@@@Z.c)
 */

int __fastcall PhysicalToLogicalInPlaceRgnWorker(struct tagWND *TopLevelOrDpiBoundaryWindow, HRGN *a2, int a3)
{
  int v5; // esi
  float *v7; // eax
  double v8; // st6
  HRGN v9; // eax
  struct tagWND *v10; // [esp+0h] [ebp-5Ch]
  struct tagXFORM *v11; // [esp+4h] [ebp-58h]
  float v12; // [esp+8h] [ebp-54h]
  float v13; // [esp+Ch] [ebp-50h]
  float v14; // [esp+14h] [ebp-48h]
  float v15; // [esp+14h] [ebp-48h]
  float v16; // [esp+14h] [ebp-48h]
  float v17; // [esp+14h] [ebp-48h]
  struct _KFLOATING_SAVE FloatSave; // [esp+18h] [ebp-44h] BYREF
  char v19; // [esp+38h] [ebp-24h]
  float v20; // [esp+3Ch] [ebp-20h]
  float v21; // [esp+40h] [ebp-1Ch]
  float v22; // [esp+44h] [ebp-18h]
  float v23; // [esp+48h] [ebp-14h]
  float v24; // [esp+4Ch] [ebp-10h]
  float v25; // [esp+50h] [ebp-Ch]

  v19 = 0;
  if ( a3 )
    TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(v10);
  if ( (unsigned int)*a2 > 2
    && TopLevelOrDpiBoundaryWindow
    && *((_DWORD *)TopLevelOrDpiBoundaryWindow + 30)
    && IsWindowDesktopComposed(TopLevelOrDpiBoundaryWindow)
    && CSmartFloatingSave::Save(&FloatSave) >= 0 )
  {
    v7 = (float *)*((_DWORD *)TopLevelOrDpiBoundaryWindow + 30);
    v21 = 0.0;
    v22 = 0.0;
    v14 = 1.0 / *v7;
    v20 = v14;
    v8 = v14;
    v15 = 1.0 / v7[5];
    v13 = v15;
    v23 = v15;
    v16 = -v7[12] / *v7;
    v12 = v16;
    v24 = v16;
    v17 = -v7[13] / v7[5];
    v25 = v17;
    if ( 1.0 == v8 && v13 == 1.0 && v12 == 0.0 && v17 == 0.0 || (v9 = TransformRgn((HRGN)v10, v11)) == 0 )
    {
      v5 = 0;
    }
    else
    {
      *a2 = v9;
      v5 = 1;
    }
    KeRestoreFloatingPointState(&FloatSave);
    v19 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( v19 )
    KeRestoreFloatingPointState(&FloatSave);
  return v5;
}
