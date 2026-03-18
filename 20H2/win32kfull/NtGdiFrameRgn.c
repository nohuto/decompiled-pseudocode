/*
 * XREFs of NtGdiFrameRgn @ 0x1C01336A0
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0137670 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0068488 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C007C200 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C007C280 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C009EEA8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0133F74 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0135A88 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0136710 (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C013B940 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C013C058 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C013C7F0 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C013C89C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C013C8F4 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013C970 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // ebx
  int v11; // edi
  EPATHOBJ *v12; // rcx
  struct _RECTL v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // rcx
  DC *v16; // rax
  DC *v17; // rax
  __int64 v18; // r15
  char *v19; // rcx
  struct REGION *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  struct ECLIPOBJ *v23; // rdx
  struct BRUSH *v24; // r14
  DC *v25; // rax
  DC *v26; // rcx
  MIX mix; // eax
  DC *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  DC *v34; // rax
  __int64 v35; // rax
  DC *v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  _XFORMOBJ v40[2]; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+7Ch] [rbp-84h]
  struct BRUSH *v42[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v43[4]; // [rsp+90h] [rbp-70h] BYREF
  _LINEATTRS v44; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int16 v46; // [rsp+E0h] [rbp-20h]
  _BYTE v47[16]; // [rsp+100h] [rbp+0h] BYREF
  __m128i rclBounds; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+120h] [rbp+20h] BYREF
  int v50; // [rsp+13Ch] [rbp+3Ch]
  __int64 v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  char *v53; // [rsp+158h] [rbp+58h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  __int128 v55; // [rsp+180h] [rbp+80h]
  int v56; // [rsp+198h] [rbp+98h]
  _BYTE v57[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  _BYTE v59[8]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v60; // [rsp+238h] [rbp+138h]
  struct _RECTL v61; // [rsp+2B0h] [rbp+1B0h] BYREF
  _OWORD v62[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v63; // [rsp+2E0h] [rbp+1E0h]
  CLIPOBJ pco; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v65; // [rsp+340h] [rbp+240h]
  int v66; // [rsp+348h] [rbp+248h]
  int v67; // [rsp+370h] [rbp+270h]
  __int64 v68; // [rsp+380h] [rbp+280h]

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v43, a2, 1);
  v10 = abs32(a4);
  v11 = abs32(a5);
  if ( !v36[0] || (*((_DWORD *)v36[0] + 9) & 0x10000) != 0 || !v43[0] || v10 <= 0 || v11 <= 0 )
    goto LABEL_41;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v43) == 1 )
  {
    v8 = 1;
    goto LABEL_41;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v57);
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v59);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v36, -2147483132);
  if ( v58 )
  {
    if ( v60 )
    {
      if ( RGNOBJ::bCreate((RGNOBJ *)v43, (struct EPATHOBJ *)v57, (struct EXFORMOBJ *)v47) )
      {
        v41 = 0;
        v63 = 0;
        *(_QWORD *)&v40[0].ulReserved = v62;
        memset(&v44, 0, sizeof(v44));
        memset(v62, 0, sizeof(v62));
        EPATHOBJ::vWidenSetupForFrameRgn(v12, (struct XDCOBJ *)v36, v10, v11, (struct EXFORMOBJ *)v40, &v44);
        if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v59, (struct EPATHOBJ *)v57, v40, &v44) )
        {
          if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v59, (struct EPATHOBJ *)v57, v40, &v44) )
          {
            v39 = 0;
            RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v38, (struct EPATHOBJ *)v59, 2u, 0LL);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v37);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v37);
            if ( !v38 || !v37[0] )
              goto LABEL_38;
            if ( (*(_DWORD *)(*((_QWORD *)v36[0] + 122) + 340LL) & 0x802) == 0x802 )
            {
              v8 = RGNOBJ::bMerge((RGNOBJ *)v37, (struct RGNOBJ *)&v38, (struct RGNOBJ *)v43, 8u);
            }
            else
            {
              v61.right = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v61, (struct EPATHOBJ *)v57, 1u, 0LL);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v61);
              if ( *(_QWORD *)&v61.left )
                v8 = RGNOBJ::bMerge((RGNOBJ *)v37, (struct RGNOBJ *)&v38, (struct RGNOBJ *)&v61, 8u) != 0;
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v61);
            }
            if ( !v8 )
              goto LABEL_38;
            v13 = *(struct _RECTL *)(v37[0] + 96LL);
            v44.pstyle = (PFLOAT_LONG)v36;
            v61 = v13;
            if ( !ERECTL::bEmpty((ERECTL *)&v61) )
              v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v44, &v61);
            if ( (*((_DWORD *)v36[0] + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)&v61);
            if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v36) || !*(_QWORD *)(v14 + 496) )
              goto LABEL_38;
            *(_QWORD *)&v44.elStyleState.e = 0LL;
            v45 = 0LL;
            v46 = 256;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v44, (struct XDCOBJ *)v36, 0);
            v15 = v37[0];
            v16 = v36[0];
            if ( !v37[0] )
              *((_DWORD *)v36[0] + 9) |= 0x10u;
            *((_QWORD *)v16 + 139) = v15;
            v17 = v36[0];
            v18 = *((_QWORD *)v36[0] + 62);
            if ( ((__int64)v44.pstyle & 1) != 0 )
            {
              if ( (unsigned int)DC::bTightenRao(v36[0]) )
              {
                v19 = (char *)v36[0] + 1024;
                if ( (*((_DWORD *)v36[0] + 10) & 1) == 0 )
                  v19 = (char *)v36[0] + 1016;
                v61.left += *(_DWORD *)v19;
                v61.right += *(_DWORD *)v19;
                v61.top += *((_DWORD *)v19 + 1);
                v61.bottom += *((_DWORD *)v19 + 1);
                GreScaleValuesInternal((struct XDCOBJ *)v36, &v61.left, 4u);
                v20 = XDCOBJ::prgnEffRao(v36);
                v65 = 0LL;
                v66 = 0;
                v67 = 1;
                v68 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v20, (struct ERECTL *)&v61, 0);
                if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
                {
                  v34 = v36[0];
                  *((_DWORD *)v36[0] + 9) |= 0x10u;
                  *((_QWORD *)v34 + 139) = 0LL;
                }
                else
                {
                  v21 = *(_QWORD *)(v18 + 128);
                  v22 = *((_QWORD *)v36[0] + 11);
                  v50 = -1;
                  v54 = 0LL;
                  v55 = 0LL;
                  pbo.pvRbrush = 0LL;
                  pbo.flColorType = 0;
                  v51 = 0LL;
                  v52 = 0LL;
                  v56 = 0;
                  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v42, a3);
                  v24 = v42[0];
                  v8 = 0;
                  v25 = v36[0];
                  if ( v42[0] )
                  {
                    if ( (*((_DWORD *)v36[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v42[0] + 10) & 0x100) == 0 )
                    {
                      rclBounds = (__m128i)pco.rclBounds;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)v36, v23, &rclBounds);
                    }
                    bSyncBrushObj(v24);
                    EBRUSHOBJ::vInitBrush(&pbo, v36[0], v24, v22, v21, v18, 1);
                    v26 = v36[0];
                    v53 = (char *)v36[0] + 176;
                    if ( (*((_DWORD *)v24 + 10) & 0x100) != 0 )
                    {
                      *((_DWORD *)v36[0] + 9) |= 0x10u;
                      *((_QWORD *)v26 + 139) = 0LL;
                    }
                    else
                    {
                      mix = EBRUSHOBJ::mixBest(
                              (EBRUSHOBJ *)&pbo,
                              *(_BYTE *)(*((_QWORD *)v36[0] + 122) + 212LL),
                              *(_BYTE *)(*((_QWORD *)v36[0] + 122) + 213LL));
                      ++*(_DWORD *)(v18 + 92);
                      EngPaint((SURFOBJ *)(v18 + 24), &pco, &pbo, (POINTL *)v36[0] + 147, mix);
                      v28 = v36[0];
                      v8 = 1;
                      *((_DWORD *)v36[0] + 9) |= 0x10u;
                      *((_QWORD *)v28 + 139) = 0LL;
                    }
                    BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v42);
                  }
                  else
                  {
                    *((_DWORD *)v36[0] + 9) |= 0x10u;
                    *((_QWORD *)v25 + 139) = 0LL;
                  }
                  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v42);
                  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
                }
                goto LABEL_36;
              }
              v17 = v36[0];
            }
            *((_DWORD *)v17 + 9) |= 0x10u;
            *((_QWORD *)v17 + 139) = 0LL;
            v8 = XDCOBJ::bFullScreen((XDCOBJ *)v36);
LABEL_36:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v44);
            if ( *(_QWORD *)&v44.elStyleState.e )
              DLODCOBJ::vUnlock((DLODCOBJ *)&v44.elStyleState);
LABEL_38:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v37);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
          }
        }
      }
    }
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v59);
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v57);
  if ( v9 )
  {
    v35 = UserReferenceDwmApiPort(v30, v29, v31, v32);
    DwmSyncFlushAndWaitForBatch(v35);
  }
LABEL_41:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v43);
  if ( v36[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v36);
  return v8;
}
