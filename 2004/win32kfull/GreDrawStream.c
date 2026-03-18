/*
 * XREFs of GreDrawStream @ 0x1C00850A0
 * Callers:
 *     NtGdiDrawStream @ 0x1C00864E0 (NtGdiDrawStream.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0085DA0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C0086360 (bCvtPts1.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C010FFE0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C027CFFC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027D060 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDrawStream(HDC a1, unsigned int a2, int *a3)
{
  SURFACE *v5; // rbx
  struct PALETTE *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  int v11; // eax
  _DWORD *v12; // rsi
  unsigned int v13; // r14d
  char *v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // r11d
  int v17; // r8d
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // r10d
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // eax
  HDC v28; // rdx
  int v29; // edi
  char *v30; // rcx
  int v31; // eax
  LONG left; // r8d
  LONG top; // r10d
  LONG right; // edx
  LONG bottom; // r9d
  SURFACE *v36; // rax
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v41; // rdi
  __int64 cEntries; // rcx
  __int16 v44; // cx
  struct PALETTE *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // [rsp+60h] [rbp-A0h]
  unsigned int v51; // [rsp+60h] [rbp-A0h]
  DC *v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+78h] [rbp-88h]
  unsigned int v55; // [rsp+7Ch] [rbp-84h]
  unsigned int v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  char *v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v61; // [rsp+A8h] [rbp-58h]
  int v62; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v63; // [rsp+B8h] [rbp-48h]
  struct _XLATEOBJ *v64; // [rsp+C0h] [rbp-40h] BYREF
  char *v65; // [rsp+C8h] [rbp-38h] BYREF
  int v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D4h] [rbp-2Ch]
  _QWORD v68[2]; // [rsp+D8h] [rbp-28h] BYREF
  SURFACE *v69; // [rsp+E8h] [rbp-18h]
  struct PALETTE *v70; // [rsp+F0h] [rbp-10h]
  struct _XLATEOBJ *v71; // [rsp+F8h] [rbp-8h]
  HDC v72; // [rsp+100h] [rbp+0h]
  struct PALETTE *v73; // [rsp+108h] [rbp+8h]
  __int128 v74; // [rsp+110h] [rbp+10h] BYREF
  __int64 v75; // [rsp+120h] [rbp+20h]
  int v76; // [rsp+128h] [rbp+28h]
  _QWORD v77[2]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  __int64 v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  _QWORD v82[10]; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v83; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _RECTL v84; // [rsp+1C0h] [rbp+C0h] BYREF

  v72 = a1;
  v78 = 256;
  v52 = 0LL;
  v5 = 0LL;
  v53 = 0LL;
  v6 = 0LL;
  v68[0] = 0LL;
  v7 = 0LL;
  v68[1] = 0LL;
  v65 = 0LL;
  v8 = 0LL;
  v67 = 0;
  v9 = 0LL;
  v77[1] = 0LL;
  v56 = 0;
  v69 = 0LL;
  v63 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v64 = 0LL;
  v54 = 0;
  v59 = 0LL;
  v73 = gppalRGB;
  memset(v82, 0, 0x48uLL);
  v74 = 0LL;
  v10 = 0LL;
  v55 = 0;
  v75 = 0LL;
  v76 = 0;
  v77[0] = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  v79 = 0LL;
  if ( a2 >= 4 )
  {
    v11 = *a3;
    v12 = a3 + 1;
    v61 = v12;
    if ( v11 == 1148352339 )
    {
      v13 = a2 - 4;
      v50 = v13;
      if ( v13 >= 4 )
      {
        while ( 1 )
        {
          if ( *v12 )
          {
            if ( *v12 != 1 )
            {
              if ( *v12 != 9 )
                goto LABEL_90;
              v51 = 60;
              if ( v13 < 0x3C )
                goto LABEL_90;
              v16 = v12[9];
              if ( (v16 & 0xFFFFFF80) != 0 )
                goto LABEL_90;
              if ( !v63 )
                goto LABEL_90;
              v17 = v12[5];
              if ( v17 < 0 )
                goto LABEL_90;
              v18 = v12[6];
              if ( v18 < 0 )
                goto LABEL_90;
              v19 = v12[7];
              if ( v19 > *((_DWORD *)v63 + 14) )
                goto LABEL_90;
              v20 = v12[8];
              if ( v20 > *((_DWORD *)v63 + 15) )
                goto LABEL_90;
              v21 = v19 - v17;
              v22 = v20 - v18;
              if ( v21 <= 0 )
                goto LABEL_90;
              if ( v22 <= 0 )
                goto LABEL_90;
              if ( (v16 & 0x20) == 0 )
              {
                v23 = v12[10];
                if ( v23 < 0 )
                  goto LABEL_90;
                v24 = v12[11];
                if ( v24 < 0 )
                  goto LABEL_90;
                v25 = v12[12];
                if ( v25 < 0 )
                  goto LABEL_90;
                v26 = v12[13];
                if ( v26 < 0 || v23 > v21 || v24 > v21 || v25 > v22 || v26 > v22 || v23 + v24 > v21 || v26 + v25 > v22 )
                  goto LABEL_90;
              }
              if ( (v16 & 0xC) == 0xC )
                goto LABEL_90;
              if ( (v16 & 8) != 0 )
              {
                v12[14] = ulGetNearestIndexFromColorref(v9, v6, (unsigned int)v12[14]);
              }
              else
              {
                v27 = v54;
                if ( (v16 & 4) != 0 )
                  v27 = 1;
                v54 = v27;
              }
              if ( v59 )
              {
                ERECTL::operator+=(&v84);
              }
              else
              {
                v84 = *(struct _RECTL *)(v12 + 1);
                v59 = (char *)v12;
              }
              goto LABEL_21;
            }
            v14 = v59;
            if ( !v59 )
            {
              if ( v68[0] )
              {
                XDCOBJ::vUnlockFast((XDCOBJ *)v68);
                v10 = v55;
              }
              v68[0] = 0LL;
              if ( v5 )
              {
                if ( v5 == SURFACE::pdibDefault )
                {
                  DEC_SHARE_REF_CNT(v5);
                }
                else
                {
                  GreAcquireHmgrSemaphore();
                  SURFACE::vDec_cRef(v5);
                  GreReleaseHmgrSemaphore();
                }
                v10 = v55;
                v5 = 0LL;
              }
              v51 = 8;
              if ( v13 < 8 )
                goto LABEL_90;
              if ( !(_DWORD)v10 )
                goto LABEL_90;
              LOBYTE(v10) = 5;
              v5 = (SURFACE *)HmgShareLockCheck((int)v12[1], v10);
              if ( !v5 )
                goto LABEL_90;
              if ( v5 != SURFACE::pdibDefault )
              {
                GreAcquireHmgrSemaphore();
                INC_SHARE_REF_CNT(v5);
                ++*((_DWORD *)v5 + 42);
                DEC_SHARE_REF_CNT(v5);
                GreReleaseHmgrSemaphore();
              }
              v9 = *((_QWORD *)v5 + 16);
              v63 = v5;
              v70 = ppalDefault;
              if ( !v9
                || (*(_DWORD *)(v9 + 24) & 0x2000) != 0
                || v5 == v69
                || *((_DWORD *)v5 + 24) != 6
                || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                    &v64,
                                    0LL,
                                    *((unsigned int *)v52 + 30),
                                    v9,
                                    v7,
                                    ppalDefault,
                                    v8,
                                    *(_DWORD *)(*((_QWORD *)v52 + 122) + 184LL),
                                    *(_DWORD *)(*((_QWORD *)v52 + 122) + 176LL),
                                    0,
                                    0) )
              {
                goto LABEL_90;
              }
              v71 = v64;
              goto LABEL_21;
            }
          }
          else
          {
            v14 = v59;
            if ( !v59 )
            {
              if ( (_DWORD)v10 == 1 )
                DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v74);
              if ( v52 )
                XDCOBJ::vUnlockFast((XDCOBJ *)&v52);
              v52 = 0LL;
              if ( v5 )
              {
                if ( v5 == SURFACE::pdibDefault )
                {
                  DEC_SHARE_REF_CNT(v5);
                }
                else
                {
                  GreAcquireHmgrSemaphore();
                  SURFACE::vDec_cRef(v5);
                  GreReleaseHmgrSemaphore();
                }
                v5 = 0LL;
              }
              v51 = 24;
              if ( v13 < 0x18 )
                goto LABEL_90;
              v28 = (HDC)(int)v12[1];
              if ( v28 != v72 )
                goto LABEL_90;
              XDCOBJ::vLock((XDCOBJ *)&v52, v28);
              if ( !v52 )
                goto LABEL_99;
              if ( (*((_DWORD *)v52 + 9) & 0x10000) != 0
                || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v74, (struct XDCOBJ *)&v52, 0) )
              {
                goto LABEL_90;
              }
              v66 = *(_DWORD *)(*((_QWORD *)v52 + 122) + 208LL);
              v29 = *(_DWORD *)(*((_QWORD *)v52 + 122) + 108LL) & 1;
              v67 = v29;
              if ( (*(_DWORD *)(*((_QWORD *)v52 + 122) + 340LL) & 0x1E000) != 0 )
              {
                EXFORMOBJ::vInit((EXFORMOBJ *)&v65, (struct XDCOBJ *)&v52, 0x204u, 0);
                v30 = v65;
                v29 = v67;
              }
              else
              {
                v30 = (char *)v52 + 320;
                v65 = (char *)v52 + 320;
              }
              v31 = *((_DWORD *)v30 + 8);
              if ( (v31 & 1) == 0 )
                goto LABEL_90;
              left = v12[2];
              top = v12[3];
              right = v12[4];
              bottom = v12[5];
              v83.left = left;
              v83.top = top;
              v83.right = right;
              v83.bottom = bottom;
              if ( (v31 & 0x43) != 0x43 )
              {
                bCvtPts1(v30, &v83, 2LL);
                bottom = v83.bottom;
                right = v83.right;
                top = v83.top;
                left = v83.left;
              }
              if ( v29 )
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
              if ( (*((_DWORD *)v52 + 9) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)&v52, (struct ERECTL *)&v83);
              v36 = (SURFACE *)*((_QWORD *)v52 + 62);
              v69 = v36;
              if ( !v36 )
                goto LABEL_90;
              v7 = *((_QWORD *)v36 + 16);
              v8 = *((_QWORD *)v52 + 11);
              if ( v9 )
              {
                if ( (*(_DWORD *)(v9 + 24) & 0x2000) != 0 )
                  goto LABEL_90;
              }
              v55 = 1;
LABEL_21:
              v13 -= v51;
              v15 = (unsigned __int64)v51 >> 2;
              v50 = v13;
              v12 += v15;
              v61 = v12;
              if ( v13 )
                goto LABEL_22;
              v14 = v59;
              if ( !v59 )
                goto LABEL_22;
            }
          }
          if ( v52 && v63 )
          {
            v37 = 0LL;
            v57 = 0LL;
            v38 = 0LL;
            v58 = 0LL;
            v39 = 0LL;
            v60 = 0LL;
            v82[0] = 72LL;
            v82[1] = 33488896LL;
            v82[2] = 0LL;
            if ( v54 )
            {
              if ( (unsigned int)(*((_DWORD *)v69 + 24) - 1) <= 2
                || (v46 = v73, !(unsigned int)EXLATEOBJ::bInitXlateObj(&v57, 0LL, 0LL, v9, v73, v70, v70, 0, 0, 0, 0))
                || (v37 = v57,
                    v82[4] = v57,
                    !(unsigned int)EXLATEOBJ::bInitXlateObj(&v58, 0LL, 0LL, v7, v46, v8, v8, 0, 0, 0, 0))
                || (v38 = v58,
                    v82[5] = v58,
                    !(unsigned int)EXLATEOBJ::bInitXlateObj(&v60, 0LL, 0LL, v46, v7, v8, v8, 0, 0, 0, 0)) )
              {
LABEL_147:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
                goto LABEL_90;
              }
              v39 = v60;
              v14 = v59;
              v82[6] = v60;
            }
            else
            {
              memset(&v82[4], 0, 24);
            }
            if ( !NtGdiDrawStreamInternal(
                    (struct XDCOBJ *)&v52,
                    (struct EXFORMOBJ *)&v65,
                    v63,
                    v71,
                    &v83,
                    &v84,
                    (_DWORD)v61 - (_DWORD)v14,
                    v14,
                    (struct _DRAWSTREAMINFO *)v82) )
              goto LABEL_147;
            v59 = 0LL;
            v54 = 0;
            if ( v39 )
            {
              v47 = *(int *)(v39 + 36);
              if ( (int)v47 >= 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v47);
                v37 = v57;
                v38 = v58;
              }
              else if ( (_DWORD)v47 == -1 )
              {
                FreeThreadBufferWithTag(v39);
              }
            }
            if ( v38 )
            {
              v48 = *(int *)(v38 + 36);
              if ( (int)v48 >= 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v48);
                v37 = v57;
              }
              else if ( (_DWORD)v48 == -1 )
              {
                FreeThreadBufferWithTag(v38);
              }
            }
            if ( v37 )
            {
              v49 = *(int *)(v37 + 36);
              if ( (int)v49 >= 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v49);
              }
              else if ( (_DWORD)v49 == -1 )
              {
                FreeThreadBufferWithTag(v37);
              }
            }
            v13 = v50;
            v12 = v61;
          }
LABEL_22:
          if ( v13 < 4 )
            break;
          v6 = v70;
          v10 = v55;
        }
      }
      v56 = 1;
LABEL_90:
      if ( v52 )
      {
        if ( (_DWORD)v53 && (*((_DWORD *)v52 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v53) )
          {
            UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v52);
            if ( UserAttr )
              DC::RestoreAttributes(v52, UserAttr);
          }
          *((_DWORD *)v52 + 11) &= ~2u;
          LODWORD(v53) = 0;
        }
        v62 = 0;
        v41 = *(_QWORD *)v52;
        HmgDecrementExclusiveReferenceCountEx(v52, HIDWORD(v53), &v62);
        if ( v62 )
          bDeleteDCInternalEx(v41, 0LL);
      }
    }
  }
LABEL_99:
  v52 = 0LL;
  if ( v68[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v68);
  v68[0] = 0LL;
  if ( v64 )
  {
    cEntries = (int)v64[1].cEntries;
    if ( (int)cEntries >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
    }
    else if ( (_DWORD)cEntries == -1 )
    {
      FreeThreadBufferWithTag(v64);
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v74);
  if ( v77[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v77);
  if ( v5 )
  {
    if ( v5 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v5);
    }
    else
    {
      GreAcquireHmgrSemaphore();
      DEC_SHARE_REF_CNT(v5);
      if ( (*((_DWORD *)v5 + 42))-- == 1 )
      {
        if ( (*(_DWORD *)v5 & 0x800000) != 0 )
        {
          v44 = *((_WORD *)v5 + 51);
          if ( (v44 & 0x400) != 0 )
          {
            *((_WORD *)v5 + 51) = v44 & 0xFBFF;
            GreMakeBitmapNonStock(*(_QWORD *)v5);
          }
        }
        *((_QWORD *)v5 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  return v56;
}
