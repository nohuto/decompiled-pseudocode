/*
 * XREFs of GreAngleArc @ 0x1C02A0460
 * Callers:
 *     NtGdiAngleArc @ 0x1C02AE960 (NtGdiAngleArc.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C012C6BC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137F1C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0138A90 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?lGetQuadrant@@YAJAEAVEPOINTFL@@@Z @ 0x1C02A03FC (-lGetQuadrant@@YAJAEAVEPOINTFL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z @ 0x1C02B0A14 (--0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02B0CB4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02B12B4 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02B1460 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02B15F8 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall GreAngleArc(HDC a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // r14d
  unsigned int v12; // ebx
  __m128 v13; // xmm6
  __m128i v14; // xmm7
  __m128i v15; // xmm8
  LONG top; // ecx
  unsigned int v17; // r13d
  char v18; // di
  int v19; // r12d
  BOOL IsZero; // ecx
  float v21; // esi
  float v22; // eax
  char v23; // r14
  int v24; // r14d
  int v25; // esi
  int v26; // edi
  int v27; // r15d
  _QWORD *Current; // rax
  __int64 v29; // r8
  ULONG v30; // ecx
  float v32; // [rsp+58h] [rbp-B0h] BYREF
  float v33; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v34; // [rsp+60h] [rbp-A8h] BYREF
  struct _RECTL v35; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+7Ch] [rbp-8Ch] BYREF
  POINTL *v38[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _XFORMOBJ v39; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v40[80]; // [rsp+A8h] [rbp-60h] BYREF
  PATHOBJ ppo; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v42; // [rsp+100h] [rbp-8h]
  _BYTE v43[32]; // [rsp+148h] [rbp+40h] BYREF
  int v44; // [rsp+168h] [rbp+60h]

  v32 = 0.0;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v9 = v38[0];
  if ( !v38[0] || (v38[0][4].y & 0x10000) != 0 )
  {
    v30 = 6;
    goto LABEL_41;
  }
  v10 = v38[0][122];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v38[0], *(_QWORD *)(*(_QWORD *)&v10 + 160LL));
    v9 = v38[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[122] + 168LL));
  v35.right = a2 + a4;
  v35.left = a2 - a4;
  v35.top = a3 - a4;
  v35.bottom = a4 + a3;
  if ( a4 < 0 || a2 - a4 > a2 || a2 + a4 < a2 || a3 - a4 > a3 || a4 + a3 < a3 )
  {
    v30 = 87;
LABEL_41:
    EngSetLastError(v30);
    v12 = 0;
    goto LABEL_42;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v39, (struct XDCOBJ *)v38, 516);
  v12 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v38, 1);
  if ( !v42 )
    goto LABEL_36;
  ERECTL::vOrder((ERECTL *)&v35);
  v13.m128_i32[0] = a5;
  v14 = (__m128i)a6;
  v15 = (__m128i)a5;
  v34 = a5;
  if ( *(float *)&a6 < 0.0 )
  {
    v13 = _mm_xor_ps((__m128)a5, (__m128)_xmm);
    top = v35.top;
    v15 = (__m128i)v13;
    v14 = (__m128i)_mm_xor_ps((__m128)a6, (__m128)_xmm);
    v34 = v13.m128_i32[0];
    v35.top = v35.bottom;
    v35.bottom = top;
  }
  EBOX::EBOX((EBOX *)v40, (struct EXFORMOBJ *)&v39, &v35);
  v17 = 2;
  bFToL(*(float *)v14.m128i_i32 * FP_1DIV90, (int *)&v32, 5u);
  v18 = LOBYTE(v32);
  *(float *)v14.m128i_i32 = *(float *)v14.m128i_i32 + v13.m128_f32[0];
  v19 = SLODWORD(v32) >> 2;
  if ( SLODWORD(v32) >> 2 > 8 )
    v19 = 8;
  v32 = *(float *)v14.m128i_i32;
  v33 = *(float *)v14.m128i_i32 - v13.m128_f32[0];
  IsZero = EFLOAT::bIsZero((EFLOAT *)&v33);
  if ( (float)((float)(*(float *)v14.m128i_i32 - v13.m128_f32[0]) - FP_3_0) >= 0.0 || IsZero )
  {
    vCosSin((unsigned int)_mm_cvtsi128_si32(v15), &v35, &v35.top);
    vCosSin((unsigned int)_mm_cvtsi128_si32(v14), &v36, &v37);
  }
  else
  {
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v15), &v35, &v35.top);
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v14), &v36, &v37);
  }
  LODWORD(v21) = lGetQuadrant((struct EPOINTFL *)&v35);
  v33 = v21;
  if ( v13.m128_f32[0] > FP_3600_0 || FP_M3600_0 > v13.m128_f32[0] )
  {
    vArctan((unsigned int)v35.left, (unsigned int)v35.top, &v34, &v33);
    v21 = v33;
    v15.m128i_i32[0] = v34;
  }
  LODWORD(v22) = lGetQuadrant((struct EPOINTFL *)&v36);
  v23 = LOBYTE(v22);
  v33 = v22;
  if ( *(float *)v14.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v14.m128i_i32 )
  {
    vArctan(v36, v37, &v32, &v33);
    v23 = LOBYTE(v33);
    v18 = (LOBYTE(v33) - LOBYTE(v21)) & 3;
    if ( ((LODWORD(v33) - LODWORD(v21)) & 3) == 0 && *(float *)v15.m128i_i32 > v32 )
      v18 = 3;
  }
  v24 = v23 & 3;
  v25 = LOBYTE(v21) & 3;
  v26 = v18 & 3;
  v27 = 0;
  if ( v19 > 0 )
  {
    while ( (unsigned int)bPartialArc(v17, &ppo, v40, &v35, v25, &v34, &v36, v24, &v32, v26)
         && (unsigned int)bPartialArc(0LL, &ppo, v40, &v36, v24, &v32, &v35, v25, &v34, 3 - v26) )
    {
      v17 = 0;
      if ( ++v27 >= v19 )
        goto LABEL_33;
    }
    goto LABEL_36;
  }
LABEL_33:
  if ( !(unsigned int)bPartialArc(v17, &ppo, v40, &v35, v25, &v34, &v36, v24, &v32, v26)
    || (*(_DWORD *)(*(_QWORD *)&v38[0][122] + 152LL) |= 0x100u,
        *(_DWORD *)(*(_QWORD *)&v38[0][122] + 152LL) &= ~0x200u,
        Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v35),
        *(_QWORD *)(v29 + 8) = *Current,
        (v38[0][31].x & 1) == 0)
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v38, (LINEATTRS *)&v38[0][26], &v39, 1u) )
  {
LABEL_36:
    v12 = 0;
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v44 )
  {
    PopThreadGuardedObject(v43);
    v44 = 0;
  }
LABEL_42:
  if ( v38[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v38);
  return v12;
}
