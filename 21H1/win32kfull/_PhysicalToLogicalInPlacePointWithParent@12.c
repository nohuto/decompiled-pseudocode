/*
 * XREFs of _PhysicalToLogicalInPlacePointWithParent@12 @ 0x15156E
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?AdjustMouseCoordinates@@YGXPAUtagWND@@PAJ@Z @ 0x19515D (-AdjustMouseCoordinates@@YGXPAUtagWND@@PAJ@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656 (-GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 *     _FixedPointSubPixel@8 @ 0x151063 (_FixedPointSubPixel@8.c)
 */

struct tagWND *__fastcall PhysicalToLogicalInPlacePointWithParent(_DWORD *a1, int *a2, int *a3)
{
  struct tagWND *result; // eax
  struct tagWND *v5; // esi
  float *v6; // esi
  double v7; // st7
  double v8; // st6
  double v9; // st7
  double v10; // st7
  double v11; // st6
  double v12; // st7
  double v13; // rtt
  double v14; // st6
  int v15; // eax
  double v16; // st6
  float v17; // [esp+Ch] [ebp-14h]
  float v18; // [esp+Ch] [ebp-14h]
  float v19; // [esp+Ch] [ebp-14h]
  float v20; // [esp+Ch] [ebp-14h]
  float v21; // [esp+Ch] [ebp-14h]
  float v22; // [esp+Ch] [ebp-14h]
  double v23; // [esp+10h] [ebp-10h]
  double v24; // [esp+18h] [ebp-8h]

  result = GetTopLevelOrDpiBoundaryWindow(a1);
  v5 = result;
  if ( result )
  {
    result = (struct tagWND *)IsWindowDesktopComposed(result);
    if ( result )
    {
      v6 = (float *)*((_DWORD *)v5 + 30);
      if ( v6 )
      {
        result = (struct tagWND *)EnterFloatingPointRegion();
        if ( result )
        {
          v17 = 1.0 / *v6;
          v23 = v17;
          v7 = v17;
          v18 = 1.0 / v6[5];
          v8 = v18;
          v24 = v18;
          if ( a3 )
          {
            v9 = FixedPointSubPixel(*a3);
            v19 = (float)*a2;
            *a2 = (int)((v9 + v19 - v6[12]) * v23);
            v10 = FixedPointSubPixel(a3[1]);
            v20 = (float)a2[1];
            v11 = v10 + v20 - v6[13];
            v12 = v24;
          }
          else
          {
            v21 = (float)*a2;
            v13 = v8;
            v14 = v7 * (v21 - v6[12]);
            v12 = v13;
            v15 = (int)v14;
            v16 = (double)a2[1];
            *a2 = v15;
            v22 = v16;
            v11 = v22 - v6[13];
          }
          a2[1] = (int)(v12 * v11);
          return (struct tagWND *)KeRestoreFloatingPointState(_gfsSave);
        }
      }
    }
  }
  return result;
}
