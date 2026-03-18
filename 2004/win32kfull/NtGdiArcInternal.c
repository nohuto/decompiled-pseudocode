/*
 * XREFs of NtGdiArcInternal @ 0x1C02B1790
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C012C6BC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C012C6DC (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0135B44 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137F1C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0138A90 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02B0CB4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02B12B4 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02B1460 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02B15F8 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall NtGdiArcInternal(
        int a1,
        HDC a2,
        LONG a3,
        LONG a4,
        LONG a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  POINTL *v11; // rcx
  POINTL v12; // rdx
  int v13; // ebx
  unsigned int v14; // ebx
  float v15; // xmm8_4
  float v16; // eax
  int v17; // ecx
  int v18; // r9d
  int v19; // r10d
  int v20; // r11d
  int v21; // esi
  int v22; // r14d
  float v23; // xmm9_4
  float v24; // xmm6_4
  int v25; // r9d
  int v26; // r10d
  float v27; // xmm7_4
  __m128i v28; // xmm6
  __m128i v29; // xmm7
  float v30; // xmm2_4
  BOOL IsZero; // ecx
  BOOL v32; // eax
  _QWORD *Current; // rax
  __int64 v34; // r8
  unsigned int v35; // eax
  ULONG v36; // ecx
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  float v39; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h] BYREF
  POINTL *v42[2]; // [rsp+70h] [rbp-98h] BYREF
  int v43; // [rsp+80h] [rbp-88h] BYREF
  struct _XFORMOBJ v44; // [rsp+88h] [rbp-80h] BYREF
  struct _RECTL v45; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v46[10]; // [rsp+A8h] [rbp-60h] BYREF
  struct _POINTL v47; // [rsp+D0h] [rbp-38h] BYREF
  int v48; // [rsp+E8h] [rbp-20h]
  int v49; // [rsp+ECh] [rbp-1Ch]
  int v50; // [rsp+F0h] [rbp-18h]
  int v51; // [rsp+F4h] [rbp-14h]
  PATHOBJ ppo; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v53; // [rsp+100h] [rbp-8h]
  _BYTE v54[32]; // [rsp+148h] [rbp+40h] BYREF
  int v55; // [rsp+168h] [rbp+60h]

  v45.right = a5;
  v45.bottom = a6;
  v45.left = a3;
  v45.top = a4;
  DCOBJ::DCOBJ((DCOBJ *)v42, a2);
  v11 = v42[0];
  if ( !v42[0] || (v42[0][4].y & 0x10000) != 0 )
  {
    v36 = 6;
    goto LABEL_44;
  }
  if ( (unsigned int)a1 > 3 )
  {
    v36 = 87;
LABEL_44:
    EngSetLastError(v36);
    v14 = 0;
    goto LABEL_45;
  }
  v12 = v42[0][122];
  v13 = *(_DWORD *)(*(_QWORD *)&v12 + 152LL);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v42[0], *(_QWORD *)(*(_QWORD *)&v12 + 160LL));
    v11 = v42[0];
  }
  if ( (v13 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[122] + 168LL));
  v14 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v42, a1 == 1);
  if ( !v53 )
  {
    EngSetLastError(8u);
LABEL_10:
    v14 = 0;
    goto LABEL_11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v44, (struct XDCOBJ *)v42, 516);
  EBOX::EBOX((EBOX *)v46, (struct DCOBJ *)v42, &v45, (struct _LINEATTRS *)&v42[0][26], 1);
  if ( v46[1] )
    goto LABEL_10;
  if ( !v46[0] )
  {
    LODWORD(v15) = efHalfDiff(v49, -v51);
    LODWORD(v16) = efHalfDiff(v48, -v50);
    v21 = 0;
    v41 = 0LL;
    v22 = 0;
    v43 = 0;
    v23 = v16;
    v39 = 0.0;
    if ( v17 == v20 || v19 == v18 )
    {
      v28 = (__m128i)FP_0_0;
      HIDWORD(v41) = FP_0_0;
      v29 = (__m128i)FP_0_0;
      LODWORD(v41) = FP_0_0;
    }
    else
    {
      v24 = COERCE_FLOAT(efHalfDiff(v20, v17));
      v27 = COERCE_FLOAT(efHalfDiff(v26, v25));
      vArctan(
        COERCE_INT((float)((float)a7 - v23) / v24),
        COERCE_INT((float)((float)a8 - v15) / v27),
        (float *)&v41 + 1,
        &v43);
      *((float *)&v38 + 1) = (float)((float)a10 - v15) / v27;
      *(float *)&v38 = (float)((float)a9 - v23) / v24;
      vArctan(v38, SHIDWORD(v38), (float *)&v41, (int *)&v39);
      v28 = (__m128i)HIDWORD(v41);
      v29 = (__m128i)(unsigned int)v41;
      v21 = v43;
      v22 = LODWORD(v39);
    }
    v30 = *(float *)v29.m128i_i32 - *(float *)v28.m128i_i32;
    v39 = *(float *)v29.m128i_i32 - *(float *)v28.m128i_i32;
    if ( (float)(*(float *)v29.m128i_i32 - *(float *)v28.m128i_i32) < 0.0 )
    {
      LODWORD(v30) ^= _xmm;
      v39 = v30;
    }
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v39);
    if ( (float)(v30 - FP_3_0) >= 0.0 || IsZero )
    {
      vCosSin(_mm_cvtsi128_si32(v28), &v39, (float *)&v40);
      vCosSin(_mm_cvtsi128_si32(v29), (float *)&v38, (float *)&v38 + 1);
    }
    else
    {
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v28), (__int64)&v39, (__int64)&v40);
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v29), (__int64)&v38, (__int64)&v38 + 4);
    }
    v32 = v21 != v22 || *(float *)v29.m128i_i32 <= *(float *)v28.m128i_i32;
    if ( !(unsigned int)bPartialArc(
                          (unsigned int)(a1 == 1) + 1,
                          (EPATHOBJ *)&ppo,
                          (__int64)v46,
                          (__int64)&v39,
                          v21,
                          (__int64)&v41 + 4,
                          (__int64)&v38,
                          v22,
                          (__int64)&v41,
                          v32) )
      goto LABEL_10;
    if ( a1 == 1 )
    {
      *(_DWORD *)(*(_QWORD *)&v42[0][122] + 152LL) |= 0x100u;
      *(_DWORD *)(*(_QWORD *)&v42[0][122] + 152LL) &= ~0x200u;
      Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v38);
      *(_QWORD *)(v34 + 8) = *Current;
    }
    else
    {
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
          goto LABEL_37;
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, 0LL, &v47, 1u) )
          goto LABEL_10;
      }
      if ( !EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo) )
        goto LABEL_10;
    }
LABEL_37:
    if ( (v42[0][31].x & 1) == 0 )
    {
      if ( a1 <= 1 )
        v35 = EPATHOBJ::bStrokeAndOrFill(&ppo, v42, (LINEATTRS *)&v42[0][26], &v44, 1u);
      else
        v35 = EPATHOBJ::bStrokeAndOrFill(&ppo, v42, (LINEATTRS *)&v42[0][26], &v44, 3u);
      v14 = v35;
    }
  }
LABEL_11:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v55 )
  {
    PopThreadGuardedObject(v54);
    v55 = 0;
  }
LABEL_45:
  if ( v42[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v42);
  return v14;
}
