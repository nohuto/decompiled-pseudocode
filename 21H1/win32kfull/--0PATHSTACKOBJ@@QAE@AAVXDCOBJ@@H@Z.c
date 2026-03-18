/*
 * XREFs of ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A
 * Callers:
 *     _GreRectangle@20 @ 0xBB904 (_GreRectangle@20.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     ?GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z @ 0x1FF302 (-GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _GrePolyBezierTo@12 @ 0x1FFDFC (_GrePolyBezierTo@12.c)
 *     _GrePolyDraw@16 @ 0x1FFFA3 (_GrePolyDraw@16.c)
 *     _GrePolyPolygonInternal@20 @ 0x20050A (_GrePolyPolygonInternal@20.c)
 *     _GrePolyPolylineInternal@20 @ 0x2007A2 (_GrePolyPolylineInternal@20.c)
 *     _GrePolylineTo@12 @ 0x2009B9 (_GrePolylineTo@12.c)
 *     _NtGdiEllipse@20 @ 0x200B61 (_NtGdiEllipse@20.c)
 *     _NtGdiRoundRect@28 @ 0x200D84 (_NtGdiRoundRect@28.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ?vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z @ 0x1CCC42 (-vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z.c)
 *     ??0EPATHOBJ@@QAE@XZ @ 0x1E40E7 (--0EPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@PAUHPATH__@@@Z @ 0x1E4555 (--0XEPATHOBJ@@QAE@PAUHPATH__@@@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QBE?AU_POINTFIX@@XZ @ 0x1E578B (-ptfxGetCurrent@EPATHOBJ@@QBE-AU_POINTFIX@@XZ.c)
 */

PATHSTACKOBJ *__thiscall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  int v4; // eax
  DC *v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  _BYTE v10[8]; // [esp+Ch] [ebp-94h] BYREF
  int v11; // [esp+14h] [ebp-8Ch]
  _BYTE v12[8]; // [esp+50h] [ebp-50h] BYREF
  struct HPATH__ **v13; // [esp+58h] [ebp-48h]
  _BYTE v14[4]; // [esp+94h] [ebp-Ch] BYREF
  int v15; // [esp+98h] [ebp-8h]
  int v16; // [esp+9Ch] [ebp-4h]
  struct _POINTL *v17; // [esp+ACh] [ebp+Ch]

  EPATHOBJ::EPATHOBJ(this);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 7) = 0;
  v4 = *((_DWORD *)*a2 + 43);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      *((_DWORD *)*a2 + 43) = v4 & 0xFFFFFFFD;
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, *((struct HPATH__ **)*a2 + 34));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v12);
      if ( v13 && v11 && EPATHOBJ::bClone((EPATHOBJ *)v12, (struct EPATHOBJ *)v10) )
        DC::hpath(*a2, *v13);
      else
        DC::hpath(*a2, 0);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v12);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
    }
    *((_DWORD *)this + 2) = 0;
    if ( !*((_DWORD *)this + 16) )
    {
      PushThreadGuardedObject((char *)this + 48, this, XEPATHOBJ_vDestructWrap);
      *((_DWORD *)this + 16) = 1;
    }
    EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 34));
    if ( *((_DWORD *)this + 2) && a3 )
    {
      v17 = (struct _POINTL *)*((_DWORD *)*a2 + 255);
      if ( (v17[23].x & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)a2, 516);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v14,
          (struct _POINTL *)(*((_DWORD *)*a2 + 255) + 236),
          (struct _POINTFIX *)(*((_DWORD *)*a2 + 255) + 8),
          1u);
        *(_DWORD *)(*((_DWORD *)*a2 + 255) + 184) &= ~0x200u;
        EPATHOBJ::bMoveTo(this, 0, (struct _POINTL *)(*((_DWORD *)*a2 + 255) + 8));
      }
      else
      {
        EPATHOBJ::ptfxGetCurrent(this);
        if ( v17[1].x != v15 || v17[1].y != v16 )
          EPATHOBJ::bMoveTo(this, 0, v17 + 1);
      }
    }
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = (char *)this + 72;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 22) = (char *)this + 344;
    *((_DWORD *)this + 86) = 0;
    *((_DWORD *)this + 32) = 1;
    *((_DWORD *)this + 23) = 0;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 25) = 0;
    *((_DWORD *)this + 27) = 0;
    *((_DWORD *)this + 26) = 0;
    *((_DWORD *)this + 28) = 0;
    *((_DWORD *)this + 33) = 1;
    *((_DWORD *)this + 87) = (char *)this + 356;
    *((_DWORD *)this + 88) = 256;
    if ( a3 )
    {
      v5 = *a2;
      if ( (*(_DWORD *)(*((_DWORD *)*a2 + 255) + 184) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)a2, 516);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v14,
          (struct _POINTL *)(*((_DWORD *)*a2 + 255) + 236),
          (struct _POINTFIX *)(*((_DWORD *)*a2 + 255) + 8),
          1u);
        *(_DWORD *)(*((_DWORD *)*a2 + 255) + 184) &= ~0x200u;
        v5 = *a2;
      }
      v6 = *((_DWORD *)v5 + 255);
      *((_DWORD *)this + 29) = *(_DWORD *)(v6 + 8);
      *((_DWORD *)this + 30) = *(_DWORD *)(v6 + 12);
      v7 = *((_DWORD *)*a2 + 255);
      v8 = *(_DWORD *)(v7 + 184);
      if ( (v8 & 0x400) != 0 )
      {
        *(_DWORD *)(v7 + 184) = v8 & 0xFFFFFBFF;
        *((_DWORD *)*a2 + 42) = 0;
      }
    }
  }
  return this;
}
