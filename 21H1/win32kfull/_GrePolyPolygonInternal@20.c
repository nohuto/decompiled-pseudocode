/*
 * XREFs of _GrePolyPolygonInternal@20 @ 0x20050A
 * Callers:
 *     _GrePolyPolygon@20 @ 0x200428 (_GrePolyPolygon@20.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 */

int __fastcall GrePolyPolygonInternal(HDC a1, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  DC *v7; // ecx
  int v8; // eax
  int v9; // edi
  _BYTE v11[12]; // [esp+Ch] [ebp-280h] BYREF
  int v12; // [esp+18h] [ebp-274h]
  DC *v13[3]; // [esp+1Ch] [ebp-270h] BYREF
  PATHOBJ v14; // [esp+28h] [ebp-264h] BYREF
  int v15; // [esp+30h] [ebp-25Ch]
  _BYTE v16[16]; // [esp+58h] [ebp-234h] BYREF
  int v17; // [esp+68h] [ebp-224h]

  v12 = a3;
  memset(v13, 0, sizeof(v13));
  v6 = 1;
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  v7 = v13[0];
  if ( !v13[0] || (*((_DWORD *)v13[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v6 = 0;
LABEL_18:
    v7 = v13[0];
    goto LABEL_19;
  }
  v8 = *((_DWORD *)v13[0] + 255);
  v9 = *(_DWORD *)(v8 + 184);
  if ( (v9 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_DWORD *)(v8 + 188));
    v7 = v13[0];
  }
  if ( (v9 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_DWORD *)(*((_DWORD *)v7 + 255) + 192));
    v7 = v13[0];
  }
  if ( a4 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v13, 516);
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v14, v13, 1);
    if ( v15 )
    {
      v6 = bPolyPolygon(&v14, v11, a2, v12, a4, a5);
      if ( !v6 )
        goto LABEL_15;
      v14.fl |= 0x4000u;
      if ( (*((_BYTE *)v13[0] + 172) & 1) != 0
        || EPATHOBJ::bStrokeAndOrFill(
             &v14,
             (struct XDCOBJ *)v13,
             (struct _LINEATTRS *)((char *)v13[0] + 140),
             (struct EXFORMOBJ *)v11,
             3u) )
      {
        v6 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v6 = 0;
LABEL_15:
    EPATHOBJ::vUnlock((EPATHOBJ *)&v14);
    if ( v17 )
      PopThreadGuardedObject(v16);
    goto LABEL_18;
  }
LABEL_19:
  if ( v7 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v6;
}
