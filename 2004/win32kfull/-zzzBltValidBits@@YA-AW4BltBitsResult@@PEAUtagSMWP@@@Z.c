/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0020F48 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C0021060 (GetRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00229F0 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C0022A4C (GetOldRedirectionBitmap.c)
 *     UnionRect @ 0x1C0023B50 (UnionRect.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IsThreadDesktopComposed @ 0x1C0069C78 (IsThreadDesktopComposed.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0069C9C (GreRedrawSpriteOverlapPresent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006F798 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006F908 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00722EC (PhysicalToLogicalInPlaceRgn.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     GreHintDCWnd @ 0x1C00E8690 (GreHintDCWnd.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C010AF94 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C010BC8C (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     UpdateSpriteArea @ 0x1C014D8F0 (UpdateSpriteArea.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     FindSpb @ 0x1C021ACF4 (FindSpb.c)
 *     FreeSpb @ 0x1C021AD24 (FreeSpb.c)
 *     RestoreSpb @ 0x1C021AF30 (RestoreSpb.c)
 *     SpbCheck @ 0x1C021B16C (SpbCheck.c)
 *     SpbCheckRect @ 0x1C021B284 (SpbCheckRect.c)
 *     GreUnlockDisplayArea @ 0x1C02864BC (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C0288224 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rdx
  _QWORD *v5; // rsi
  int v6; // r14d
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rsi
  int v12; // r14d
  unsigned int v13; // r12d
  __int64 *v14; // rbx
  __int64 v15; // rcx
  int v16; // r13d
  int v17; // eax
  __int64 *v18; // rdi
  int v19; // ebx
  __int64 v20; // rdx
  int v22; // edi
  _QWORD *v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rsi
  __int64 RedirectionBitmap; // rax
  __int64 v28; // rdx
  int v29; // ecx
  HRGN v30; // rdx
  int v31; // eax
  int v32; // esi
  unsigned int v33; // ebx
  int v34; // r9d
  int v35; // edx
  int v36; // r10d
  int v37; // r8d
  int v38; // eax
  __int64 v39; // r15
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r8
  _QWORD *v44; // r8
  __int64 StyleWindow; // rax
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // r10
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdi
  __int64 v57; // rbx
  int v58; // edi
  unsigned int v59; // r12d
  int v60; // edx
  int v61; // eax
  __m128i v62; // xmm0
  int v63; // ecx
  int v64; // edx
  __int64 OldRedirectionBitmap; // rax
  __int64 v66; // r10
  __int64 v67; // r15
  int v68; // eax
  int v69; // eax
  __int64 Spb; // rax
  unsigned int v71[2]; // [rsp+28h] [rbp-99h]
  __int64 v72; // [rsp+30h] [rbp-91h]
  __int64 *v73; // [rsp+38h] [rbp-89h]
  int v74; // [rsp+40h] [rbp-81h]
  int v75; // [rsp+48h] [rbp-79h]
  int v76; // [rsp+50h] [rbp-71h]
  int v77; // [rsp+58h] [rbp-69h]
  int v78; // [rsp+68h] [rbp-59h]
  __int64 v79; // [rsp+70h] [rbp-51h] BYREF
  int v80; // [rsp+78h] [rbp-49h]
  int v81; // [rsp+7Ch] [rbp-45h]
  int valid; // [rsp+80h] [rbp-41h]
  int v83; // [rsp+84h] [rbp-3Dh]
  __int64 v84; // [rsp+88h] [rbp-39h] BYREF
  __m128i v85; // [rsp+98h] [rbp-29h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v88; // [rsp+B8h] [rbp-9h]
  HRGN v89; // [rsp+C0h] [rbp-1h]
  __m128i v90; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v91; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v86 = a1;
  v91 = 0LL;
  v2 = 0LL;
  v3 = 0;
  ++gdwDeferWinEvent;
  v84 = 0LL;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  valid = BltValidInit((struct tagSMWP *)v1);
  if ( !valid )
    goto LABEL_37;
  v5 = 0LL;
  v6 = *(_DWORD *)(v1 + 28) - 1;
  v7 = *(_QWORD **)(v1 + 40);
  if ( v6 < 0 )
    goto LABEL_37;
  do
  {
    LOBYTE(v4) = 1;
    v8 = HMValidateHandleNoSecure(*v7, v4);
    v9 = v8;
    if ( v8 && *(_QWORD *)(v8 + 104) && (unsigned int)IsStillWindowC((HWND)v7[1]) )
    {
      if ( v7[14] == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v9 + 104) != GetDesktopWindow(v9)) )
      {
        v7[14] = 0LL;
      }
      v10 = v7;
      if ( v5 )
        v10 = v5;
      v5 = v10;
    }
    else
    {
      *v7 = 0LL;
      *((_DWORD *)v7 + 8) = 6159;
    }
    v7 += 21;
    --v6;
  }
  while ( v6 >= 0 );
  if ( v5 )
  {
    v11 = *(_QWORD *)(_HMObjectFromHandle(*v5) + 104);
    v88 = v11;
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v11, (struct tagSMWP *)v1);
    v83 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v57 = *(_QWORD *)(v1 + 40);
      v58 = *(_DWORD *)(v1 + 28);
      while ( --v58 >= 0 )
      {
        if ( *(_QWORD *)v57 )
        {
          if ( (*(_DWORD *)(v57 + 32) & 8) == 0 )
          {
            _HMObjectFromHandle(*(_QWORD *)v57);
            v60 = *(_DWORD *)(v57 + 72);
            if ( v60 || *(_DWORD *)(v57 + 76) )
            {
              v63 = -*(_DWORD *)(v57 + 76);
              v64 = -v60;
              v85 = *(__m128i *)(v57 + 56);
              v62 = v85;
              v85.m128i_i32[2] += v64;
              v85.m128i_i32[3] += v63;
              v85.m128i_i32[1] += v63;
              v90 = v62;
              v85.m128i_i32[0] = v64 + _mm_cvtsi128_si32(v62);
              UnionRect(&v91, v90.m128i_i32, v85.m128i_i32);
              v83 = 1;
            }
          }
        }
        v57 += 168LL;
      }
    }
    LODWORD(v79) = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 480LL) >> 14) & 2;
    zzzLockDisplayAreaAndInvalidateDCCache(v11, (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 2) != 0 ? 28 : 26);
    v12 = 0;
    v13 = 96;
    v14 = *(__int64 **)(v1 + 40);
    v15 = (unsigned int)(*(_DWORD *)(v1 + 28) - 1);
    v78 = 96;
    v89 = (HRGN)ghrgnInvalidSum;
    v81 = 0;
    v80 = v15;
    if ( (int)v15 >= 0 )
    {
      v16 = v79;
      v17 = v15;
      while ( 1 )
      {
        --valid;
        v15 = *v14;
        if ( *v14 )
          break;
LABEL_20:
        v14 += 21;
        v80 = --v17;
        if ( v17 < 0 )
        {
          v11 = v88;
          LODWORD(v79) = v16;
          v1 = v86;
          goto LABEL_22;
        }
      }
      if ( (v14[4] & 8) != 0 )
      {
LABEL_19:
        v17 = v80;
        goto LABEL_20;
      }
      _HMObjectFromHandle(v15);
      v16 |= 1u;
      v24 = _HMObjectFromHandle(*v14);
      v25 = *((_DWORD *)v14 + 22);
      v26 = v24;
      if ( (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v24);
        v28 = *(_QWORD *)(v26 + 40);
        if ( !RedirectionBitmap && (*(_BYTE *)(v28 + 27) & 0x20) == 0 )
          goto LABEL_78;
        v29 = *(_DWORD *)(v28 + 232);
        if ( (v29 & 0x20) == 0 && (*((_DWORD *)v14 + 39) & 7) == 0 )
          goto LABEL_78;
        *(_DWORD *)(v28 + 232) = v29 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v26, ghrgnVisNew) )
        v25 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckRect((struct tagWND *)v26, (struct tagRECT *)(*(_QWORD *)(v26 + 40) + 88LL), 1u);
      if ( (v25 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v26 + 40) + 136LL) != 1LL )
      {
        v34 = *((_DWORD *)v14 + 16);
        v35 = *((_DWORD *)v14 + 14);
        if ( v34 > v35 )
        {
          v36 = *((_DWORD *)v14 + 17);
          v37 = *((_DWORD *)v14 + 15);
          if ( v36 > v37 )
          {
            v38 = *((_DWORD *)v14 + 19);
            v71[0] = v36 - v38;
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v35 - *((_DWORD *)v14 + 18)),
              (unsigned int)(v37 - v38),
              (unsigned int)(v34 - *((_DWORD *)v14 + 18)),
              *(_QWORD *)v71,
              v72,
              v73,
              v74,
              v75,
              v76,
              v77);
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v14[12], 1LL) >= 2
              && ((v13 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( v14[9] )
                GreOffsetRgn(ghrgnValid, *((unsigned int *)v14 + 18), *((unsigned int *)v14 + 19));
              v39 = v26;
              v40 = 0LL;
              while ( 1 )
              {
                v41 = *(_QWORD *)(v39 + 40);
                v42 = *(_QWORD *)(v41 + 136);
                if ( v42 == 1 )
                  break;
                if ( v42 )
                {
                  v87 = *(_QWORD *)(v41 + 136);
                  if ( v40 )
                  {
                    v61 = PhysicalToLogicalInPlaceRgn(v40, &v87);
                    v42 = v87;
                    LODWORD(v79) = v61;
                  }
                  else
                  {
                    LODWORD(v79) = 0;
                  }
                  v59 = GreCombineRgn(ghrgnValid, ghrgnValid, v42, 4LL);
                  if ( (_DWORD)v79 )
                    GreDeleteObject(v42);
                  if ( v59 < 2 )
                    break;
                  v40 = v39;
                }
                v39 = *(_QWORD *)(v39 + 104);
                if ( !v39 || (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 31LL) & 2) != 0 )
                {
                  v43 = v14[15];
                  if ( (!v43 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v43, 4LL) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  {
                    goto LABEL_54;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v25 |= 4u;
LABEL_54:
      if ( (v25 & 4) == 0 && (*((_DWORD *)v14 + 18) || *((_DWORD *)v14 + 19)) )
      {
        StyleWindow = GetStyleWindow(v26, 2568LL);
        v46 = StyleWindow;
        if ( StyleWindow && (v47 = GetRedirectionBitmap(StyleWindow)) != 0 )
        {
          if ( v26 != v46 )
          {
            v48 = *(_QWORD *)(v46 + 40);
            v77 = *(_DWORD *)(v48 + 92);
            v76 = *(_DWORD *)(v48 + 88);
            v75 = -*((_DWORD *)v14 + 19);
            v49 = v47;
            v74 = -*((_DWORD *)v14 + 18);
            v73 = v14 + 7;
            v72 = ghrgnValid;
            v71[1] = ghdcMem[1];
LABEL_103:
            UpdateSpriteArea(v46, v47, v49);
            goto LABEL_55;
          }
          if ( (*((_DWORD *)v14 + 39) & 1) != 0
            || *((_DWORD *)v14 + 18) != *((_DWORD *)v14 + 4) - *((_DWORD *)v14 + 20)
            || *((_DWORD *)v14 + 19) != *((_DWORD *)v14 + 5) - *((_DWORD *)v14 + 21) )
          {
            OldRedirectionBitmap = GetOldRedirectionBitmap(v46);
            v66 = v47;
            if ( OldRedirectionBitmap )
              v66 = OldRedirectionBitmap;
            v77 = *((_DWORD *)v14 + 21);
            v76 = *((_DWORD *)v14 + 20);
            v75 = -*((_DWORD *)v14 + 19);
            v49 = v66;
            v74 = -*((_DWORD *)v14 + 18);
            v73 = v14 + 7;
            v72 = ghrgnValid;
            v71[1] = ghdcMem2[1];
            goto LABEL_103;
          }
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v26 + 40) + 26LL) & 8) == 0 )
        {
          v67 = v84;
          if ( !v84 )
          {
            v67 = *(_QWORD *)(gpDispInfo + 56LL);
            v84 = v67;
          }
          GreHintDCWnd(v67, *(_QWORD *)v26, 0, 0, 0);
          GreSelectVisRgn(v67, ghrgnValid, 2LL);
          NtGdiBitBltInternal(
            v67,
            *((unsigned int *)v14 + 14),
            *((unsigned int *)v14 + 15),
            (unsigned int)(*((_DWORD *)v14 + 16) - *((_DWORD *)v14 + 14)),
            *((_DWORD *)v14 + 17) - *((_DWORD *)v14 + 15),
            v67,
            *((_DWORD *)v14 + 14) - *((_DWORD *)v14 + 18),
            *((_DWORD *)v14 + 15) - *((_DWORD *)v14 + 19),
            13369376,
            0,
            1);
          GreHintDCWnd(v67, 0, 0, 0, 0);
        }
      }
LABEL_55:
      if ( *(char *)(*(_QWORD *)(v26 + 40) + 16LL) >= 0
        || (v25 & 2) != 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v14[12], ghrgnVisNew, 4u, v25) )
      {
        v30 = (HRGN)v14[12];
        if ( v30 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v30, ghrgnVisNew, 2u, v25) )
          {
LABEL_77:
            v13 = v78;
            goto LABEL_78;
          }
        }
        else
        {
          v90 = *(__m128i *)(*(_QWORD *)(v88 + 40) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v90, &v90, v26, v88);
          SetRectRgnIndirect(ghrgnInvalid, &v90);
        }
LABEL_58:
        v13 = v78;
        if ( (v25 & 4) == 0 )
        {
          if ( (v78 & 0x20) != 0 )
          {
            v50 = 5LL;
            v51 = 0LL;
            v52 = ghrgnValidSum;
          }
          else
          {
            v50 = 2LL;
            v52 = ghrgnValidSum;
            v51 = ghrgnValidSum;
          }
          GreCombineRgn(v52, ghrgnValid, v51, v50);
          v13 = v78 & 0xFFFFFFDF;
          v78 &= ~0x20u;
        }
        if ( (v13 & 0x20) != 0 )
        {
          if ( (v25 & 4) != 0 )
          {
LABEL_61:
            if ( *(char *)(*(_QWORD *)(v26 + 40) + 16LL) < 0 )
            {
              v69 = *((_DWORD *)v14 + 8);
              if ( (v69 & 0x40) == 0 && (v69 & 0x87) != 7 )
              {
                Spb = FindSpb(v26);
                FreeSpb(Spb);
              }
            }
            v15 = v14[12];
            if ( v15 )
            {
              GreDeleteObject(v15);
              v14[12] = 0LL;
            }
            v12 = v81;
            if ( (*(_BYTE *)(*(_QWORD *)(v26 + 40) + 21LL) & 1) == 0 && (v14[4] & 0x40) != 0 )
              v12 = ++v81;
            if ( (v25 & 8) != 0 )
              goto LABEL_73;
            if ( (v25 & 5) == 4 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v85);
              xxxInternalInvalidate((struct tagWND *)v26, (HRGN)1, 0x485u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v85);
            }
            v79 = ghrgnInvalid;
            v31 = LogicalToPhysicalInPlaceRgnWorker(v26, &v79, 0LL);
            v32 = v31;
            if ( (v13 & 0x40) != 0 )
            {
              if ( !valid && !v31 )
              {
                v89 = (HRGN)ghrgnInvalid;
LABEL_72:
                v13 &= ~0x40u;
                v78 = v13;
LABEL_73:
                v2 = v84;
                goto LABEL_19;
              }
              v53 = 5LL;
              v55 = 0LL;
              v54 = ghrgnInvalidSum;
            }
            else
            {
              v53 = 2LL;
              v54 = ghrgnInvalidSum;
              v55 = ghrgnInvalidSum;
            }
            v56 = v79;
            GreCombineRgn(v54, v79, v55, v53);
            if ( v32 )
              GreDeleteObject(v56);
            goto LABEL_72;
          }
          v44 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v44 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v44, 4LL) > 1 )
          goto LABEL_61;
LABEL_78:
        *(_DWORD *)(*(_QWORD *)(v26 + 40) + 232LL) &= ~2u;
        LOBYTE(v25) = v25 | 8;
        goto LABEL_61;
      }
      v68 = RestoreSpb(v26, ghrgnInvalid, &v84);
      if ( v68 )
      {
        if ( v68 == 2 && (v78 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v25 & 1) != 0 )
          goto LABEL_159;
      }
      else if ( (v25 & 1) != 0 )
      {
        goto LABEL_77;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_159:
      if ( (v25 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        LOBYTE(v25) = v25 | 0x20;
      goto LABEL_58;
    }
LABEL_22:
    if ( v83 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), &v91);
    v18 = *(__int64 **)(v1 + 40);
    v19 = *(_DWORD *)(v1 + 28);
    while ( --v19 >= 0 )
    {
      v15 = *v18;
      if ( *v18 )
      {
        v20 = _HMObjectFromHandle(v15);
        if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap(v20);
      }
      v18 += 21;
    }
    if ( (v13 & 0x40) == 0 )
    {
      if ( v12 != *(_DWORD *)(v1 + 28) || (v33 = 69, v11 == GetDesktopWindow(v11)) )
        v33 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v86);
      xxxInternalInvalidate((struct tagWND *)v11, v89, v33);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v86);
    }
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
      GreClientRgnDone(v15);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 )
    {
      GreSelectVisRgn(v2, 0LL, 1LL);
      GreGetBounds(v2, 0LL, 0LL);
    }
    v3 = v79;
  }
  else
  {
LABEL_37:
    v22 = *(_DWORD *)(v1 + 28) - 1;
    if ( v22 >= 0 )
    {
      v23 = (_QWORD *)(*(_QWORD *)(v1 + 40) + 96LL);
      do
      {
        if ( *v23 )
        {
          GreDeleteObject(*v23);
          *v23 = 0LL;
        }
        v23 += 21;
        --v22;
      }
      while ( v22 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return v3;
}
