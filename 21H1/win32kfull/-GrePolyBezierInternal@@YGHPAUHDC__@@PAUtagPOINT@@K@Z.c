/*
 * XREFs of ?GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z @ 0x1FF302
 * Callers:
 *     _GrePolyBezier@12 @ 0x1FFD2A (_GrePolyBezier@12.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 */

int __userpurge GrePolyBezierInternal@<eax>(
        struct _POINTL *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        struct tagPOINT *a4,
        unsigned int a5)
{
  DC *v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  struct _POINTL *v9; // ebx
  _BYTE v11[12]; // [esp+Ch] [ebp-280h] BYREF
  struct _POINTL *v12; // [esp+18h] [ebp-274h]
  DC *v13[3]; // [esp+1Ch] [ebp-270h] BYREF
  PATHOBJ v14; // [esp+28h] [ebp-264h] BYREF
  int v15; // [esp+30h] [ebp-25Ch]
  _BYTE v16[16]; // [esp+58h] [ebp-234h] BYREF
  int v17; // [esp+68h] [ebp-224h]

  v12 = a1;
  memset(v13, 0, sizeof(v13));
  XDCOBJ::vLock((XDCOBJ *)v13, a2);
  v5 = v13[0];
  if ( !v13[0] || (*((_DWORD *)v13[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_20;
  }
  if ( (unsigned int)a3 < 4 || (v6 = 1, (unsigned int)a3 % 3 != 1) )
  {
    EngSetLastError(0x57u);
LABEL_20:
    v6 = 0;
    goto LABEL_21;
  }
  v7 = *((_DWORD *)v13[0] + 255);
  v8 = *(_DWORD *)(v7 + 184);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_DWORD *)(v7 + 188));
    v5 = v13[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_DWORD *)(*((_DWORD *)v5 + 255) + 192));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v13, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v14, v13, 1);
  if ( !v15 )
  {
    EngSetLastError(8u);
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  v9 = v12;
  if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&v14, (struct EXFORMOBJ *)v11, v12)
    || !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&v14, (struct EXFORMOBJ *)v11, v9 + 1, (unsigned int)a3 - 1)
    || (*((_BYTE *)v13[0] + 172) & 1) == 0
    && !EPATHOBJ::bStrokeAndOrFill(
          &v14,
          (struct XDCOBJ *)v13,
          (struct _LINEATTRS *)((char *)v13[0] + 140),
          (struct EXFORMOBJ *)v11,
          1u) )
  {
    goto LABEL_15;
  }
LABEL_16:
  EPATHOBJ::vUnlock((EPATHOBJ *)&v14);
  if ( v17 )
  {
    PopThreadGuardedObject(v16);
    v17 = 0;
  }
LABEL_21:
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v6;
}
