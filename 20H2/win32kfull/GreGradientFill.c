/*
 * XREFs of GreGradientFill @ 0x1C0097F44
 * Callers:
 *     NtGdiGradientFill @ 0x1C0097D10 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C014E78C (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C00982C4 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00984B8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C009D39C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C013A9FC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGradientFill(
        HDC a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v6; // esi
  __int64 v8; // r15
  struct _TRIVERTEX *v10; // rdi
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // r10
  struct _TRIVERTEX *v15; // rbx
  LONG x; // edx
  int v17; // eax
  LONG y; // r9d
  _DWORD *v19; // rcx
  unsigned int v20; // esi
  struct REGION *v21; // rax
  struct ECLIPOBJ *v22; // rdx
  __int64 v24; // r14
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 v29; // rax
  BOOL (__stdcall *v30)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  struct ECLIPOBJ *v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // rbx
  unsigned int v36; // eax
  struct _TRIVERTEX *v37; // rax
  unsigned int v38; // r9d
  unsigned int *v39; // r8
  __int64 v40; // rdx
  char *v41; // rcx
  unsigned int v42; // r10d
  unsigned int v43; // ecx
  unsigned int v44; // eax
  __int64 v45; // r11
  __int64 v46; // rbx
  __int64 v47; // rcx
  bool v48; // zf
  COLOR16 Alpha; // ax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r11d
  __int64 v53; // rax
  ULONG v54; // ecx
  unsigned int inited; // eax
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+68h] [rbp-98h]
  struct _RECTL v58; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v59[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v60; // [rsp+90h] [rbp-70h]
  __int64 v61[3]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v62[224]; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL si128; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v64[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v65[76]; // [rsp+1A4h] [rbp+A4h] BYREF
  __int64 v66; // [rsp+1F0h] [rbp+F0h]
  int v67; // [rsp+1F8h] [rbp+F8h]
  int v68; // [rsp+220h] [rbp+120h]
  __int64 v69; // [rsp+230h] [rbp+130h]

  v6 = a6;
  v8 = a3;
  v57 = a6;
  v10 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v59, a1);
  if ( v59[0] && (*(_DWORD *)(v59[0] + 36LL) & 0x10000) == 0 )
  {
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v62);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v62, (struct XDCOBJ *)v59, v11) )
    {
      v20 = XDCOBJ::bFullScreen((XDCOBJ *)v59);
LABEL_19:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v62);
      goto LABEL_20;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v61, (struct XDCOBJ *)v59, 0x204u);
    v12 = v61[0];
    if ( (*(_DWORD *)(v61[0] + 32) & 1) == 0 && a6 <= 1u )
    {
      v32 = 2LL * a5;
      if ( v32 > 0xFFFFFFFF
        || (v33 = 12LL * (unsigned int)v32, v33 > 0xFFFFFFFF)
        || (v13 = 2 * a5, v34 = v8 + 2 * a5, v60 = 2 * a5, v34 < 2 * a5)
        || (v35 = 16LL * v34, v35 > 0xFFFFFFFF)
        || (v36 = v35 + v33, (int)v35 + (int)v33 < (unsigned int)v33) )
      {
        v54 = 534;
      }
      else
      {
        if ( v36 <= 0x2710000 )
        {
          v37 = (struct _TRIVERTEX *)PALLOCMEM2(v36, 1886221383LL, 0);
          v10 = v37;
          if ( v37 )
          {
            v38 = 0;
            v39 = (unsigned int *)((char *)v37 + (unsigned int)v35);
            if ( (_DWORD)v8 )
            {
              v40 = v8;
              v41 = (char *)((char *)a2 - (char *)v37);
              v38 = v8;
              do
              {
                *v37 = *(struct _TRIVERTEX *)((char *)v37 + (_QWORD)v41);
                ++v37;
                --v40;
              }
              while ( v40 );
            }
            v42 = 0;
            if ( a5 )
            {
              while ( 1 )
              {
                v43 = *a4;
                v44 = a4[1];
                LODWORD(v56) = v43;
                v58.left = v44;
                if ( v43 >= (unsigned int)v8 || v44 >= (unsigned int)v8 )
                  break;
                v45 = v38;
                v46 = v43;
                v47 = v38 + 1;
                v48 = v57 == 1;
                v10[v45].x = a2[v44].x;
                v10[v45].y = a2[v46].y;
                v10[v47].x = a2[v46].x;
                v10[v47].y = a2[v44].y;
                if ( v48 )
                {
                  v10[v38].Red = a2[v46].Red;
                  v10[v38].Green = a2[v46].Green;
                  v10[v38].Blue = a2[v46].Blue;
                  v10[v38].Alpha = a2[v46].Alpha;
                  v10[v38 + 1].Red = a2[v44].Red;
                  v10[v38 + 1].Green = a2[v44].Green;
                  v10[v38 + 1].Blue = a2[v44].Blue;
                  Alpha = a2[v44].Alpha;
                }
                else
                {
                  v10[v38].Red = a2[v44].Red;
                  v10[v38].Green = a2[v44].Green;
                  v10[v38].Blue = a2[v44].Blue;
                  v10[v38].Alpha = a2[v44].Alpha;
                  v10[v38 + 1].Red = a2[v46].Red;
                  v10[v38 + 1].Green = a2[v46].Green;
                  v10[v38 + 1].Blue = a2[v46].Blue;
                  Alpha = a2[v46].Alpha;
                }
                v10[v38 + 1].Alpha = Alpha;
                v50 = 2 * v42;
                v51 = 3 * v50;
                v39[v51] = v56;
                v52 = v38 + 1;
                v39[v51 + 1] = v38;
                ++v42;
                v39[v51 + 2] = v38 + 1;
                LODWORD(v51) = v58.left;
                v53 = 3LL * (unsigned int)(v50 + 1);
                v39[v53 + 1] = v38;
                a4 += 2;
                v38 += 2;
                v39[v53] = v51;
                v39[v53 + 2] = v52;
                if ( v42 >= a5 )
                  goto LABEL_60;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v10);
              goto LABEL_65;
            }
LABEL_60:
            v12 = v61[0];
            v6 = 2;
            v57 = 2;
            a4 = v39;
            a2 = v10;
            LODWORD(v8) = v38;
            goto LABEL_6;
          }
        }
        v54 = 8;
      }
      EngSetLastError(v54);
LABEL_65:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v62);
      v20 = 0;
      goto LABEL_22;
    }
    v13 = a5;
    v60 = a5;
LABEL_6:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( (_DWORD)v8 )
    {
      v14 = (unsigned int)v8;
      v15 = a2;
      v56 = (unsigned int)v8;
      while ( 1 )
      {
        x = v15->x;
        v17 = *(_DWORD *)(v12 + 32) & 0x43;
        y = v15->y;
        v58.left = v15->x;
        v58.top = y;
        if ( (_BYTE)v17 != 67 )
        {
          bCvtPts1(v12, &v58);
          y = v58.top;
          x = v58.left;
          v14 = v56;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v59[0] + 976LL) + 108LL) & 1) != 0 )
          ++x;
        v19 = (_DWORD *)(v59[0] + 1024LL);
        if ( (*(_DWORD *)(v59[0] + 40LL) & 1) == 0 )
          v19 = (_DWORD *)(v59[0] + 1016LL);
        v15->x = x + *v19;
        v15->y = y + *(_DWORD *)(v59[0] + 8LL * (*(_DWORD *)(v59[0] + 40LL) & 1) + 1020);
        ++v15;
        v56 = --v14;
        if ( !v14 )
          break;
        v12 = v61[0];
      }
    }
    v20 = bCalcMeshExtent(a2, v8, a4, v13, v6, &si128);
    if ( v20 )
    {
      v21 = XDCOBJ::prgnEffRao((XDCOBJ *)v59);
      v66 = 0LL;
      v67 = 0;
      v69 = 0LL;
      v68 = 1;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v64, v21, (struct ERECTL *)&si128, 0);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v65) )
        goto LABEL_18;
      v24 = v59[0];
      if ( (*(_DWORD *)(v59[0] + 36LL) & 0xE0) != 0 )
      {
        v58 = si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v59, v22, (struct ERECTL *)&v58);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v59, v31, (struct ERECTL *)&v58);
        v24 = v59[0];
      }
      v25 = *(_QWORD *)(v24 + 496);
      if ( !v25 )
      {
LABEL_18:
        v20 = 1;
      }
      else
      {
        ++*(_DWORD *)(v25 + 92);
        v26 = *(_QWORD *)(v25 + 48);
        v56 = 0LL;
        if ( (*(_DWORD *)(v26 + 40) & 0x80u) != 0 || *(_DWORD *)(v25 + 96) <= 3u )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     &v56,
                     *(_QWORD *)(*(_QWORD *)(v59[0] + 976LL) + 248LL),
                     *(unsigned int *)(v59[0] + 120LL),
                     gppalRGB,
                     *(_QWORD *)(v25 + 128),
                     *(_QWORD *)(v59[0] + 88LL),
                     *(_QWORD *)(v59[0] + 88LL),
                     *(_DWORD *)(*(_QWORD *)(v59[0] + 976LL) + 184LL),
                     *(_DWORD *)(*(_QWORD *)(v59[0] + 976LL) + 176LL),
                     0,
                     0);
          v27 = v56;
          v20 = inited;
        }
        else
        {
          v27 = 0LL;
        }
        v28 = (__int64 *)(v59[0] + 1024LL);
        if ( (*(_DWORD *)(v59[0] + 40LL) & 1) == 0 )
          v28 = (__int64 *)(v59[0] + 1016LL);
        v29 = *v28;
        v58.left = -(int)v29;
        v58.top = -HIDWORD(v29);
        if ( *(_DWORD *)(v25 + 96) != 3 && (*(_DWORD *)(v25 + 112) & 0x20000) != 0 )
          v30 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v26 + 3232);
        else
          v30 = EngGradientFill;
        v20 = v20
           && ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, unsigned int *, unsigned int, struct _RECTL *, struct _RECTL *, int))v30)(
                v25 + 24,
                v64,
                v27,
                a2,
                v8,
                a4,
                v60,
                &si128,
                &v58,
                v57);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56);
      }
    }
    goto LABEL_19;
  }
  v20 = 0;
LABEL_20:
  if ( v10 )
    Win32FreePool(v10);
LABEL_22:
  if ( v59[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v59);
  return v20;
}
