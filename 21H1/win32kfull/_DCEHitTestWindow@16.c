/*
 * XREFs of _DCEHitTestWindow@16 @ 0x150745
 * Callers:
 *     ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176 (-DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _PhysicalToLogicalDPIPointWithHitTest@16 @ 0x1514B5 (_PhysicalToLogicalDPIPointWithHitTest@16.c)
 *     _EditionQueryInertiaWorker@12 @ 0x17CA46 (_EditionQueryInertiaWorker@12.c)
 * Callees:
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DCEPointInTriangle@@YGHPAU_D3DVERTEX@@MM@Z @ 0x14FAD0 (-DCEPointInTriangle@@YGHPAU_D3DVERTEX@@MM@Z.c)
 *     _BuildVertexList@12 @ 0x1505EE (_BuildVertexList@12.c)
 *     _DCEInverseTransform@16 @ 0x150822 (_DCEInverseTransform@16.c)
 */

int __fastcall DCEHitTestWindow(int *a1, int a2, int *a3, int a4)
{
  int v5; // edi
  double v6; // st7
  float *v7; // ecx
  double v8; // st6
  unsigned int v9; // esi
  int v10; // ecx
  struct _D3DVERTEX *v12; // [esp+0h] [ebp-F0h]
  float v13; // [esp+4h] [ebp-ECh]
  float v14; // [esp+8h] [ebp-E8h]
  float v16; // [esp+20h] [ebp-D0h]
  float v17; // [esp+24h] [ebp-CCh]
  float v18[49]; // [esp+28h] [ebp-C8h] BYREF

  v5 = 0;
  if ( EnterFloatingPointRegion() )
  {
    v17 = (float)*a3;
    v16 = (float)a3[1];
    BuildVertexList(v18, a1, a2);
    v6 = v17;
    v7 = v18;
    v8 = v16;
    v9 = 0;
    while ( 1 )
    {
      v13 = v8;
      *(float *)&v12 = v6;
      if ( DCEPointInTriangle(v7, v12, v13, v14) )
        break;
      v6 = v17;
      ++v9;
      v8 = v16;
      v7 = (float *)(v10 + 96);
      if ( v9 >= 2 )
        goto LABEL_8;
    }
    if ( DCEInverseTransform(a4, a3) )
      v5 = 1;
LABEL_8:
    KeRestoreFloatingPointState(_gfsSave);
  }
  return v5;
}
