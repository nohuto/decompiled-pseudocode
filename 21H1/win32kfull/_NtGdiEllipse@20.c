/*
 * XREFs of _NtGdiEllipse@20 @ 0x200B61
 * Callers:
 *     ?DrawSonar@@YGXPAUHDC__@@@Z @ 0x1532D7 (-DrawSonar@@YGXPAUHDC__@@@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527 (--0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z.c)
 *     ?bEllipse@@YGHAAVEPATHOBJ@@AAVEBOX@@@Z @ 0x214AD5 (-bEllipse@@YGHAAVEPATHOBJ@@AAVEBOX@@@Z.c)
 */

int __stdcall NtGdiEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  DC *v5; // ecx
  int v6; // eax
  struct _LINEATTRS *v7; // ebx
  int v8; // esi
  int v9; // edi
  int v10; // ecx
  int v11; // esi
  struct EPATHOBJ *v13; // [esp+0h] [ebp-2E8h]
  struct EBOX *v14; // [esp+4h] [ebp-2E4h]
  DC *v15[3]; // [esp+10h] [ebp-2D8h] BYREF
  _DWORD v16[3]; // [esp+1Ch] [ebp-2CCh] BYREF
  struct _RECTL v17; // [esp+28h] [ebp-2C0h] BYREF
  _DWORD v18[20]; // [esp+38h] [ebp-2B0h] BYREF
  PATHOBJ v19; // [esp+88h] [ebp-260h] BYREF
  int v20; // [esp+90h] [ebp-258h]
  _BYTE v21[16]; // [esp+B8h] [ebp-230h] BYREF
  int v22; // [esp+C8h] [ebp-220h]

  memset(v15, 0, sizeof(v15));
  XDCOBJ::vLock((XDCOBJ *)v15, a1);
  if ( !v15[0] || (*((_DWORD *)v15[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v9 = 0;
    goto LABEL_23;
  }
  v17.top = a3;
  v17.right = a4;
  v17.bottom = a5;
  v17.left = a2;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v16, (struct XDCOBJ *)v15, 516);
  v5 = v15[0];
  v6 = *((_DWORD *)v15[0] + 255);
  v7 = (struct _LINEATTRS *)((char *)v15[0] + 140);
  v8 = *(_DWORD *)(v6 + 184);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v15[0], *(_DWORD *)(v6 + 188));
    v5 = v15[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_DWORD *)(*((_DWORD *)v5 + 255) + 192));
  v9 = 1;
  EBOX::EBOX((EBOX *)v18, (struct DCOBJ *)v15, &v17, v7, 1);
  if ( !v18[0] )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v19, v15, 1);
    if ( v20 )
    {
      if ( bEllipse(v13, v14) )
      {
        if ( (*(_BYTE *)(v16[0] + 56) & 1) != 0 && v19.cCurves == 5 )
          v19.fl |= 2u;
        if ( (*((_BYTE *)v15[0] + 172) & 1) == 0 )
        {
          if ( v18[1] )
          {
            v11 = *((_DWORD *)v15[0] + 23);
            *((_DWORD *)v15[0] + 23) = *((_DWORD *)v15[0] + 24);
            *((_DWORD *)v15[0] + 59) |= 1u;
            v10 = EPATHOBJ::bStrokeAndOrFill(&v19, (struct XDCOBJ *)v15, 0, 0, 2u);
            *((_DWORD *)v15[0] + 23) = v11;
            *((_DWORD *)v15[0] + 59) |= 1u;
          }
          else
          {
            v10 = EPATHOBJ::bStrokeAndOrFill(&v19, (struct XDCOBJ *)v15, v7, (struct EXFORMOBJ *)v16, 3u);
          }
          v9 = v10;
        }
        goto LABEL_20;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v9 = 0;
LABEL_20:
    EPATHOBJ::vUnlock((EPATHOBJ *)&v19);
    if ( v22 )
    {
      PopThreadGuardedObject(v21);
      v22 = 0;
    }
  }
LABEL_23:
  if ( v15[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return v9;
}
