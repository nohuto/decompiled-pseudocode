/*
 * XREFs of _ReduceArrangedRectangleByFrameMargin@12 @ 0x140128
 * Callers:
 *     ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18 (-MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z @ 0x171F4C (-PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 */

char __fastcall ReduceArrangedRectangleByFrameMargin(int a1, _DWORD *a2, int *a3)
{
  int v5; // eax
  char v6; // bl
  int v7; // eax
  __int16 v8; // bx
  int v9; // ecx
  int v10; // ecx
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h]

  v12 = 0;
  v13 = 0;
  LOBYTE(v5) = GetWindowExtendedMargin(a1, (int)&v12);
  if ( !(_BYTE)v5 )
    return v5;
  v6 = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 145);
  if ( (v6 & 1) != 0 )
  {
    v7 = (__int16)v12 + *a3;
    if ( v7 == *a2 )
    {
      v8 = HIWORD(v12);
      *a3 = v7;
      goto LABEL_8;
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v8 = HIWORD(v12);
    v9 = a3[2] - SHIWORD(v12);
    if ( v9 == a2[2] )
    {
      a3[2] = v9;
LABEL_8:
      if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 145) & 1) != 0 )
        a3[2] -= v8;
      else
        *a3 += (__int16)v12;
      v10 = a3[3] - SHIWORD(v13);
      if ( v10 == a2[3] )
        a3[3] = v10;
    }
  }
  v5 = (__int16)v13 + a3[1];
  if ( v5 == a2[1] )
    a3[1] = v5;
  return v5;
}
