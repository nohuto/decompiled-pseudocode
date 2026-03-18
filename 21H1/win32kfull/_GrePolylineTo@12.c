/*
 * XREFs of _GrePolylineTo@12 @ 0x2009B9
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

int __stdcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  int v3; // esi
  DC *v4; // ecx
  int v5; // eax
  int v6; // edi
  int v7; // edi
  const struct _POINTFIX *Current; // eax
  DC *v10[3]; // [esp+Ch] [ebp-284h] BYREF
  struct _POINTL *v11; // [esp+18h] [ebp-278h]
  _BYTE v12[12]; // [esp+1Ch] [ebp-274h] BYREF
  int v13; // [esp+28h] [ebp-268h] BYREF
  PATHOBJ v14; // [esp+30h] [ebp-260h] BYREF
  int v15; // [esp+38h] [ebp-258h]
  _BYTE v16[16]; // [esp+60h] [ebp-230h] BYREF
  int v17; // [esp+70h] [ebp-220h]

  v3 = 0;
  v11 = a2;
  memset(v10, 0, sizeof(v10));
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  v4 = v10[0];
  if ( !v10[0] || (*((_DWORD *)v10[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v4 = v10[0];
    goto LABEL_19;
  }
  v5 = *((_DWORD *)v10[0] + 255);
  v6 = *(_DWORD *)(v5 + 184);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v10[0], *(_DWORD *)(v5 + 188));
    v4 = v10[0];
  }
  if ( (v6 & 0x2000) != 0 )
  {
    GreDCSelectPen(v4, *(_DWORD *)(*((_DWORD *)v4 + 255) + 192));
    v4 = v10[0];
  }
  if ( !a3 )
  {
    v3 = 1;
LABEL_19:
    v7 = v3;
    goto LABEL_20;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, 516);
  v7 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v14, v10, 1);
  if ( v15 )
  {
    if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v14, (struct EXFORMOBJ *)v12, v11, a3) )
    {
      Current = (const struct _POINTFIX *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&v14, &v13);
      DC::vCurrentPosition(v10[0], &v11[a3 - 1], Current);
      if ( (*((_BYTE *)v10[0] + 172) & 1) != 0
        || EPATHOBJ::bStrokeAndOrFill(
             &v14,
             (struct XDCOBJ *)v10,
             (struct _LINEATTRS *)((char *)v10[0] + 140),
             (struct EXFORMOBJ *)v12,
             1u) )
      {
        goto LABEL_15;
      }
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  v7 = 0;
LABEL_15:
  EPATHOBJ::vUnlock((EPATHOBJ *)&v14);
  if ( v17 )
  {
    PopThreadGuardedObject(v16);
    v17 = 0;
  }
  v4 = v10[0];
LABEL_20:
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v7;
}
