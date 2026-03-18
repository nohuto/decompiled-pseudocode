/*
 * XREFs of __DrawIconEx@36 @ 0x90AF8
 * Callers:
 *     _NtUserDrawIconEx@44 @ 0x90A70 (_NtUserDrawIconEx@44.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 *     ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106 (-DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GreSetBrushOrg@16 @ 0x721EA (_GreSetBrushOrg@16.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     ?GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z @ 0x750D8 (-GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z.c)
 *     ?GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z @ 0x7523E (-GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _BltIcon@36 @ 0x90D6C (_BltIcon@36.c)
 *     _GreGetBrushOrg@8 @ 0x1FD3AA (_GreGetBrushOrg@8.c)
 */

int __fastcall _DrawIconEx(HDC a1, LONG a2, struct XDCOBJ *a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  INT *AnimatedCursorFrame; // ecx
  int v10; // esi
  int v11; // edi
  bool v12; // zf
  int v13; // eax
  int DpiDependentMetric; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // edi
  int v21; // esi
  INT DpiForSystem; // eax
  INT v23; // eax
  int CompatibleBitmapInternal; // eax
  int v25; // ecx
  int v26; // esi
  int v27; // [esp-4h] [ebp-40h]
  int *v28; // [esp+0h] [ebp-3Ch]
  int *v29; // [esp+4h] [ebp-38h]
  _DWORD v30[6]; // [esp+10h] [ebp-2Ch] BYREF
  int v31; // [esp+28h] [ebp-14h] BYREF
  INT v32; // [esp+2Ch] [ebp-10h] BYREF
  int v33; // [esp+30h] [ebp-Ch]
  LONG v34; // [esp+34h] [ebp-8h]
  HDC v35; // [esp+38h] [ebp-4h]
  int v36; // [esp+50h] [ebp+14h]
  int v37; // [esp+54h] [ebp+18h]
  int v38; // [esp+58h] [ebp+1Ch]
  HDC v39; // [esp+5Ch] [ebp+20h]
  HDC CompatibleDC; // [esp+5Ch] [ebp+20h]

  v35 = a1;
  AnimatedCursorFrame = (INT *)a4;
  v10 = a9 & 0x10;
  v11 = 0;
  v34 = a2;
  v33 = 0;
  v12 = (*(_BYTE *)(a4 + 44) & 8) == 0;
  v32 = 0;
  v31 = 0;
  if ( v12 || (AnimatedCursorFrame = (INT *)GetAnimatedCursorFrame(a4, a7), (a4 = (int)AnimatedCursorFrame) != 0) )
  {
    if ( AnimatedCursorFrame[20] && (a9 & 3) == 3 )
      v33 = 1;
    GetVirtualizedCursorSize(&v32, AnimatedCursorFrame, &v31, v28, v29);
    v13 = a9 & 8;
    if ( !a5 )
    {
      if ( (a9 & 8) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(5, DpiForSystem);
      }
      else
      {
        DpiDependentMetric = v32;
      }
      a5 = DpiDependentMetric;
      v13 = a9 & 8;
    }
    v15 = a6;
    if ( !a6 )
    {
      if ( v13 )
      {
        v23 = GetDpiForSystem();
        v15 = GetDpiDependentMetric(6, v23);
      }
      else
      {
        v15 = v31 / 2;
      }
    }
    if ( a8 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(v35);
      if ( CompatibleDC )
      {
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(v35, a5, v15, 0, 0, 0);
        v36 = CompatibleBitmapInternal;
        if ( CompatibleBitmapInternal )
        {
          v30[5] = 0;
          v31 = 0;
          v37 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
          GreGetBrushOrg(v35);
          GreSetBrushOrg(CompatibleDC, 0, v31, 0);
          v30[2] = a5;
          v30[4] = a8;
          v30[0] = 0;
          v30[1] = 0;
          v30[3] = v15;
          GrePolyPatBlt(CompatibleDC, 0xF00021u, (struct XDCOBJ *)v30, 1u, v25);
          if ( v33 )
          {
            v27 = 3;
            v26 = v10 != 0 ? -2134114272 : 13369376;
          }
          else
          {
            BltIcon(0, a5, v15, _ghdcMem, a4, 1, v10 != 0 ? -2138570554 : 8913094);
            v27 = 2;
            v26 = v10 != 0 ? -2140798906 : 6684742;
          }
          BltIcon(0, a5, v15, _ghdcMem, a4, v27, v26);
          NtGdiBitBltInternal(v35, v34, a3, a5, v15, CompatibleDC, 0, 0, 13369376, -1, 0);
          GreSelectBitmap(CompatibleDC, v37);
          GreDeleteObject(v36);
          v11 = 1;
        }
        GreDeleteDC(CompatibleDC);
      }
    }
    else
    {
      if ( v33 )
      {
        BltIcon(a3, a5, v15, _ghdcMem, a4, 3, v10 != 0 ? -2134114272 : 13369376);
      }
      else
      {
        v16 = a9 & 2;
        v17 = a9 & 1;
        v39 = (HDC)v16;
        v38 = v17;
        if ( v17 )
        {
          if ( v16 )
            v18 = v10 != 0 ? -2138570554 : 8913094;
          else
            v18 = v10 != 0 ? -2134114272 : 13369376;
          v19 = a4;
          BltIcon(a3, a5, v15, _ghdcMem, a4, 1, v18);
          v16 = (int)v39;
          v17 = v38;
        }
        else
        {
          v19 = a4;
        }
        if ( v16 )
        {
          if ( v17 )
            v21 = v10 != 0 ? -2140798906 : 6684742;
          else
            v21 = v10 != 0 ? -2134114272 : 13369376;
          BltIcon(a3, a5, v15, _ghdcMem, v19, 2, v21);
        }
      }
      return 1;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  return v11;
}
