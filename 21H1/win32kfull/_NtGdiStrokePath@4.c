/*
 * XREFs of _NtGdiStrokePath@4 @ 0x211DC5
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

int __stdcall NtGdiStrokePath(HDC a1)
{
  int v1; // edi
  int v2; // ecx
  int v3; // eax
  DC *v4; // ecx
  int v5; // eax
  DC *v6; // ecx
  int v7; // esi
  PATHOBJ v9; // [esp+4h] [ebp-5Ch] BYREF
  int v10; // [esp+Ch] [ebp-54h]
  _BYTE v11[12]; // [esp+48h] [ebp-18h] BYREF
  DC *v12[3]; // [esp+54h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v12, 0, sizeof(v12));
  XDCOBJ::vLock((XDCOBJ *)v12, a1);
  if ( !v12[0] || (*((_DWORD *)v12[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(0x57u);
  }
  else if ( DC::bInactive(v12[0]) )
  {
    v3 = *(_DWORD *)(v2 + 1020);
    if ( (*(_DWORD *)(v3 + 184) & 0x2000) != 0 )
      GreDCSelectPen(v2, *(_DWORD *)(v3 + 192));
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&v9, v12);
    if ( v10 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v12, 516);
      v5 = EPATHOBJ::bStrokeAndOrFill(
             &v9,
             (struct XDCOBJ *)v12,
             (struct _LINEATTRS *)((char *)v12[0] + 140),
             (struct EXFORMOBJ *)v11,
             1u);
      v6 = v12[0];
      v7 = v5;
      *((_DWORD *)v12[0] + 43) &= ~1u;
      DC::hpath(v6, 0);
      v1 = v7;
    }
    else
    {
      EngSetLastError(8u);
      v4 = v12[0];
      *((_DWORD *)v12[0] + 43) &= ~1u;
      DC::hpath(v4, 0);
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v9);
  }
  else
  {
    EngSetLastError(0x3EBu);
  }
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v1;
}
