/*
 * XREFs of _GrePolyBezierTo@12 @ 0x1FFDFC
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QBE?AU_POINTFIX@@XZ @ 0x1E578B (-ptfxGetCurrent@EPATHOBJ@@QBE-AU_POINTFIX@@XZ.c)
 *     ?vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z @ 0x1FDD2F (-vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z.c)
 */

int __stdcall GrePolyBezierTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  int v3; // esi
  DC *v4; // ecx
  int v5; // eax
  int v6; // esi
  const struct _POINTFIX *Current; // eax
  DC *v9[3]; // [esp+10h] [ebp-280h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-274h] BYREF
  _BYTE v11[12]; // [esp+24h] [ebp-26Ch] BYREF
  PATHOBJ v12; // [esp+30h] [ebp-260h] BYREF
  int v13; // [esp+38h] [ebp-258h]
  _BYTE v14[16]; // [esp+60h] [ebp-230h] BYREF
  int v15; // [esp+70h] [ebp-220h]

  v3 = 0;
  memset(v9, 0, sizeof(v9));
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  v4 = v9[0];
  if ( !v9[0] || (*((_DWORD *)v9[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_19;
  }
  v10 = 3;
  if ( a3 < 3 || a3 % v10 )
  {
    EngSetLastError(0x57u);
    goto LABEL_19;
  }
  v5 = *((_DWORD *)v9[0] + 255);
  v6 = *(_DWORD *)(v5 + 184);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v9[0], *(_DWORD *)(v5 + 188));
    v4 = v9[0];
  }
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(v4, *(_DWORD *)(*((_DWORD *)v4 + 255) + 192));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v9, 516);
  v3 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v12, v9, 1);
  if ( !v13 )
  {
    EngSetLastError(8u);
LABEL_14:
    v3 = 0;
    goto LABEL_15;
  }
  if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&v12, (struct EXFORMOBJ *)v11, a2, a3) )
    goto LABEL_14;
  Current = (const struct _POINTFIX *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&v12, &v10);
  DC::vCurrentPosition(v9[0], &a2[a3 - 1], Current);
  if ( (*((_BYTE *)v9[0] + 172) & 1) == 0
    && !EPATHOBJ::bStrokeAndOrFill(
          &v12,
          (struct XDCOBJ *)v9,
          (struct _LINEATTRS *)((char *)v9[0] + 140),
          (struct EXFORMOBJ *)v11,
          1u) )
  {
    goto LABEL_14;
  }
LABEL_15:
  EPATHOBJ::vUnlock((EPATHOBJ *)&v12);
  if ( v15 )
  {
    PopThreadGuardedObject(v14);
    v15 = 0;
  }
LABEL_19:
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v3;
}
