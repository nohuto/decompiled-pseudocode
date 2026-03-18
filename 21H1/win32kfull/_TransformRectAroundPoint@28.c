/*
 * XREFs of _TransformRectAroundPoint@28 @ 0x151AD1
 * Callers:
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     ?TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z @ 0x1500CD (-TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z.c)
 *     ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18 (-MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall TransformRectAroundPoint(
        _DWORD *a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        int a6,
        int a7)
{
  _DWORD *v7; // ebx
  int v8; // esi
  int result; // eax
  INT v10; // ebx
  INT v11; // eax

  v7 = a4;
  if ( a3 )
  {
    *a4 = a6 - EngMulDiv(a6 - *a1, a3[2] - *a3, a1[2] - *a1);
    v8 = a7 - EngMulDiv(a7 - a1[1], a3[3] - a3[1], a1[3] - a1[1]);
    a4[1] = v8;
    a4[2] = *a4 + a3[2] - *a3;
    result = v8 + a3[3] - a3[1];
  }
  else
  {
    v10 = a2;
    *a4 = a6 - EngMulDiv(a6 - *a1, a5, a2);
    a4[1] = a7 - EngMulDiv(a7 - a1[1], a5, v10);
    a4[2] = *a4 + EngMulDiv(a1[2] - *a1, a5, v10);
    v11 = EngMulDiv(a1[3] - a1[1], a5, v10);
    v7 = a4;
    result = a4[1] + v11;
  }
  v7[3] = result;
  return result;
}
