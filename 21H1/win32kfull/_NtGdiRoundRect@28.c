/*
 * XREFs of _NtGdiRoundRect@28 @ 0x200D84
 * Callers:
 *     <none>
 * Callees:
 *     ?bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z @ 0x22A5E (-bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     _NtGdiRectangle@20 @ 0xBB870 (_NtGdiRectangle@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527 (--0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z.c)
 */

int __stdcall NtGdiRoundRect(HDC a1, int a2, int a3, int a4, int a5, struct EPATHOBJ *a6, struct EBOX *a7)
{
  DC *v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ecx
  int v12; // esi
  int v14; // [esp+0h] [ebp-2E8h]
  int v15; // [esp+4h] [ebp-2E4h]
  DC *v16[3]; // [esp+10h] [ebp-2D8h] BYREF
  _BYTE v17[12]; // [esp+1Ch] [ebp-2CCh] BYREF
  struct _RECTL v18; // [esp+28h] [ebp-2C0h] BYREF
  _DWORD v19[20]; // [esp+38h] [ebp-2B0h] BYREF
  PATHOBJ v20; // [esp+88h] [ebp-260h] BYREF
  int v21; // [esp+90h] [ebp-258h]
  _BYTE v22[16]; // [esp+B8h] [ebp-230h] BYREF
  int v23; // [esp+C8h] [ebp-220h]

  if ( !a6 || !a7 )
    return NtGdiRectangle(a1, a2, a3, a4, a5);
  memset(v16, 0, sizeof(v16));
  XDCOBJ::vLock((XDCOBJ *)v16, a1);
  v7 = v16[0];
  if ( v16[0] && (*((_DWORD *)v16[0] + 6) & 0x10000) == 0 )
  {
    v8 = *((_DWORD *)v16[0] + 255);
    v9 = *(_DWORD *)(v8 + 184);
    if ( (v9 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v16[0], *(_DWORD *)(v8 + 188));
      v7 = v16[0];
    }
    if ( (v9 & 0x2000) != 0 )
      GreDCSelectPen(v7, *(_DWORD *)(*((_DWORD *)v7 + 255) + 192));
    v18.top = a3;
    v18.right = a4;
    v18.bottom = a5;
    v18.left = a2;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, (struct XDCOBJ *)v16, 516);
    v10 = 1;
    EBOX::EBOX((EBOX *)v19, (struct DCOBJ *)v16, &v18, (struct _LINEATTRS *)((char *)v16[0] + 140), 1);
    if ( v19[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v20, v16, 1);
    if ( v21 )
    {
      if ( bRoundRect(v19, (EPATHOBJ *)&v20, a6, a7, v14, v15) )
      {
        if ( (*((_BYTE *)v16[0] + 172) & 1) == 0 )
        {
          if ( v19[1] )
          {
            v12 = *((_DWORD *)v16[0] + 23);
            *((_DWORD *)v16[0] + 23) = *((_DWORD *)v16[0] + 24);
            *((_DWORD *)v16[0] + 59) |= 1u;
            v11 = EPATHOBJ::bStrokeAndOrFill(&v20, (struct XDCOBJ *)v16, 0, 0, 2u);
            *((_DWORD *)v16[0] + 23) = v12;
            *((_DWORD *)v16[0] + 59) |= 1u;
          }
          else
          {
            v11 = EPATHOBJ::bStrokeAndOrFill(
                    &v20,
                    (struct XDCOBJ *)v16,
                    (struct _LINEATTRS *)((char *)v16[0] + 140),
                    (struct EXFORMOBJ *)v17,
                    3u);
          }
          v10 = v11;
        }
        goto LABEL_19;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = 0;
LABEL_19:
    EPATHOBJ::vUnlock((EPATHOBJ *)&v20);
    if ( v23 )
    {
      PopThreadGuardedObject(v22);
      v23 = 0;
    }
    goto LABEL_22;
  }
  EngSetLastError(6u);
  v10 = 0;
LABEL_22:
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v10;
}
