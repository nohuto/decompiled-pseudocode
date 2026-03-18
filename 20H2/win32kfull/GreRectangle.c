/*
 * XREFs of GreRectangle @ 0x1C0139384
 * Callers:
 *     NtGdiRectangle @ 0x1C01392C0 (NtGdiRectangle.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C0068954 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0137A94 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C0138B0C (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0139EEC (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C013AA94 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013B974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // r10
  LONG v9; // r14d
  unsigned int v10; // edi
  LONG v11; // r15d
  bool v12; // zf
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  LONG v26; // eax
  int v27; // eax
  unsigned int v28; // r8d
  int v29; // r8d
  int v30; // eax
  unsigned int v31; // r8d
  int v32; // eax
  unsigned int v33; // r8d
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // r8d
  int v37; // eax
  int v38; // eax
  unsigned int v39; // r8d
  unsigned int v40; // r8d
  unsigned int v41; // r8d
  int v42; // eax
  int v43; // eax
  int v44; // edx
  unsigned int v45; // r8d
  int v46; // ecx
  unsigned int v47; // r8d
  int v48; // edx
  unsigned int v49; // r8d
  __int64 v50; // rax
  int v51; // edi
  unsigned int v52; // ecx
  __int64 v53; // rbx
  int v54; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v55[2]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v56[4]; // [rsp+48h] [rbp-B8h] BYREF
  struct _XFORMOBJ v57[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _RECTL v58; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v59[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v60; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v61; // [rsp+90h] [rbp-70h] BYREF
  PATHOBJ v62; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-28h]
  _BYTE v64[32]; // [rsp+120h] [rbp+20h] BYREF
  int v65; // [rsp+140h] [rbp+40h]
  PATHOBJ ppo; // [rsp+390h] [rbp+290h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v55, a1);
  v8 = v55[0];
  if ( !v55[0] || (*(_DWORD *)(v55[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_68;
  }
  v9 = a4 - 1;
  v10 = 1;
  v11 = a2 - 1;
  v12 = (*(_DWORD *)(*(_QWORD *)(v55[0] + 976LL) + 108LL) & 1) == 0;
  v13 = *(_DWORD *)(*(_QWORD *)(v55[0] + 976LL) + 108LL) & 1;
  v58.top = a3;
  if ( v12 )
    v9 = a4;
  v58.bottom = a5;
  v58.right = v9;
  if ( !v13 )
    v11 = a2;
  v58.left = v11;
  v14 = *(_QWORD *)(v55[0] + 976LL);
  v15 = *(_DWORD *)(v14 + 152);
  if ( (v15 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v55[0], *(_QWORD *)(v14 + 160));
    v8 = v55[0];
  }
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)(v8 + 976) + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v57, (struct XDCOBJ *)v55, 516);
  v16 = *(_QWORD *)&v57[0].ulReserved;
  v17 = v55[0];
  if ( (*(_DWORD *)(*(_QWORD *)&v57[0].ulReserved + 32LL) & 1) == 0 || (*(_DWORD *)(v55[0] + 248LL) & 1) != 0 )
  {
LABEL_51:
    EBOX::EBOX((EBOX *)v59, (struct DCOBJ *)v55, &v58, (struct _LINEATTRS *)(v55[0] + 208LL), 0);
    if ( v59[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v62, (struct XDCOBJ *)v55, 1);
    if ( v63 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v62, 0LL, &v60)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v62, 0LL, &v61, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v62) )
      {
        if ( (*(_DWORD *)(v55[0] + 248LL) & 1) == 0 )
        {
          v50 = *(_QWORD *)(v55[0] + 144LL);
          if ( v59[1] )
          {
            v53 = *(_QWORD *)(v55[0] + 136LL);
            *(_QWORD *)(v55[0] + 136LL) = v50;
            *(_DWORD *)(v55[0] + 316LL) |= 1u;
            v52 = EPATHOBJ::bStrokeAndOrFill(&v62, (struct XDCOBJ *)v55, 0LL, 0LL, 2u);
            *(_QWORD *)(v55[0] + 136LL) = v53;
            *(_DWORD *)(v55[0] + 316LL) |= 1u;
          }
          else
          {
            v51 = *(_DWORD *)(v17 + 212);
            if ( (*(_DWORD *)(v50 + 40) & 0x800) != 0 )
              *(_DWORD *)(v17 + 212) = 2;
            v52 = EPATHOBJ::bStrokeAndOrFill(&v62, (struct XDCOBJ *)v55, (LINEATTRS *)(v17 + 208), v57, 3u);
            *(_DWORD *)(v17 + 212) = v51;
          }
          v10 = v52;
        }
        goto LABEL_55;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = 0;
LABEL_55:
    EPATHOBJ::vUnlock((EPATHOBJ *)&v62);
    if ( v65 )
    {
      PopThreadGuardedObject(v64);
      v65 = 0;
    }
    goto LABEL_22;
  }
  if ( *(struct PEN **)(v55[0] + 144LL) != gpPenNull )
  {
    if ( (*(_DWORD *)(v55[0] + 208LL) & 1) == 0 )
    {
      v23 = *(_DWORD *)(*(_QWORD *)&v57[0].ulReserved + 32LL) & 2;
      if ( *(_DWORD *)(*(_QWORD *)(v55[0] + 976LL) + 208LL) == 2 )
      {
        if ( v23 )
        {
          v42 = (*(_DWORD *)(*(_QWORD *)&v57[0].ulReserved + 24LL) + 15) >> 4;
          v58.left += v42;
          v58.right += v42;
          v43 = (*(_DWORD *)(*(_QWORD *)&v57[0].ulReserved + 28LL) + 15) >> 4;
          v58.top += v43;
          v58.bottom += v43;
        }
        else
        {
          v54 = 0;
          bFToL((float)v58.left * **(float **)&v57[0].ulReserved, &v54, 0);
          v44 = *(_DWORD *)(v16 + 24) + v54 + 15;
          v54 &= v45;
          v58.left = v44 >> 4;
          bFToL((float)v58.right * *(float *)v16, &v54, v45);
          v46 = *(_DWORD *)(v16 + 24) + v54 + 15;
          v54 &= v47;
          v58.right = v46 >> 4;
          bFToL((float)v58.top * *(float *)(v16 + 12), &v54, v47);
          v48 = *(_DWORD *)(v16 + 28) + v54 + 15;
          v54 &= v49;
          v58.top = v48 >> 4;
          bFToL((float)v58.bottom * *(float *)(v16 + 12), &v54, v49);
          v58.bottom = (*(_DWORD *)(v16 + 28) + v54 + 15) >> 4;
        }
        ERECTL::vOrder((ERECTL *)&v58);
      }
      else
      {
        if ( v23 )
        {
          v24 = ((*(int *)(*(_QWORD *)&v57[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v58.left += v24;
          v58.right += v24;
          v25 = ((*(int *)(*(_QWORD *)&v57[0].ulReserved + 28LL) >> 3) + 1) >> 1;
          v58.top += v25;
          v58.bottom += v25;
        }
        else
        {
          v54 = 0;
          bFToL((float)v58.left * **(float **)&v57[0].ulReserved, &v54, 0);
          v27 = v54 + *(_DWORD *)(v16 + 24);
          v54 &= v28;
          v58.left = ((v27 >> 3) + 1) >> 1;
          bFToL((float)v58.right * *(float *)v16, &v54, v28);
          v29 = v54 + *(_DWORD *)(v16 + 24);
          v54 = 0;
          v58.right = ((v29 >> 3) + 1) >> 1;
          bFToL((float)v58.top * *(float *)(v16 + 12), &v54, 0);
          v30 = v54 + *(_DWORD *)(v16 + 28);
          v54 &= v31;
          v58.top = ((v30 >> 3) + 1) >> 1;
          bFToL((float)v58.bottom * *(float *)(v16 + 12), &v54, v31);
          v58.bottom = (((v54 + *(_DWORD *)(v16 + 28)) >> 3) + 1) >> 1;
        }
        ERECTL::vOrder((ERECTL *)&v58);
        v26 = v58.bottom - 1;
        --v58.right;
        --v58.bottom;
        if ( v58.left > v58.right || v58.top > v26 )
          goto LABEL_23;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, &v58, *(_DWORD *)(v17 + 248) & 4);
      if ( *(struct BRUSH **)(v55[0] + 136LL) == gpbrNull )
      {
        if ( (*(_DWORD *)(v55[0] + 36LL) & 0x40) != 0 )
        {
          v56[3] = a5;
          v56[0] = v11;
          v56[1] = a3;
          v56[2] = v9;
          XDCOBJ::vAccumulate((XDCOBJ *)v55, (struct ERECTL *)v56);
        }
        goto LABEL_35;
      }
      ++v58.left;
      ++v58.top;
      if ( ERECTL::bWrapped((ERECTL *)&v58) || (unsigned int)GreRectBlt((struct DCOBJ *)v55, (struct ERECTL *)&v58) )
      {
LABEL_35:
        v21 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v55, (LINEATTRS *)(v17 + 208), 0LL, 1u);
        goto LABEL_21;
      }
LABEL_68:
      v10 = 0;
      goto LABEL_22;
    }
    goto LABEL_51;
  }
  if ( *(struct BRUSH **)(v55[0] + 136LL) != gpbrNull || (*(_DWORD *)(v55[0] + 36LL) & 0x40) != 0 )
  {
    v18 = *(_DWORD *)(*(_QWORD *)&v57[0].ulReserved + 32LL) & 2;
    if ( *(_DWORD *)(*(_QWORD *)(v55[0] + 976LL) + 208LL) == 2 )
    {
      if ( v18 )
      {
        v37 = (*(_DWORD *)(*(_QWORD *)&v57[0].ulReserved + 24LL) + 15) >> 4;
        v58.left += v37;
        v58.right += v37;
        v38 = (*(_DWORD *)(*(_QWORD *)&v57[0].ulReserved + 28LL) + 15) >> 4;
        v58.top += v38;
        v58.bottom += v38;
      }
      else
      {
        v54 = 0;
        bFToL((float)v58.left * **(float **)&v57[0].ulReserved, &v54, 0);
        v58.left = (*(_DWORD *)(v16 + 24) + v54 + 15) >> 4;
        v54 = 0;
        bFToL((float)v58.right * *(float *)v16, &v54, v39);
        v58.right = (*(_DWORD *)(v16 + 24) + v54 + 15) >> 4;
        v54 = 0;
        bFToL((float)v58.top * *(float *)(v16 + 12), &v54, v40);
        v58.top = (*(_DWORD *)(v16 + 28) + v54 + 15) >> 4;
        v54 = 0;
        bFToL((float)v58.bottom * *(float *)(v16 + 12), &v54, v41);
        v58.bottom = (*(_DWORD *)(v16 + 28) + v54 + 15) >> 4;
      }
      ERECTL::vOrder((ERECTL *)&v58);
    }
    else
    {
      if ( v18 )
      {
        v19 = ((*(int *)(*(_QWORD *)&v57[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v58.left += v19;
        v58.right += v19;
        v20 = ((*(int *)(*(_QWORD *)&v57[0].ulReserved + 28LL) >> 3) + 1) >> 1;
        v58.top += v20;
        v58.bottom += v20;
      }
      else
      {
        v54 = 0;
        bFToL((float)v58.left * **(float **)&v57[0].ulReserved, &v54, 0);
        v32 = ((v54 + *(_DWORD *)(v16 + 24)) >> 3) + 1;
        v54 = 0;
        v58.left = v32 >> 1;
        bFToL((float)v58.right * *(float *)v16, &v54, v33);
        v34 = ((v54 + *(_DWORD *)(v16 + 24)) >> 3) + 1;
        v54 = 0;
        v58.right = v34 >> 1;
        bFToL((float)v58.top * *(float *)(v16 + 12), &v54, 0);
        v35 = ((v54 + *(_DWORD *)(v16 + 28)) >> 3) + 1;
        v54 = 0;
        v58.top = v35 >> 1;
        bFToL((float)v58.bottom * *(float *)(v16 + 12), &v54, v36);
        v58.bottom = (((v54 + *(_DWORD *)(v16 + 28)) >> 3) + 1) >> 1;
      }
      ERECTL::vOrder((ERECTL *)&v58);
      --v58.right;
      --v58.bottom;
    }
    if ( !ERECTL::bWrapped((ERECTL *)&v58) )
    {
      v21 = GreRectBlt((struct DCOBJ *)v55, (struct ERECTL *)&v58);
LABEL_21:
      v10 = v21;
LABEL_22:
      v17 = v55[0];
    }
  }
LABEL_23:
  if ( v17 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v55);
  return v10;
}
