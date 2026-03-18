/*
 * XREFs of GreGetCharWidthW @ 0x1C00E1D38
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C00E2010 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00DE240 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C00DEE0C (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00E21D4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r15
  unsigned int v7; // edi
  __int64 v10; // r11
  unsigned int v11; // ebx
  float v12; // xmm6_4
  int v13; // r13d
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // r8d
  __int64 v17; // r12
  __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned __int16 *v20; // r9
  GLYPHDEF **p_pgdf; // r8
  __int64 v22; // r11
  __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  _WORD *v30; // rcx
  GLYPHDEF **v31; // rcx
  __int64 v32; // rdx
  GLYPHDEF *v33; // rax
  unsigned __int16 v34[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-C0h]
  unsigned int v37; // [rsp+4Ch] [rbp-BCh]
  __int64 v38; // [rsp+50h] [rbp-B8h]
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  struct _GLYPHPOS v40; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v41[64]; // [rsp+368h] [rbp+260h] BYREF

  v6 = a6;
  v7 = a2;
  v36 = a2;
  *(_DWORD *)v34 = a2;
  v37 = a3;
  DCOBJ::DCOBJ((DCOBJ *)&v39, a1);
  if ( !v39 )
  {
    EngSetLastError(6u);
    goto LABEL_42;
  }
  if ( !a6 )
  {
LABEL_42:
    v11 = 0;
    goto LABEL_30;
  }
  v35 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v35, (struct XDCOBJ *)&v39, 0, (a5 & 8) != 0 ? 4 : 2) )
    GreAcquireSemaphore(*(_QWORD *)(v35 + 504));
  v10 = v35;
  if ( v35 )
  {
    v11 = 1;
    if ( (*(_DWORD *)(v35 + 84) & 4) != 0 )
    {
      if ( a4 )
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v35, a4, a3);
      }
      else
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v35, v34, 1u);
        v7 = *(_DWORD *)v34;
        v36 = *(_DWORD *)v34;
      }
    }
    v12 = *(float *)(v10 + 680);
    v13 = 0;
    if ( (a5 & 1) != 0 )
      v13 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v35);
    v14 = v37;
    v15 = 0;
    if ( !a4 )
      v15 = v7;
    v16 = v37 - 1;
    *(_DWORD *)v34 = v37 - 1;
    v17 = (unsigned __int64)a4 & -(__int64)(a4 != 0LL);
    while ( 1 )
    {
      if ( a4 )
      {
        v18 = (v17 - (__int64)a4) >> 1;
        if ( (unsigned int)v18 > v16 )
          goto LABEL_29;
        v19 = 32;
        v20 = (unsigned __int16 *)v17;
        if ( v14 - (unsigned int)v18 < 0x20 )
          v19 = v14 - v18;
      }
      else
      {
        if ( v15 - v7 > v16 )
          goto LABEL_29;
        v28 = v15;
        v29 = v7 + v14 - v15;
        v19 = 32;
        if ( v29 < 0x20 )
          v19 = v29;
        v30 = v41;
        if ( v15 < v19 + v15 )
        {
          do
            *v30++ = v28++;
          while ( v28 < v19 + v15 );
        }
        v20 = (unsigned __int16 *)v41;
      }
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                            (RFONTOBJ *)&v35,
                            (struct RFONTOBJ *)v19,
                            &v40,
                            v20,
                            (struct XDCOBJ *)&v39,
                            0LL) )
        goto LABEL_44;
      if ( (int)v19 > 0 )
      {
        if ( (a5 & 2) != 0 )
        {
          p_pgdf = &v40.pgdf;
          v22 = v19;
          do
          {
            LODWORD(v23) = 0;
            *(float *)&v38 = (float)(v13 + HIDWORD((*p_pgdf)[1].ppo)) * v12;
            v24 = (unsigned __int8)((int)v38 >> 23);
            if ( v24 <= 0x9E )
            {
              v25 = v38 & 0x7FFFFF | 0x800000;
              v26 = v24 < 0x76 ? v25 >> (118 - (unsigned __int8)v24) : v25 << ((unsigned __int8)v24 - 118);
              v23 = (v26 + 0x80000000LL) >> 32;
              if ( (int)v38 < 0 )
                LODWORD(v23) = -(int)v23;
            }
            *(_DWORD *)v6 = v23;
            p_pgdf += 3;
            ++v6;
            --v22;
          }
          while ( v22 );
        }
        else
        {
          v31 = &v40.pgdf;
          v32 = v19;
          do
          {
            v33 = *v31;
            v31 += 3;
            *v6++ = (float)((float)SHIDWORD(v33[1].ppo) * 0.0625) * v12;
            --v32;
          }
          while ( v32 );
        }
      }
      if ( a4 )
        v17 += 2LL * (unsigned __int16)v19;
      else
        v15 += v19;
      v7 = v36;
      v14 = v37;
      v16 = *(_DWORD *)v34;
    }
  }
  EngSetLastError(6u);
LABEL_44:
  v11 = 0;
LABEL_29:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
LABEL_30:
  if ( v39 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v39);
  return v11;
}
