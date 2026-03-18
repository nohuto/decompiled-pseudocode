/*
 * XREFs of _NtGdiStrokeAndFillPath@4 @ 0x211C98
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?bInactive@DC@@QBEHXZ @ 0x2113DA (-bInactive@DC@@QBEHXZ.c)
 */

int __stdcall NtGdiStrokeAndFillPath(HDC a1)
{
  int v1; // edi
  DC *v2; // ecx
  int v3; // eax
  int v4; // esi
  DC *v5; // ecx
  int v6; // eax
  DC *v7; // ecx
  int v8; // esi
  PATHOBJ v10; // [esp+4h] [ebp-5Ch] BYREF
  int v11; // [esp+Ch] [ebp-54h]
  _BYTE v12[12]; // [esp+48h] [ebp-18h] BYREF
  DC *v13[3]; // [esp+54h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v13, 0, sizeof(v13));
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( !v13[0] || (*((_DWORD *)v13[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(0x57u);
  }
  else if ( DC::bInactive(v13[0]) )
  {
    v3 = *((_DWORD *)v2 + 255);
    v4 = *(_DWORD *)(v3 + 184);
    if ( (v4 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v2, *(_DWORD *)(v3 + 188));
      v2 = v13[0];
    }
    if ( (v4 & 0x2000) != 0 )
      GreDCSelectPen(v2, *(_DWORD *)(*((_DWORD *)v2 + 255) + 192));
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&v10, v13);
    if ( v11 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v13, 516);
      EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&v10);
      v6 = EPATHOBJ::bStrokeAndOrFill(
             &v10,
             (struct XDCOBJ *)v13,
             (struct _LINEATTRS *)((char *)v13[0] + 140),
             (struct EXFORMOBJ *)v12,
             3u);
      v7 = v13[0];
      v8 = v6;
      *((_DWORD *)v13[0] + 43) &= ~1u;
      DC::hpath(v7, 0);
      v1 = v8;
    }
    else
    {
      EngSetLastError(8u);
      v5 = v13[0];
      *((_DWORD *)v13[0] + 43) &= ~1u;
      DC::hpath(v5, 0);
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v10);
  }
  else
  {
    EngSetLastError(0x3EBu);
  }
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v1;
}
