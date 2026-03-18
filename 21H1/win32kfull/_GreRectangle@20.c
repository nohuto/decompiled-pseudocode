/*
 * XREFs of _GreRectangle@20 @ 0xBB904
 * Callers:
 *     _NtGdiRectangle@20 @ 0xBB870 (_NtGdiRectangle@20.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z @ 0xBB65A (-GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QAEXPAU_RECTL@@H@Z @ 0x1E6288 (-vInit@RECTANGLEPATHOBJ@@QAEXPAU_RECTL@@H@Z.c)
 *     ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527 (--0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z.c)
 */

int __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  int v5; // ebx
  LONG v6; // esi
  int v7; // ecx
  LONG v8; // edi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  struct ERECTL *v13; // ecx
  int v14; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  LONG v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct ERECTL *v39; // ecx
  struct _LINEATTRS *v40; // esi
  int v41; // eax
  ULONG iJoin; // edi
  int v43; // eax
  int v44; // ecx
  int v45; // esi
  _DWORD v46[4]; // [esp+Ch] [ebp-468h] BYREF
  struct _LINEATTRS *v47; // [esp+1Ch] [ebp-458h]
  LONG v48; // [esp+20h] [ebp-454h]
  int v49; // [esp+24h] [ebp-450h]
  _DWORD v50[3]; // [esp+28h] [ebp-44Ch] BYREF
  _DWORD v51[3]; // [esp+34h] [ebp-440h] BYREF
  _BYTE v52[8]; // [esp+40h] [ebp-434h] BYREF
  int v53; // [esp+48h] [ebp-42Ch]
  _BYTE v54[16]; // [esp+70h] [ebp-404h] BYREF
  int v55; // [esp+80h] [ebp-3F4h]
  _DWORD v56[2]; // [esp+298h] [ebp-1DCh] BYREF
  struct _POINTL v57; // [esp+2A0h] [ebp-1D4h] BYREF
  struct _POINTL v58; // [esp+2A8h] [ebp-1CCh] BYREF
  struct _RECTL v59; // [esp+2E8h] [ebp-18Ch] BYREF
  _BYTE v60[372]; // [esp+2F8h] [ebp-17Ch] BYREF

  v5 = 0;
  v48 = a2;
  memset(v51, 0, sizeof(v51));
  v6 = a2;
  XDCOBJ::vLock((XDCOBJ *)v51, a1);
  v7 = v51[0];
  if ( !v51[0] || (*(_DWORD *)(v51[0] + 24) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_20;
  }
  v5 = 1;
  v8 = a4;
  if ( (*(_BYTE *)(*(_DWORD *)(v51[0] + 1020) + 148) & 1) != 0 )
  {
    --v6;
    v8 = a4 - 1;
    v48 = v6;
  }
  v59.top = a3;
  v59.left = v6;
  v59.right = v8;
  v59.bottom = a5;
  v9 = *(_DWORD *)(v51[0] + 1020);
  v10 = *(_DWORD *)(v9 + 184);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v51[0], *(_DWORD *)(v9 + 188));
    v7 = v51[0];
  }
  if ( (v10 & 0x2000) != 0 )
    GreDCSelectPen(v7, *(_DWORD *)(*(_DWORD *)(v7 + 1020) + 192));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v51, 516);
  v49 = *(_DWORD *)(v50[0] + 56);
  if ( (v49 & 1) == 0 || (*(_BYTE *)(v51[0] + 172) & 1) != 0 )
  {
LABEL_49:
    v40 = (struct _LINEATTRS *)(v51[0] + 140);
    EBOX::EBOX((EBOX *)v56, (struct DCOBJ *)v51, &v59, (struct _LINEATTRS *)(v51[0] + 140), 0);
    if ( v56[0] )
      goto LABEL_20;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v52, (struct XDCOBJ *)v51, 1);
    if ( v53 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v52, 0, &v57)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v52, 0, &v58, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v52) )
      {
        if ( (*(_BYTE *)(v51[0] + 172) & 1) == 0 )
        {
          v41 = *(_DWORD *)(v51[0] + 96);
          if ( v56[1] )
          {
            v45 = *(_DWORD *)(v51[0] + 92);
            *(_DWORD *)(v51[0] + 92) = v41;
            *(_DWORD *)(v51[0] + 236) |= 1u;
            v44 = EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v52, (struct XDCOBJ *)v51, 0, 0, 2u);
            *(_DWORD *)(v51[0] + 92) = v45;
            *(_DWORD *)(v51[0] + 236) |= 1u;
          }
          else
          {
            iJoin = v40->iJoin;
            if ( (*(_DWORD *)(v41 + 24) & 0x800) != 0 )
              v40->iJoin = 2;
            v43 = EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v52, (struct XDCOBJ *)v51, v40, (struct EXFORMOBJ *)v50, 3u);
            v40->iJoin = iJoin;
            v44 = v43;
          }
          v5 = v44;
        }
        goto LABEL_53;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v5 = 0;
LABEL_53:
    EPATHOBJ::vUnlock((EPATHOBJ *)v52);
    if ( v55 )
    {
      PopThreadGuardedObject(v54);
      v55 = 0;
    }
    goto LABEL_20;
  }
  if ( *(struct PEN **)(v51[0] + 96) != gpPenNull )
  {
    v47 = (struct _LINEATTRS *)(v51[0] + 140);
    if ( (*(_BYTE *)(v51[0] + 140) & 1) == 0 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v51[0] + 1020) + 228) == 2 )
      {
        if ( (v49 & 2) != 0 )
        {
          v33 = (*(_DWORD *)(v50[0] + 48) + 15) >> 4;
          v59.left += v33;
          v59.right += v33;
          v34 = (*(_DWORD *)(v50[0] + 52) + 15) >> 4;
          v59.top += v34;
          v59.bottom += v34;
        }
        else
        {
          v35 = lCvt(*(_DWORD *)v50[0], *(_DWORD *)(v50[0] + 4), v59.left);
          v59.left = (*(_DWORD *)(v50[0] + 48) + 15 + v35) >> 4;
          v36 = lCvt(*(_DWORD *)v50[0], *(_DWORD *)(v50[0] + 4), v59.right);
          v59.right = (*(_DWORD *)(v50[0] + 48) + 15 + v36) >> 4;
          v37 = lCvt(*(_DWORD *)(v50[0] + 24), *(_DWORD *)(v50[0] + 28), v59.top);
          v59.top = (*(_DWORD *)(v50[0] + 52) + 15 + v37) >> 4;
          v38 = lCvt(*(_DWORD *)(v50[0] + 24), *(_DWORD *)(v50[0] + 28), v59.bottom);
          v59.bottom = (*(_DWORD *)(v50[0] + 52) + 15 + v38) >> 4;
        }
        ERECTL::vOrder((ERECTL *)&v59);
      }
      else
      {
        if ( (v49 & 2) != 0 )
        {
          v26 = ((*(int *)(v50[0] + 48) >> 3) + 1) >> 1;
          v59.left += v26;
          v59.right += v26;
          v27 = ((*(int *)(v50[0] + 52) >> 3) + 1) >> 1;
          v59.top += v27;
          v59.bottom += v27;
        }
        else
        {
          v28 = lCvt(*(_DWORD *)v50[0], *(_DWORD *)(v50[0] + 4), v59.left);
          v59.left = (((*(_DWORD *)(v50[0] + 48) + v28) >> 3) + 1) >> 1;
          v29 = lCvt(*(_DWORD *)v50[0], *(_DWORD *)(v50[0] + 4), v59.right);
          v59.right = (((*(_DWORD *)(v50[0] + 48) + v29) >> 3) + 1) >> 1;
          v30 = lCvt(*(_DWORD *)(v50[0] + 24), *(_DWORD *)(v50[0] + 28), v59.top);
          v59.top = (((*(_DWORD *)(v50[0] + 52) + v30) >> 3) + 1) >> 1;
          v31 = lCvt(*(_DWORD *)(v50[0] + 24), *(_DWORD *)(v50[0] + 28), v59.bottom);
          v59.bottom = (((*(_DWORD *)(v50[0] + 52) + v31) >> 3) + 1) >> 1;
        }
        ERECTL::vOrder((ERECTL *)&v59);
        v32 = v59.bottom - 1;
        --v59.right;
        --v59.bottom;
        if ( v59.left > v59.right || v59.top > v32 )
          goto LABEL_20;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)v60, &v59, *(_DWORD *)(v51[0] + 172) & 4);
      if ( *(struct BRUSH **)(v51[0] + 92) == gpbrNull )
      {
        if ( (*(_BYTE *)(v51[0] + 24) & 0x40) != 0 )
        {
          v46[0] = v48;
          v46[1] = a3;
          v46[3] = a5;
          v46[2] = v8;
          XDCOBJ::vAccumulate((XDCOBJ *)v51, (struct ERECTL *)v46);
        }
      }
      else
      {
        ++v59.left;
        ++v59.top;
        if ( !ERECTL::bWrapped((ERECTL *)&v59) && !GreRectBlt((struct DCOBJ *)v51, v39) )
        {
          v5 = 0;
          goto LABEL_20;
        }
      }
      v14 = EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v60, (struct XDCOBJ *)v51, v47, 0, 1u);
      goto LABEL_19;
    }
    goto LABEL_49;
  }
  if ( *(struct BRUSH **)(v51[0] + 92) != gpbrNull || (*(_BYTE *)(v51[0] + 24) & 0x40) != 0 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v51[0] + 1020) + 228) == 2 )
    {
      if ( (v49 & 2) != 0 )
      {
        v20 = (*(_DWORD *)(v50[0] + 48) + 15) >> 4;
        v59.left += v20;
        v59.right += v20;
        v21 = (*(_DWORD *)(v50[0] + 52) + 15) >> 4;
        v59.top += v21;
        v59.bottom += v21;
      }
      else
      {
        v22 = lCvt(*(_DWORD *)v50[0], *(_DWORD *)(v50[0] + 4), v59.left);
        v59.left = (*(_DWORD *)(v50[0] + 48) + 15 + v22) >> 4;
        v23 = lCvt(*(_DWORD *)v50[0], *(_DWORD *)(v50[0] + 4), v59.right);
        v59.right = (*(_DWORD *)(v50[0] + 48) + 15 + v23) >> 4;
        v24 = lCvt(*(_DWORD *)(v50[0] + 24), *(_DWORD *)(v50[0] + 28), v59.top);
        v59.top = (*(_DWORD *)(v50[0] + 52) + 15 + v24) >> 4;
        v25 = lCvt(*(_DWORD *)(v50[0] + 24), *(_DWORD *)(v50[0] + 28), v59.bottom);
        v59.bottom = (*(_DWORD *)(v50[0] + 52) + 15 + v25) >> 4;
      }
      ERECTL::vOrder((ERECTL *)&v59);
    }
    else
    {
      if ( (v49 & 2) != 0 )
      {
        v11 = ((*(int *)(v50[0] + 48) >> 3) + 1) >> 1;
        v59.left += v11;
        v59.right += v11;
        v12 = ((*(int *)(v50[0] + 52) >> 3) + 1) >> 1;
        v59.top += v12;
        v59.bottom += v12;
      }
      else
      {
        v16 = lCvt(*(_DWORD *)v50[0], *(_DWORD *)(v50[0] + 4), v59.left);
        v59.left = (((*(_DWORD *)(v50[0] + 48) + v16) >> 3) + 1) >> 1;
        v17 = lCvt(*(_DWORD *)v50[0], *(_DWORD *)(v50[0] + 4), v59.right);
        v59.right = (((*(_DWORD *)(v50[0] + 48) + v17) >> 3) + 1) >> 1;
        v18 = lCvt(*(_DWORD *)(v50[0] + 24), *(_DWORD *)(v50[0] + 28), v59.top);
        v59.top = (((*(_DWORD *)(v50[0] + 52) + v18) >> 3) + 1) >> 1;
        v19 = lCvt(*(_DWORD *)(v50[0] + 24), *(_DWORD *)(v50[0] + 28), v59.bottom);
        v59.bottom = (((*(_DWORD *)(v50[0] + 52) + v19) >> 3) + 1) >> 1;
      }
      ERECTL::vOrder((ERECTL *)&v59);
      --v59.right;
      --v59.bottom;
    }
    if ( !ERECTL::bWrapped((ERECTL *)&v59) )
    {
      v14 = GreRectBlt((struct DCOBJ *)v51, v13);
LABEL_19:
      v5 = v14;
    }
  }
LABEL_20:
  if ( v51[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v51);
  return v5;
}
