/*
 * XREFs of _GrePolyPolylineInternal@20 @ 0x2007A2
 * Callers:
 *     _GrePolyPolyline@20 @ 0x2006C0 (_GrePolyPolyline@20.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 */

int __fastcall GrePolyPolylineInternal(HDC a1, struct _POINTL *a2, int *a3, int a4, int a5)
{
  int *v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  struct _POINTL *v9; // eax
  int v10; // ebx
  _BYTE v12[12]; // [esp+10h] [ebp-284h] BYREF
  unsigned int v13; // [esp+1Ch] [ebp-278h]
  DC *v14[3]; // [esp+20h] [ebp-274h] BYREF
  struct _POINTL *v15; // [esp+2Ch] [ebp-268h]
  PATHOBJ v16; // [esp+30h] [ebp-264h] BYREF
  int v17; // [esp+38h] [ebp-25Ch]
  char v18[16]; // [esp+60h] [ebp-234h] BYREF
  int v19; // [esp+70h] [ebp-224h]

  v5 = a3;
  v6 = 0;
  v15 = a2;
  memset(v14, 0, sizeof(v14));
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  if ( !v14[0] || (*((_DWORD *)v14[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v14, 516);
    v7 = *((_DWORD *)v14[0] + 255);
    v8 = *(_DWORD *)(v7 + 184);
    if ( (v8 & 0x1000) != 0 )
      GreDCSelectBrush(v14[0], *(_DWORD *)(v7 + 188));
    if ( (v8 & 0x2000) != 0 )
      GreDCSelectPen(v14[0], *(_DWORD *)(*((_DWORD *)v14[0] + 255) + 192));
    if ( a4 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v16, v14, 1);
      if ( v17 )
      {
        v13 = (unsigned int)&a3[a4];
        v9 = v15;
        do
        {
          v10 = *v5;
          a5 -= *v5;
          if ( a5 < 0 || v10 < 2 )
          {
            EngSetLastError(0x57u);
            goto LABEL_19;
          }
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&v16, (struct EXFORMOBJ *)v12, v9)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v16, (struct EXFORMOBJ *)v12, v15 + 1, v10 - 1) )
          {
            goto LABEL_19;
          }
          ++v5;
          v9 = &v15[v10];
          v15 = v9;
        }
        while ( (unsigned int)v5 < v13 );
        if ( (*((_BYTE *)v14[0] + 172) & 1) != 0
          || EPATHOBJ::bStrokeAndOrFill(
               &v16,
               (struct XDCOBJ *)v14,
               (struct _LINEATTRS *)((char *)v14[0] + 140),
               (struct EXFORMOBJ *)v12,
               1u) )
        {
          v6 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
LABEL_19:
      EPATHOBJ::vUnlock((EPATHOBJ *)&v16);
      if ( v19 )
        PopThreadGuardedObject(v18);
    }
    else
    {
      v6 = 1;
    }
  }
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v6;
}
