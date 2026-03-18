/*
 * XREFs of GreDrawStream @ 0x1C00A2D50
 * Callers:
 *     NtGdiDrawStream @ 0x1C009F200 (NtGdiDrawStream.c)
 * Callees:
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0069D0C (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C009F2E0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C00A2D2C (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C015D1C0 (-ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z.c)
 */

__int64 __fastcall GreDrawStream(HDC a1, unsigned int a2, _DWORD *a3)
{
  SURFACE *v3; // r14
  __int64 v4; // rdi
  SURFACE *v5; // r9
  struct SURFACE *v6; // r11
  struct PALETTE *v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r13
  char *v11; // rsi
  int v12; // ebx
  bool v13; // zf
  _DWORD *v14; // rdi
  unsigned int v15; // r10d
  unsigned int v16; // esi
  int v17; // ebx
  int v18; // r9d
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // r11d
  int v25; // ecx
  int v26; // r10d
  int v27; // r9d
  int v28; // eax
  LONG *v29; // rdx
  char *v30; // rcx
  __int64 v31; // rdx
  HDC v32; // rdx
  int v33; // ebx
  unsigned __int64 v34; // rcx
  int v35; // r8d
  LONG left; // edx
  LONG top; // r10d
  LONG right; // eax
  LONG bottom; // r9d
  __int64 v40; // rsi
  __int64 v41; // rbx
  struct PALETTE *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 cEntries; // rcx
  __int16 v47; // cx
  unsigned int v49; // [rsp+64h] [rbp-9Ch]
  int v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  char *v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  SURFACE *v55; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v56[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v57; // [rsp+A8h] [rbp-58h]
  SURFACE *v58; // [rsp+B0h] [rbp-50h]
  int v59; // [rsp+B8h] [rbp-48h]
  struct SURFACE *v60; // [rsp+C0h] [rbp-40h]
  struct _XLATEOBJ *v61; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-30h] BYREF
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
  struct PALETTE *v65; // [rsp+E0h] [rbp-20h]
  struct _XLATEOBJ *v66; // [rsp+E8h] [rbp-18h]
  _QWORD v67[2]; // [rsp+F0h] [rbp-10h] BYREF
  HDC v68; // [rsp+100h] [rbp+0h]
  struct PALETTE *v69; // [rsp+108h] [rbp+8h]
  __int128 v70; // [rsp+110h] [rbp+10h] BYREF
  __int64 v71; // [rsp+120h] [rbp+20h]
  int v72; // [rsp+128h] [rbp+28h]
  _QWORD v73[2]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  __int64 v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  __int128 v78; // [rsp+160h] [rbp+60h] BYREF
  __int128 v79; // [rsp+170h] [rbp+70h]
  __int128 v80; // [rsp+180h] [rbp+80h]
  __int128 v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+1A0h] [rbp+A0h]
  struct _RECTL v83; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _RECTL v84; // [rsp+1C0h] [rbp+C0h] BYREF

  v68 = a1;
  v74 = 256;
  v56[0] = 0LL;
  v3 = 0LL;
  v56[1] = 0LL;
  LODWORD(v4) = 0;
  v5 = 0LL;
  v69 = gppalRGB;
  v6 = 0LL;
  v67[0] = 0LL;
  v67[1] = 0LL;
  v7 = 0LL;
  v55 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v62 = 0LL;
  v10 = 0LL;
  v64 = 0;
  v11 = 0LL;
  v73[1] = 0LL;
  v12 = 0;
  v58 = 0LL;
  v60 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v61 = 0LL;
  v50 = 0;
  v52 = 0LL;
  v82 = 0LL;
  v59 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0;
  v73[0] = 0LL;
  v77 = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( a2 >= 4 )
  {
    v13 = *a3 == 1148352339;
    v14 = a3 + 1;
    v57 = a3 + 1;
    if ( v13 )
    {
      v15 = a2 - 4;
      v49 = a2 - 4;
      if ( a2 - 4 >= 4 )
      {
        while ( 1 )
        {
          if ( *v14 )
          {
            if ( *v14 == 1 )
            {
              if ( v11 )
                goto LABEL_79;
              XFERDCOBJ::ThreadCleanup(v67);
              SURFREFDC::vUnlock(&v55);
              v16 = 8;
              if ( v49 < 8 || !v12 )
              {
                v3 = v55;
                LODWORD(v4) = 0;
                goto LABEL_115;
              }
              LOBYTE(v31) = 5;
              v55 = (SURFACE *)HmgShareLockCheck((int)v14[1], v31);
              v3 = v55;
              if ( !v55 )
                goto LABEL_109;
              if ( v55 != SURFACE::pdibDefault )
              {
                GreAcquireHmgrSemaphore();
                INC_SHARE_REF_CNT(v3);
                ++*((_DWORD *)v3 + 42);
                DEC_SHARE_REF_CNT(v3);
                GreReleaseHmgrSemaphore();
              }
              v10 = *((_QWORD *)v3 + 16);
              v60 = v3;
              v65 = ppalDefault;
              if ( !v10
                || (*(_DWORD *)(v10 + 24) & 0x2000) != 0
                || v3 == v58
                || *((_DWORD *)v3 + 24) != 6
                || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                    &v61,
                                    0LL,
                                    *(unsigned int *)(v56[0] + 120LL),
                                    v10,
                                    v8,
                                    ppalDefault,
                                    v9,
                                    *(_DWORD *)(*(_QWORD *)(v56[0] + 976LL) + 184LL),
                                    *(_DWORD *)(*(_QWORD *)(v56[0] + 976LL) + 176LL),
                                    0,
                                    0) )
              {
                goto LABEL_109;
              }
              v5 = v58;
              v66 = v61;
            }
            else
            {
              if ( *v14 != 9 )
                goto LABEL_109;
              v16 = 60;
              if ( v15 < 0x3C )
                goto LABEL_109;
              v17 = v14[9];
              if ( (v17 & 0xFFFFFF80) != 0 )
                goto LABEL_109;
              if ( !v6 )
                goto LABEL_109;
              v18 = v14[5];
              if ( v18 < 0 )
                goto LABEL_109;
              v19 = v14[6];
              if ( v19 < 0 )
                goto LABEL_109;
              v20 = v14[7];
              if ( v20 > *((_DWORD *)v6 + 14) )
                goto LABEL_109;
              v21 = v14[8];
              if ( v21 > *((_DWORD *)v6 + 15) )
                goto LABEL_109;
              v22 = v20 - v18;
              v23 = v21 - v19;
              if ( v22 <= 0 )
                goto LABEL_109;
              if ( v23 <= 0 )
                goto LABEL_109;
              if ( (v17 & 0x20) == 0 )
              {
                v24 = v14[10];
                if ( v24 < 0 )
                  goto LABEL_109;
                v25 = v14[11];
                if ( v25 < 0 )
                  goto LABEL_109;
                v26 = v14[12];
                if ( v26 < 0 )
                  goto LABEL_109;
                v27 = v14[13];
                if ( v27 < 0 || v24 > v22 || v25 > v22 || v26 > v23 || v27 > v23 || v24 + v25 > v22 || v27 + v26 > v23 )
                  goto LABEL_109;
              }
              if ( (v17 & 0xC) == 0xC )
                goto LABEL_109;
              if ( (v17 & 8) != 0 )
              {
                v14[14] = ulGetNearestIndexFromColorref(v10, v7, (unsigned int)v14[14], 1LL);
              }
              else
              {
                v28 = v50;
                if ( (v17 & 4) != 0 )
                  v28 = 1;
                v50 = v28;
              }
              v29 = v14 + 1;
              if ( !v52 )
              {
                v30 = (char *)v14;
                v5 = v58;
                v84.left = *v29;
                v84.top = v14[2];
                v84.right = v14[3];
                v84.bottom = v14[4];
                v52 = (char *)v14;
                goto LABEL_76;
              }
              ERECTL::operator+=((unsigned int *)&v84, (unsigned int *)v29);
              v5 = v58;
            }
          }
          else
          {
            if ( v11 )
              goto LABEL_79;
            v16 = 24;
            if ( v15 < 0x18 )
              goto LABEL_109;
            v32 = (HDC)(int)v14[1];
            if ( v32 != v68 )
              goto LABEL_109;
            if ( !v12 )
              XDCOBJ::vLock((XDCOBJ *)v56, v32);
            if ( !v56[0]
              || (*(_DWORD *)(v56[0] + 36LL) & 0x10000) != 0
              || !v12 && !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v70, (struct XDCOBJ *)v56, 0) )
            {
              goto LABEL_109;
            }
            v63 = *(_DWORD *)(*(_QWORD *)(v56[0] + 976LL) + 208LL);
            v33 = *(_DWORD *)(*(_QWORD *)(v56[0] + 976LL) + 108LL) & 1;
            v64 = v33;
            if ( (*(_DWORD *)(*(_QWORD *)(v56[0] + 976LL) + 340LL) & 0x1E000) != 0 )
            {
              EXFORMOBJ::vInit((EXFORMOBJ *)&v62, (struct XDCOBJ *)v56, 0x204u, 0);
              v34 = v62;
              v33 = v64;
            }
            else
            {
              v34 = v56[0] + 320LL;
              v62 = v56[0] + 320LL;
            }
            v35 = *(_DWORD *)(v34 + 32);
            if ( (v35 & 1) == 0 )
              goto LABEL_109;
            left = v14[2];
            top = v14[3];
            right = v14[4];
            bottom = v14[5];
            v83.left = left;
            v83.top = top;
            v83.right = right;
            v83.bottom = bottom;
            if ( (v35 & 0x43) != 0x43 )
            {
              bCvtPts1(v34, &v83, 2LL);
              bottom = v83.bottom;
              right = v83.right;
              top = v83.top;
              left = v83.left;
            }
            if ( v33 )
            {
              ++left;
              ++right;
              v83.left = left;
              v83.right = right;
            }
            if ( left > right )
            {
              v83.left = right;
              v83.right = left;
            }
            if ( top > bottom )
            {
              v83.top = bottom;
              v83.bottom = top;
            }
            if ( (*(_DWORD *)(v56[0] + 36LL) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)v56, (struct ERECTL *)&v83);
            v5 = *(SURFACE **)(v56[0] + 496LL);
            v58 = v5;
            if ( !v5 )
              goto LABEL_109;
            v8 = *((_QWORD *)v5 + 16);
            v9 = *(_QWORD *)(v56[0] + 88LL);
            if ( v10 )
            {
              if ( (*(_DWORD *)(v10 + 24) & 0x2000) != 0 )
                goto LABEL_109;
            }
            v59 = 1;
          }
          v30 = v52;
LABEL_76:
          v15 = v49 - v16;
          v49 = v15;
          v14 += (unsigned __int64)v16 >> 2;
          v57 = v14;
          if ( v15 || !v30 )
            goto LABEL_105;
          v7 = v65;
          v6 = v60;
LABEL_79:
          if ( v56[0] && v6 )
          {
            *(_QWORD *)&v78 = 72LL;
            v40 = 0LL;
            v51 = 0LL;
            v4 = 0LL;
            v53 = 0LL;
            v41 = 0LL;
            v54 = 0LL;
            *((_QWORD *)&v78 + 1) = 33488896LL;
            *(_QWORD *)&v79 = 0LL;
            if ( v50 )
            {
              if ( (unsigned int)(*((_DWORD *)v5 + 24) - 1) <= 2
                || (v42 = v69, !(unsigned int)EXLATEOBJ::bInitXlateObj(&v51, 0LL, 0LL, v10, v69, v7, v7, 0, 0, 0, 0)) )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v53);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
                LODWORD(v4) = 0;
                goto LABEL_115;
              }
              v40 = v51;
              *(_QWORD *)&v80 = v51;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v53, 0LL, 0LL, v8, v42, v9, v9, 0, 0, 0, 0) )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v53);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
                goto LABEL_115;
              }
              v4 = v53;
              *((_QWORD *)&v80 + 1) = v53;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v54, 0LL, 0LL, v42, v8, v9, v9, 0, 0, 0, 0) )
                goto LABEL_108;
              v41 = v54;
              v6 = v60;
              *(_QWORD *)&v81 = v54;
            }
            else
            {
              *(_QWORD *)&v81 = 0LL;
              v80 = 0uLL;
            }
            if ( !(unsigned int)NtGdiDrawStreamInternal(
                                  (struct XDCOBJ *)v56,
                                  (struct EXFORMOBJ *)&v62,
                                  v6,
                                  v66,
                                  &v83,
                                  &v84,
                                  (int)v57 - (int)v52,
                                  v52,
                                  (struct _DRAWSTREAMINFO *)&v78) )
            {
LABEL_108:
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v53);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
LABEL_109:
              LODWORD(v4) = 0;
              goto LABEL_115;
            }
            v52 = 0LL;
            v50 = 0;
            if ( v41 )
            {
              v43 = *(int *)(v41 + 36);
              if ( (int)v43 < 0 )
              {
                if ( (_DWORD)v43 == -1 )
                  FreeThreadBufferWithTag(v41);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v43);
                v3 = v55;
                v40 = v51;
                v4 = v53;
              }
            }
            if ( v4 )
            {
              v44 = *(int *)(v4 + 36);
              if ( (int)v44 < 0 )
              {
                if ( (_DWORD)v44 == -1 )
                  FreeThreadBufferWithTag(v4);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v44);
                v3 = v55;
                v40 = v51;
              }
            }
            if ( v40 )
            {
              v45 = *(int *)(v40 + 36);
              if ( (int)v45 < 0 )
              {
                if ( (_DWORD)v45 == -1 )
                  FreeThreadBufferWithTag(v40);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v45);
                v3 = v55;
              }
            }
            v15 = v49;
            v14 = v57;
          }
LABEL_105:
          if ( v15 < 4 )
            break;
          v7 = v65;
          v5 = v58;
          v12 = v59;
          v6 = v60;
          v11 = v52;
        }
      }
      LODWORD(v4) = 1;
    }
    else
    {
      LODWORD(v4) = 0;
    }
  }
LABEL_115:
  XFERDCOBJ::ThreadCleanup(v56);
  XFERDCOBJ::ThreadCleanup(v67);
  if ( v61 )
  {
    cEntries = (int)v61[1].cEntries;
    if ( (int)cEntries < 0 )
    {
      if ( (_DWORD)cEntries == -1 )
        FreeThreadBufferWithTag(v61);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
      v3 = v55;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v70);
  if ( v73[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v73);
  if ( v3 )
  {
    if ( v3 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v3);
    }
    else
    {
      GreAcquireHmgrSemaphore();
      DEC_SHARE_REF_CNT(v3);
      v13 = (*((_DWORD *)v3 + 42))-- == 1;
      if ( v13 )
      {
        if ( (*(_DWORD *)v3 & 0x800000) != 0 )
        {
          v47 = *((_WORD *)v3 + 51);
          if ( (v47 & 0x400) != 0 )
          {
            *((_WORD *)v3 + 51) = v47 & 0xFBFF;
            GreMakeBitmapNonStock(*(_QWORD *)v3);
          }
        }
        *((_QWORD *)v3 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  return (unsigned int)v4;
}
