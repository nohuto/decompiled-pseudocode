/*
 * XREFs of ??1PRECOMPUTE@@QAE@XZ @ 0x1E4579
 * Callers:
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     ?SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1DB6EA (-SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1DC5A3 (-SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_.c)
 *     ?SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1DC97B (-SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@.c)
 *     ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616 (-bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859 (-bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1E4AC7 (-bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUS.c)
 * Callees:
 *     <none>
 */

void __thiscall PRECOMPUTE::~PRECOMPUTE(PRECOMPUTE *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 12) = 0;
    *(_DWORD *)(*((_DWORD *)this + 4) + 16) = 0;
    *(_DWORD *)(*((_DWORD *)this + 4) + 20) = 0;
    *(_DWORD *)(*((_DWORD *)this + 4) + 24) = 0;
    v8 = *(_DWORD *)this;
    v7 = *((_DWORD *)this + 1);
    v6 = *((_DWORD *)this + 2);
    v5 = *((_DWORD *)this + 3);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    *(_DWORD *)(*((_DWORD *)this + 4) + 32) = 0;
    v3 = *((_DWORD *)this + 4);
    if ( *(_DWORD *)(v3 + 28) )
    {
      Win32FreePool(*(_DWORD *)(v3 + 28));
      v3 = *((_DWORD *)this + 4);
    }
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(*((_DWORD *)this + 4) + 36) = 0;
    v4 = *((_DWORD *)this + 4);
    if ( *(_DWORD *)(v4 + 40) )
    {
      Win32FreePool(*(_DWORD *)(v4 + 40));
      v4 = *((_DWORD *)this + 4);
    }
    *(_DWORD *)(v4 + 40) = 0;
  }
}
