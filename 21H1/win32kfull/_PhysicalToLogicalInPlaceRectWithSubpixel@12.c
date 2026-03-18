/*
 * XREFs of _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600
 * Callers:
 *     _BuildWindowListWithDpiBoundaryInfo@16 @ 0x2AC94 (_BuildWindowListWithDpiBoundaryInfo@16.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _UpdateWindowPositionsForDpiBoundaryChange@4 @ 0x9B526 (_UpdateWindowPositionsForDpiBoundaryChange@4.c)
 *     ?GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z @ 0x14FCA4 (-GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z.c)
 *     _NtUserPhysicalToLogicalDpiPointForWindow@8 @ 0x16770C (_NtUserPhysicalToLogicalDpiPointForWindow@8.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656 (-GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 *     ?ScaleValueWithSubpixel@@YGXPAJPAMM@Z @ 0x150074 (-ScaleValueWithSubpixel@@YGXPAJPAMM@Z.c)
 */

int __fastcall PhysicalToLogicalInPlaceRectWithSubpixel(int a1, _DWORD *a2, int a3)
{
  int v3; // edi
  struct tagWND *TopLevelOrDpiBoundaryWindow; // eax
  struct tagWND *v5; // esi
  char v6; // al
  int v8; // esi
  int v9; // edi
  int v10; // eax
  float *v11; // eax
  struct tagWND *v12; // [esp+4h] [ebp-44h]
  float *v13; // [esp+4h] [ebp-44h]
  float *v14; // [esp+4h] [ebp-44h]
  float *v15; // [esp+4h] [ebp-44h]
  float *v16; // [esp+4h] [ebp-44h]
  float v17; // [esp+8h] [ebp-40h]
  float v18; // [esp+8h] [ebp-40h]
  float v19; // [esp+8h] [ebp-40h]
  float v20; // [esp+8h] [ebp-40h]
  float v22; // [esp+18h] [ebp-30h]
  struct tagWND *v23; // [esp+1Ch] [ebp-2Ch]
  float v24; // [esp+1Ch] [ebp-2Ch]
  struct _KFLOATING_SAVE FloatSave; // [esp+20h] [ebp-28h] BYREF
  char v26; // [esp+40h] [ebp-8h]

  v3 = 0;
  v26 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(v12);
  v5 = TopLevelOrDpiBoundaryWindow;
  v23 = TopLevelOrDpiBoundaryWindow;
  if ( TopLevelOrDpiBoundaryWindow
    && *((_DWORD *)TopLevelOrDpiBoundaryWindow + 30)
    && CSmartFloatingSave::Save(&FloatSave) >= 0 )
  {
    v8 = *((_DWORD *)v5 + 30);
    v9 = (int)*(float *)(v8 + 52);
    v10 = (int)*(float *)(v8 + 48);
    *a2 -= v10;
    a2[2] -= v10;
    a2[3] -= v9;
    a2[1] -= v9;
    v11 = (float *)*((_DWORD *)v23 + 30);
    v22 = 1.0 / *v11;
    v24 = 1.0 / v11[5];
    ScaleValueWithSubpixel((int *)LODWORD(v22), v13, v17);
    ScaleValueWithSubpixel((int *)LODWORD(v24), v14, v18);
    ScaleValueWithSubpixel((int *)LODWORD(v22), v15, v19);
    ScaleValueWithSubpixel((int *)LODWORD(v24), v16, v20);
    v3 = 1;
    KeRestoreFloatingPointState(&FloatSave);
    v6 = 0;
    v26 = 0;
  }
  else
  {
    v6 = v26;
  }
  if ( v6 )
    KeRestoreFloatingPointState(&FloatSave);
  return v3;
}
