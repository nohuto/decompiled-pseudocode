/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00E1878
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00E1BD0 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00DE240 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00E21D4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, __int64 a6)
{
  int v6; // r13d
  __int64 v9; // r11
  unsigned int v10; // edi
  float v11; // xmm6_4
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int16 *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int16 *v17; // r9
  __int64 v18; // rcx
  struct _GLYPHPOS *v19; // r12
  struct _GLYPHPOS *v20; // r8
  float *v21; // r9
  GLYPHDEF *pgdf; // rdx
  struct _GLYPHPOS *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int16 v30[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  struct _GLYPHPOS *v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  struct _GLYPHPOS v37[32]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v38[32]; // [rsp+378h] [rbp+270h] BYREF

  v6 = a2;
  *(_DWORD *)v30 = a2;
  v33 = a6;
  v35 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v36, a1);
  if ( v36 )
  {
    if ( a3 )
    {
      v31 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v31, (struct XDCOBJ *)&v36, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v31 + 504));
      v9 = v31;
      if ( v31 )
      {
        v10 = 1;
        if ( (*(_DWORD *)(v31 + 84) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v31, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v31, v30, 1u);
            v6 = *(_DWORD *)v30;
          }
        }
        v11 = *(float *)(v9 + 680);
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)(v9 + 96) + 3080LL) )
        {
          while ( 1 )
          {
            v12 = a3;
            v32 = v37;
            if ( a3 > 0x20 )
              v12 = 32LL;
            LODWORD(v34) = v12;
            v13 = v12;
            if ( a4 )
            {
              v17 = a4;
              a4 = (unsigned __int16 *)((char *)a4 + v13 * 2);
            }
            else
            {
              v14 = 0LL;
              v15 = v38;
              v16 = (unsigned int)v12;
              if ( v38 > &v38[v13] )
                v16 = 0LL;
              if ( v16 )
              {
                do
                {
                  *v15 = v6;
                  ++v14;
                  ++v6;
                  ++v15;
                }
                while ( v14 < v16 );
              }
              v17 = v38;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v31,
                                  (struct RFONTOBJ *)(unsigned int)v12,
                                  v37,
                                  v17,
                                  (struct XDCOBJ *)&v36,
                                  0LL) )
              break;
            v19 = &v37[v12];
            if ( (a5 & 1) != 0 )
            {
              if ( v37 < v19 )
              {
                v24 = v32;
                v12 = v33;
                do
                {
                  LODWORD(v32) = 0;
                  bFToL(v18, &v32, 0LL);
                  *(_DWORD *)v30 &= v25;
                  bFToL(v26, v30, v25);
                  LODWORD(v33) = v27 & v33;
                  bFToL(v28, &v33, v27);
                  ++v24;
                  v29 = *(_DWORD *)v30 - (_DWORD)v32;
                  *(_DWORD *)v12 = (_DWORD)v32;
                  *(_DWORD *)(v12 + 4) = v29;
                  *(_DWORD *)(v12 + 8) = v33 - *(_DWORD *)v30;
                  v12 += 12LL;
                }
                while ( v24 < v19 );
                v33 = v12;
                v10 = 1;
                LODWORD(v12) = v34;
              }
            }
            else if ( v37 < v19 )
            {
              v20 = v32;
              v21 = (float *)v35;
              do
              {
                pgdf = v20->pgdf;
                ++v20;
                *v21 = (float)SLODWORD(pgdf[2].pgb) * v11;
                v21[1] = (float)(HIDWORD(pgdf[2].ppo) - LODWORD(pgdf[2].pgb)) * v11;
                v21[2] = (float)(HIDWORD(pgdf[1].ppo) - HIDWORD(pgdf[2].ppo)) * v11;
                v21 += 3;
              }
              while ( v20 < v19 );
              v35 = (__int64)v21;
            }
            a3 -= v12;
            if ( !a3 )
              goto LABEL_25;
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      v10 = 0;
LABEL_25:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
    }
    else
    {
      v10 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
    v10 = 0;
  }
  if ( v36 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v36);
  return v10;
}
