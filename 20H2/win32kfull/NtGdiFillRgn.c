/*
 * XREFs of NtGdiFillRgn @ 0x1C013B480
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0137670 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0068488 (-bTightenRao@DC@@QEAAHXZ.c)
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
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C013B940 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C013C058 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C013C7F0 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C013C89C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C013C8F4 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013C970 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v5; // esi
  REGION *v6; // r13
  int v7; // r12d
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // r15
  char *v11; // rcx
  struct REGION *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  struct ECLIPOBJ *v15; // rdx
  struct BRUSH *v16; // r14
  MIX mix; // eax
  DC *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  DC *v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  REGION *v27[3]; // [rsp+58h] [rbp-A8h] BYREF
  struct BRUSH *v28[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  DC **v32; // [rsp+A8h] [rbp-58h]
  _QWORD v33[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v34; // [rsp+C0h] [rbp-40h]
  __m128i rclBounds; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+120h] [rbp+20h] BYREF
  int v37; // [rsp+13Ch] [rbp+3Ch]
  __int64 v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]
  char *v40; // [rsp+158h] [rbp+58h]
  __int64 v41; // [rsp+178h] [rbp+78h]
  __int128 v42; // [rsp+180h] [rbp+80h]
  int v43; // [rsp+198h] [rbp+98h]
  struct _RECTL v44; // [rsp+1B0h] [rbp+B0h] BYREF
  CLIPOBJ pco; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v46; // [rsp+210h] [rbp+110h]
  int v47; // [rsp+218h] [rbp+118h]
  int v48; // [rsp+240h] [rbp+140h]
  __int64 v49; // [rsp+250h] [rbp+150h]

  v26 = 0;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v6 = 0LL;
  if ( !v25[0] || (*((_DWORD *)v25[0] + 9) & 0x10000) != 0 )
    goto LABEL_39;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v29, (struct XDCOBJ *)v25, -2147483132);
  v7 = *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 340LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v27, a2, 0);
  if ( v27[0] )
  {
    if ( v7 == 2050 )
      goto LABEL_12;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v30);
    if ( v31 )
    {
      if ( v29[0] && RGNOBJ::bCreate((RGNOBJ *)v27, (struct EPATHOBJ *)v30, (struct EXFORMOBJ *)v29) )
      {
        v44.right = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v44, (struct EPATHOBJ *)v30, 1u, 0LL);
        if ( *(_QWORD *)&v44.left )
        {
          v6 = v27[0];
          v27[0] = *(REGION **)&v44.left;
          if ( v44.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v30);
LABEL_12:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v27) == 1 )
            goto LABEL_42;
          v44 = (struct _RECTL)*((_OWORD *)v27[0] + 6);
          if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)v25, (struct ERECTL *)&v44);
          v32 = v25;
          if ( !ERECTL::bEmpty((ERECTL *)&v44) )
            v26 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v30, &v44);
          if ( !*((_QWORD *)v25[0] + 62) )
          {
LABEL_42:
            v5 = 1;
LABEL_35:
            if ( v7 != 2050 )
            {
              REGION::vDeleteREGION(v27[0]);
              v27[0] = v6;
            }
            goto LABEL_37;
          }
          v33[0] = 0LL;
          v33[1] = 0LL;
          v34 = 256;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v30, (struct XDCOBJ *)v25, 0);
          v8 = v27[0];
          v9 = v25[0];
          if ( !v27[0] )
            *((_DWORD *)v25[0] + 9) |= 0x10u;
          *((_QWORD *)v9 + 139) = v8;
          v10 = *((_QWORD *)v25[0] + 62);
          if ( ((unsigned __int8)v32 & 1) != 0 && (unsigned int)DC::bTightenRao(v25[0]) )
          {
            v11 = (char *)v25[0] + 1024;
            if ( (*((_DWORD *)v25[0] + 10) & 1) == 0 )
              v11 = (char *)v25[0] + 1016;
            v44.left += *(_DWORD *)v11;
            v44.right += *(_DWORD *)v11;
            v44.top += *((_DWORD *)v11 + 1);
            v44.bottom += *((_DWORD *)v11 + 1);
            GreScaleValuesInternal((struct XDCOBJ *)v25, &v44.left, 4u);
            v12 = XDCOBJ::prgnEffRao(v25);
            v46 = 0LL;
            v47 = 0;
            v48 = 1;
            v49 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)&v44, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
            {
              v13 = *(_QWORD *)(v10 + 128);
              v14 = *((_QWORD *)v25[0] + 11);
              v37 = -1;
              v41 = 0LL;
              v42 = 0LL;
              pbo.pvRbrush = 0LL;
              pbo.flColorType = 0;
              v38 = 0LL;
              v39 = 0LL;
              v43 = 0;
              BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v28, a3);
              v16 = 0LL;
              if ( v28[0] )
                v16 = v28[0];
              if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
              {
                if ( !v16 )
                {
LABEL_32:
                  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v28);
                  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
                  v18 = v25[0];
                  goto LABEL_33;
                }
                if ( (*((_DWORD *)v16 + 10) & 0x100) == 0 )
                {
                  rclBounds = (__m128i)pco.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v25, v15, &rclBounds);
                }
              }
              if ( v16 )
              {
                bSyncBrushObj(v16);
                EBRUSHOBJ::vInitBrush(&pbo, v25[0], v16, v14, v13, v10, 1);
                v40 = (char *)v25[0] + 176;
                if ( (*((_DWORD *)v16 + 10) & 0x100) == 0 )
                {
                  mix = EBRUSHOBJ::mixBest(
                          (EBRUSHOBJ *)&pbo,
                          *(_BYTE *)(*((_QWORD *)v25[0] + 122) + 212LL),
                          *(_BYTE *)(*((_QWORD *)v25[0] + 122) + 213LL));
                  ++*(_DWORD *)(v10 + 92);
                  EngPaint((SURFOBJ *)(v10 + 24), &pco, &pbo, (POINTL *)v25[0] + 147, mix);
                  v5 = 1;
                }
                BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v28);
              }
              goto LABEL_32;
            }
            v18 = v25[0];
            v5 = 1;
          }
          else
          {
            v5 = XDCOBJ::bFullScreen((XDCOBJ *)v25);
          }
LABEL_33:
          *((_DWORD *)v18 + 9) |= 0x10u;
          *((_QWORD *)v18 + 139) = 0LL;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v30);
          if ( v33[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v33);
          goto LABEL_35;
        }
        EngSetLastError(8u);
        if ( v44.right == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v30);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
    goto LABEL_39;
  }
LABEL_37:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
  if ( v26 )
  {
    v24 = UserReferenceDwmApiPort(v20, v19, v21, v22);
    DwmSyncFlushAndWaitForBatch(v24);
  }
LABEL_39:
  if ( v25[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v25);
  return v5;
}
