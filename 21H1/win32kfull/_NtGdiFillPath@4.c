/*
 * XREFs of _NtGdiFillPath@4 @ 0x2116F1
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?bInactive@DC@@QBEHXZ @ 0x2113DA (-bInactive@DC@@QBEHXZ.c)
 */

int __stdcall NtGdiFillPath(HDC a1)
{
  int v1; // edi
  int v2; // ecx
  int v3; // eax
  DC *v4; // ecx
  int v5; // eax
  DC *v6; // ecx
  int v7; // esi
  PATHOBJ v9; // [esp+4h] [ebp-50h] BYREF
  int v10; // [esp+Ch] [ebp-48h]
  DC *v11[3]; // [esp+48h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v11, 0, sizeof(v11));
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  if ( !v11[0] || (*((_DWORD *)v11[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(0x57u);
  }
  else if ( DC::bInactive(v11[0]) )
  {
    v3 = *(_DWORD *)(v2 + 1020);
    if ( (*(_DWORD *)(v3 + 184) & 0x1000) != 0 )
      GreDCSelectBrush(v2, *(_DWORD *)(v3 + 188));
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&v9, v11);
    if ( v10 )
    {
      EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&v9);
      v5 = EPATHOBJ::bStrokeAndOrFill(&v9, (struct XDCOBJ *)v11, 0, 0, 2u);
      v6 = v11[0];
      v7 = v5;
      *((_DWORD *)v11[0] + 43) &= ~1u;
      DC::hpath(v6, 0);
      v1 = v7;
    }
    else
    {
      EngSetLastError(8u);
      v4 = v11[0];
      *((_DWORD *)v11[0] + 43) &= ~1u;
      DC::hpath(v4, 0);
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v9);
  }
  else
  {
    EngSetLastError(0x3EBu);
  }
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v1;
}
