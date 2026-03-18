/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D1A40
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034AD4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003CBA4 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003CFE4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScrat.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180063270 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DAB64 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800DD3D0 (-FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___ @ 0x1800E7AEC (CComposition--ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180157698 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CCursorVisualReference *,0>::RemoveAt(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x19Cu, 0LL);
  }
  else
  {
    v6 = *(_QWORD *)a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4++;
        *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v4);
        v2 = *(_DWORD *)(a1 + 24);
      }
      while ( v4 < v2 - 1 );
    }
    *(_DWORD *)(a1 + 24) = v2 - 1;
  }
  return v3;
}
