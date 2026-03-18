/*
 * XREFs of _GrePolyDraw@16 @ 0x1FFFA3
 * Callers:
 *     _NtGdiPolyDraw@16 @ 0x213ACA (_NtGdiPolyDraw@16.c)
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QBE?AU_POINTFIX@@XZ @ 0x1E578B (-ptfxGetCurrent@EPATHOBJ@@QBE-AU_POINTFIX@@XZ.c)
 *     ?vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z @ 0x1FDD2F (-vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z.c)
 */

int __fastcall GrePolyDraw(HDC a1, struct _POINTL *a2, char *a3, int a4)
{
  DC *v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  int v8; // ecx
  char *v9; // esi
  bool v10; // zf
  char *v11; // esi
  const struct _POINTFIX *Current; // eax
  _BYTE v14[12]; // [esp+10h] [ebp-2A8h] BYREF
  int v15; // [esp+1Ch] [ebp-29Ch] BYREF
  char *v16; // [esp+20h] [ebp-298h]
  DC *v17[3]; // [esp+24h] [ebp-294h] BYREF
  char *v18; // [esp+30h] [ebp-288h]
  int v19; // [esp+34h] [ebp-284h]
  struct _POINTL *v20; // [esp+38h] [ebp-280h]
  char v21; // [esp+3Fh] [ebp-279h]
  char *v22; // [esp+40h] [ebp-278h]
  PATHOBJ v23; // [esp+44h] [ebp-274h] BYREF
  int v24; // [esp+4Ch] [ebp-26Ch]
  CPPEH_RECORD ms_exc; // [esp+2A0h] [ebp-18h]

  v20 = a2;
  v22 = a3;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v4 = v17[0];
  if ( !v17[0] || (*((_DWORD *)v17[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return 0;
  }
  v5 = *((_DWORD *)v17[0] + 255);
  v6 = *(_DWORD *)(v5 + 184);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v17[0], *(_DWORD *)(v5 + 188));
    v4 = v17[0];
  }
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(v4, *(_DWORD *)(*((_DWORD *)v4 + 255) + 192));
  if ( !a4 )
  {
    v7 = 1;
    goto LABEL_47;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v17, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v23, v17, 1);
  if ( !v24 )
  {
    EngSetLastError(8u);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v23);
    v7 = 0;
    goto LABEL_47;
  }
  v18 = &v22[a4];
  v7 = 0;
  v8 = 0;
  v19 = 0;
  while ( v22 < v18 )
  {
    v16 = v22;
    v21 = 0;
    ms_exc.registration.TryLevel = 0;
    v21 = *v22++;
    ms_exc.registration.TryLevel = -2;
    if ( v8 )
      goto LABEL_46;
    switch ( v21 )
    {
      case 2:
        ms_exc.registration.TryLevel = 1;
        while ( v22 < v18 && *v22 == 2 )
          ++v22;
        if ( v22 < v18 && (*v22 & 0xFE) == 2 )
          ++v22;
        ms_exc.registration.TryLevel = -2;
LABEL_43:
        v11 = v22;
        v16 = (char *)(v22 - v16);
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v23, (struct EXFORMOBJ *)v14, v20, (unsigned int)v16) )
          goto LABEL_46;
        v20 += (int)v16;
        ms_exc.registration.TryLevel = 2;
        v10 = (*(v11 - 1) & 1) == 0;
        goto LABEL_31;
      case 3:
        goto LABEL_43;
      case 4:
        ms_exc.registration.TryLevel = 3;
        while ( v22 < v18 && *v22 == 4 )
          ++v22;
        if ( v22 < v18 && (*v22 & 0xFE) == 4 )
          ++v22;
        ms_exc.registration.TryLevel = -2;
        v9 = (char *)(v22 - v16);
        if ( (v22 - v16) % 3u )
        {
LABEL_28:
          EngSetLastError(0x57u);
          goto LABEL_46;
        }
        if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&v23, (struct EXFORMOBJ *)v14, v20, v22 - v16) )
          goto LABEL_46;
        v20 += (int)v9;
        ms_exc.registration.TryLevel = 4;
        v10 = (*(v22 - 1) & 1) == 0;
LABEL_31:
        if ( !v10 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&v23);
        ms_exc.registration.TryLevel = -2;
        v8 = v19;
        if ( v19 == 1 )
          goto LABEL_46;
        break;
      case 6:
        if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&v23, (struct EXFORMOBJ *)v14, v20) )
          goto LABEL_46;
        ++v20;
        v8 = v19;
        break;
      default:
        goto LABEL_28;
    }
  }
  ms_exc.registration.TryLevel = 5;
  Current = (const struct _POINTFIX *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&v23, &v15);
  DC::vCurrentPosition(v17[0], v20 - 1, Current);
  ms_exc.registration.TryLevel = -2;
  if ( v19 != 1
    && ((*((_BYTE *)v17[0] + 172) & 1) != 0
     || EPATHOBJ::bStrokeAndOrFill(
          &v23,
          (struct XDCOBJ *)v17,
          (struct _LINEATTRS *)((char *)v17[0] + 140),
          (struct EXFORMOBJ *)v14,
          1u)) )
  {
    v7 = 1;
  }
LABEL_46:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v23);
LABEL_47:
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v7;
}
