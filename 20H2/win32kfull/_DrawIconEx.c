/*
 * XREFs of _DrawIconEx @ 0x1C0091C78
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0092430 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3124 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246ECC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C0037A28 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C0037B68 (GrePolyPatBlt.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     BltIcon @ 0x1C0092070 (BltIcon.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C00956C4 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00CD540 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     GreGetBrushOrg @ 0x1C0152D8C (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  char v9; // r14
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // edi
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v14; // r13d
  __int64 v15; // rcx
  unsigned int DpiDependentMetric; // r12d
  int v17; // eax
  int v18; // r15d
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // r14d
  int v23; // ecx
  int v25; // eax
  unsigned int v26; // eax
  HDC CompatibleDC; // r14
  __int64 CompatibleBitmapInternal; // rax
  int v29; // ecx
  int v30; // eax
  unsigned int DpiForSystem; // eax
  unsigned int v32; // eax
  int v33; // [rsp+68h] [rbp-31h]
  __int64 v34; // [rsp+70h] [rbp-29h]
  __int64 v35; // [rsp+78h] [rbp-21h]
  __int64 v36; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v37; // [rsp+88h] [rbp-11h]
  int v38; // [rsp+8Ch] [rbp-Dh]
  __int64 v39; // [rsp+90h] [rbp-9h]
  __int64 v43; // [rsp+100h] [rbp+67h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = *(_DWORD *)(a4 + 80);
  v12 = a9 & 0x10;
  v33 = 0;
  a9 = 0;
  AnimatedCursorFrame = (struct tagCURSOR *)a4;
  LODWORD(v43) = 0;
  v14 = 0;
  if ( (v11 & 8) != 0 )
  {
    AnimatedCursorFrame = GetAnimatedCursorFrame((struct tagACON *const)a4, a7);
    if ( !AnimatedCursorFrame )
    {
      UserSetLastError(87LL);
      return v10;
    }
  }
  if ( *((_QWORD *)AnimatedCursorFrame + 16) )
  {
    if ( (v9 & 3) == 3 )
      v14 = 1;
    v33 = v14;
  }
  GetVirtualizedCursorSize(AnimatedCursorFrame, &a9, (int *)&v43);
  DpiDependentMetric = a5;
  v17 = v9 & 8;
  if ( !a5 )
  {
    if ( (v9 & 8) != 0 )
    {
      DpiForSystem = GetDpiForSystem(v15);
      DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
      v17 = v9 & 8;
    }
    else
    {
      DpiDependentMetric = a9;
    }
  }
  v18 = a6;
  v19 = 2;
  if ( !a6 )
  {
    if ( v17 )
    {
      v32 = GetDpiForSystem(2LL);
      v20 = GetDpiDependentMetric(6LL, v32);
      v19 = 2;
    }
    else
    {
      v20 = (int)v43 / 2;
    }
    v18 = v20;
  }
  if ( !a8 )
  {
    if ( v14 )
    {
      v19 = 3;
      v26 = v12 != 0 ? 0x80000000 : 0;
    }
    else
    {
      v21 = v9 & 1;
      v22 = v9 & 2;
      a9 = v21;
      if ( v21 )
      {
        if ( v22 )
          v23 = v12 != 0 ? -2138570554 : 8913094;
        else
          v23 = v12 != 0 ? -2134114272 : 13369376;
        BltIcon(a1, v18, ghdcMem, (__int64)AnimatedCursorFrame, 1, v23);
        v21 = a9;
        v19 = 2;
      }
      if ( !v22 )
        return 1;
      if ( v21 )
      {
        v25 = v12 != 0 ? -2140798906 : 6684742;
LABEL_24:
        BltIcon(a1, v18, ghdcMem, (__int64)AnimatedCursorFrame, v19, v25);
        return 1;
      }
      v26 = v12 != 0 ? 0x80000000 : 0;
    }
    v25 = v26 + 13369376;
    goto LABEL_24;
  }
  CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
  if ( CompatibleDC )
  {
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL, 0LL);
    v35 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      v43 = 0LL;
      v34 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
      GreGetBrushOrg(a1);
      GreSetBrushOrg(CompatibleDC, v43, SHIDWORD(v43), 0LL);
      v39 = a8;
      v36 = 0LL;
      v37 = DpiDependentMetric;
      v38 = v18;
      GrePolyPatBlt(CompatibleDC, 0xF00021u, (struct _POLYPATBLT *)&v36, 1u);
      if ( v33 )
      {
        v29 = 3;
        v30 = v12 != 0 ? -2134114272 : 13369376;
      }
      else
      {
        BltIcon(CompatibleDC, v18, ghdcMem, (__int64)AnimatedCursorFrame, 1, v12 != 0 ? -2138570554 : 8913094);
        v29 = 2;
        v30 = v12 != 0 ? -2140798906 : 6684742;
      }
      BltIcon(CompatibleDC, v18, ghdcMem, (__int64)AnimatedCursorFrame, v29, v30);
      NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v18, CompatibleDC, 0, 0, 13369376, -1, 0);
      GreSelectBitmap(CompatibleDC, v34);
      GreDeleteObject(v35);
      v10 = 1;
    }
    GreDeleteDC(CompatibleDC);
  }
  return v10;
}
