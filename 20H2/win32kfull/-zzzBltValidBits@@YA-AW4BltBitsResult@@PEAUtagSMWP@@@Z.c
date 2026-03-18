/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UnionRect @ 0x1C003F064 (UnionRect.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00407C4 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00436D8 (PhysicalToLogicalInPlaceRgn.c)
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0048180 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00482A4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C12CC (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C00C1328 (GetOldRedirectionBitmap.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C00C3120 (GreRedrawSpriteOverlapPresent.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     IsThreadDesktopComposed @ 0x1C00D7258 (IsThreadDesktopComposed.c)
 *     GreHintDCWnd @ 0x1C00E7730 (GreHintDCWnd.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C010CF34 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C010D828 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     UpdateSpriteArea @ 0x1C0150100 (UpdateSpriteArea.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     FindSpb @ 0x1C0219E64 (FindSpb.c)
 *     FreeSpb @ 0x1C0219E94 (FreeSpb.c)
 *     RestoreSpb @ 0x1C021A0A0 (RestoreSpb.c)
 *     SpbCheck @ 0x1C021A2DC (SpbCheck.c)
 *     SpbCheckRect @ 0x1C021A3F4 (SpbCheckRect.c)
 *     GreUnlockDisplayArea @ 0x1C0284F4C (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C0286CB4 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  int v7; // r14d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rsi
  int v13; // r8d
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r14d
  unsigned int v17; // r12d
  __int64 *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r13d
  int v22; // eax
  __int64 *v23; // rdi
  int v24; // ebx
  int v26; // edi
  _QWORD *v27; // rbx
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 v30; // rsi
  __int64 RedirectionBitmap; // rax
  int v32; // ecx
  HRGN v33; // rdx
  int v34; // eax
  int v35; // esi
  unsigned int v36; // ebx
  int v37; // r9d
  int v38; // edx
  int v39; // r10d
  int v40; // r8d
  __int64 v41; // r15
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // r8
  _QWORD *v46; // r8
  __int64 StyleWindow; // rax
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rbx
  int v59; // edi
  unsigned int v60; // r12d
  int v61; // edx
  int v62; // eax
  __m128i v63; // xmm0
  int v64; // ecx
  int v65; // edx
  __int64 OldRedirectionBitmap; // rax
  __int64 v67; // r10
  __int64 v68; // r15
  int v69; // eax
  int v70; // eax
  __int64 Spb; // rax
  unsigned int v72[2]; // [rsp+28h] [rbp-99h]
  __int64 v73; // [rsp+30h] [rbp-91h]
  __int64 *v74; // [rsp+38h] [rbp-89h]
  int v75; // [rsp+68h] [rbp-59h]
  __int64 v76; // [rsp+70h] [rbp-51h] BYREF
  int v77; // [rsp+78h] [rbp-49h]
  int v78; // [rsp+7Ch] [rbp-45h]
  int valid; // [rsp+80h] [rbp-41h]
  int v80; // [rsp+84h] [rbp-3Dh]
  __int64 v81; // [rsp+88h] [rbp-39h] BYREF
  __m128i v82; // [rsp+98h] [rbp-29h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v85; // [rsp+B8h] [rbp-9h]
  HRGN v86; // [rsp+C0h] [rbp-1h]
  __m128i v87; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v88; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v83 = a1;
  v88 = 0LL;
  v2 = 0LL;
  v3 = 0;
  ++gdwDeferWinEvent;
  v81 = 0LL;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  valid = BltValidInit((struct tagSMWP *)v1, v4);
  if ( !valid )
    goto LABEL_37;
  v6 = 0LL;
  v7 = *(_DWORD *)(v1 + 28) - 1;
  v8 = *(_QWORD **)(v1 + 40);
  if ( v7 < 0 )
    goto LABEL_37;
  do
  {
    LOBYTE(v5) = 1;
    v9 = HMValidateHandleNoSecure(*v8, v5);
    v10 = v9;
    if ( v9 && *(_QWORD *)(v9 + 104) && IsStillWindowC(v8[1], v5) )
    {
      if ( v8[14] == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v10 + 104) != GetDesktopWindow(v10)) )
      {
        v8[14] = 0LL;
      }
      v11 = v8;
      if ( v6 )
        v11 = v6;
      v6 = v11;
    }
    else
    {
      *v8 = 0LL;
      *((_DWORD *)v8 + 8) = 6159;
    }
    v8 += 21;
    --v7;
  }
  while ( v7 >= 0 );
  if ( v6 )
  {
    v12 = *(_QWORD *)(_HMObjectFromHandle(*v6) + 104);
    v85 = v12;
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v12, (struct tagSMWP *)v1);
    v80 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v58 = *(_QWORD *)(v1 + 40);
      v59 = *(_DWORD *)(v1 + 28);
      while ( --v59 >= 0 )
      {
        if ( *(_QWORD *)v58 && (*(_DWORD *)(v58 + 32) & 8) == 0 )
        {
          _HMObjectFromHandle(*(_QWORD *)v58);
          v61 = *(_DWORD *)(v58 + 72);
          if ( v61 || *(_DWORD *)(v58 + 76) )
          {
            v64 = -*(_DWORD *)(v58 + 76);
            v65 = -v61;
            v82 = *(__m128i *)(v58 + 56);
            v63 = v82;
            v82.m128i_i32[2] += v65;
            v82.m128i_i32[3] += v64;
            v82.m128i_i32[1] += v64;
            v87 = v63;
            v82.m128i_i32[0] = v65 + _mm_cvtsi128_si32(v63);
            UnionRect(&v88, v87.m128i_i32, v82.m128i_i32);
            v13 = 1;
            v80 = 1;
          }
          else
          {
            v13 = v80;
          }
        }
        v58 += 168LL;
      }
    }
    LODWORD(v76) = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 488LL) >> 14) & 2;
    zzzLockDisplayAreaAndInvalidateDCCache(
      v12,
      (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 2) != 0 ? 28 : 26,
      (unsigned __int64)&v88 & -(__int64)(v13 != 0));
    v16 = 0;
    v17 = 96;
    v18 = *(__int64 **)(v1 + 40);
    v19 = (unsigned int)(*(_DWORD *)(v1 + 28) - 1);
    v75 = 96;
    v20 = ghrgnInvalidSum;
    v86 = (HRGN)ghrgnInvalidSum;
    v78 = 0;
    v77 = v19;
    if ( (int)v19 >= 0 )
    {
      v21 = v76;
      v22 = v19;
      while ( 1 )
      {
        --valid;
        v19 = *v18;
        if ( *v18 )
          break;
LABEL_20:
        v18 += 21;
        v77 = --v22;
        if ( v22 < 0 )
        {
          v12 = v85;
          LODWORD(v76) = v21;
          v1 = v83;
          goto LABEL_22;
        }
      }
      if ( (v18[4] & 8) != 0 )
      {
LABEL_19:
        v22 = v77;
        goto LABEL_20;
      }
      _HMObjectFromHandle(v19);
      v21 |= 1u;
      v28 = _HMObjectFromHandle(*v18);
      v29 = *((_DWORD *)v18 + 22);
      v30 = v28;
      if ( (*(_BYTE *)(*(_QWORD *)(v28 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v28);
        v20 = *(_QWORD *)(v30 + 40);
        if ( !RedirectionBitmap && (*(_BYTE *)(v20 + 27) & 0x20) == 0 )
          goto LABEL_78;
        v32 = *(_DWORD *)(v20 + 232);
        if ( (v32 & 0x20) == 0 && (*((_DWORD *)v18 + 39) & 7) == 0 )
          goto LABEL_78;
        *(_DWORD *)(v20 + 232) = v32 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v30, ghrgnVisNew) )
        v29 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckRect((struct tagWND *)v30, (struct tagRECT *)(*(_QWORD *)(v30 + 40) + 88LL), 1u);
      if ( (v29 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v30 + 40) + 136LL) != 1LL )
      {
        v37 = *((_DWORD *)v18 + 16);
        v38 = *((_DWORD *)v18 + 14);
        if ( v37 > v38 )
        {
          v39 = *((_DWORD *)v18 + 17);
          v40 = *((_DWORD *)v18 + 15);
          if ( v39 > v40 )
          {
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v38 - *((_DWORD *)v18 + 18)),
              (unsigned int)(v40 - *((_DWORD *)v18 + 19)),
              (unsigned int)(v37 - *((_DWORD *)v18 + 18)),
              v39 - *((_DWORD *)v18 + 19));
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v18[12], 1LL) >= 2
              && ((v17 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( v18[9] )
                GreOffsetRgn(ghrgnValid, *((unsigned int *)v18 + 18), *((unsigned int *)v18 + 19));
              v41 = v30;
              v42 = 0LL;
              while ( 1 )
              {
                v43 = *(_QWORD *)(v41 + 40);
                v44 = *(_QWORD *)(v43 + 136);
                if ( v44 == 1 )
                  break;
                if ( v44 )
                {
                  v84 = *(_QWORD *)(v43 + 136);
                  if ( v42 )
                  {
                    v62 = PhysicalToLogicalInPlaceRgn(v42, (__int64)&v84);
                    v44 = v84;
                    LODWORD(v76) = v62;
                  }
                  else
                  {
                    LODWORD(v76) = 0;
                  }
                  v60 = GreCombineRgn(ghrgnValid, ghrgnValid, v44, 4LL);
                  if ( (_DWORD)v76 )
                    GreDeleteObject(v44);
                  if ( v60 < 2 )
                    break;
                  v42 = v41;
                }
                v41 = *(_QWORD *)(v41 + 104);
                if ( !v41 || (*(_BYTE *)(*(_QWORD *)(v41 + 40) + 31LL) & 2) != 0 )
                {
                  v45 = v18[15];
                  if ( (!v45 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v45, 4LL) >= 2)
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
      v29 |= 4u;
LABEL_54:
      if ( (v29 & 4) == 0 && (*((_DWORD *)v18 + 18) || *((_DWORD *)v18 + 19)) )
      {
        StyleWindow = GetStyleWindow(v30, 2568);
        v48 = StyleWindow;
        if ( StyleWindow && (v49 = GetRedirectionBitmap(StyleWindow)) != 0 )
        {
          if ( v30 != v48 )
          {
            v50 = v49;
            v74 = v18 + 7;
            v73 = ghrgnValid;
            *(_QWORD *)v72 = ghdcMem;
LABEL_103:
            UpdateSpriteArea(v48, v49, v50);
            goto LABEL_55;
          }
          if ( (*((_DWORD *)v18 + 39) & 1) != 0
            || *((_DWORD *)v18 + 18) != *((_DWORD *)v18 + 4) - *((_DWORD *)v18 + 20)
            || *((_DWORD *)v18 + 19) != *((_DWORD *)v18 + 5) - *((_DWORD *)v18 + 21) )
          {
            OldRedirectionBitmap = GetOldRedirectionBitmap(v48);
            v67 = v49;
            if ( OldRedirectionBitmap )
              v67 = OldRedirectionBitmap;
            v50 = v67;
            v74 = v18 + 7;
            v73 = ghrgnValid;
            *(_QWORD *)v72 = ghdcMem2;
            goto LABEL_103;
          }
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 26LL) & 8) == 0 )
        {
          v68 = v81;
          if ( !v81 )
          {
            v68 = *(_QWORD *)(gpDispInfo + 56LL);
            v81 = v68;
          }
          GreHintDCWnd(v68, *(_QWORD *)v30, 0, 0, 0);
          GreSelectVisRgn(v68, ghrgnValid, 2LL);
          NtGdiBitBltInternal(
            v68,
            *((unsigned int *)v18 + 14),
            *((unsigned int *)v18 + 15),
            (unsigned int)(*((_DWORD *)v18 + 16) - *((_DWORD *)v18 + 14)),
            *((_DWORD *)v18 + 17) - *((_DWORD *)v18 + 15),
            v68,
            *((_DWORD *)v18 + 14) - *((_DWORD *)v18 + 18),
            *((_DWORD *)v18 + 15) - *((_DWORD *)v18 + 19),
            13369376,
            0,
            1);
          GreHintDCWnd(v68, 0, 0, 0, 0);
        }
      }
LABEL_55:
      if ( *(char *)(*(_QWORD *)(v30 + 40) + 16LL) >= 0
        || (v29 & 2) != 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v18[12], ghrgnVisNew, 4u, v29) )
      {
        v33 = (HRGN)v18[12];
        if ( v33 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v33, ghrgnVisNew, 2u, v29) )
          {
LABEL_77:
            v17 = v75;
            goto LABEL_78;
          }
        }
        else
        {
          v87 = *(__m128i *)(*(_QWORD *)(v85 + 40) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v87, &v87, v30, v85);
          SetRectRgnIndirect(ghrgnInvalid, &v87);
        }
LABEL_58:
        v17 = v75;
        if ( (v29 & 4) == 0 )
        {
          if ( (v75 & 0x20) != 0 )
          {
            v51 = 5LL;
            v52 = 0LL;
            v53 = ghrgnValidSum;
          }
          else
          {
            v51 = 2LL;
            v53 = ghrgnValidSum;
            v52 = ghrgnValidSum;
          }
          GreCombineRgn(v53, ghrgnValid, v52, v51);
          v17 = v75 & 0xFFFFFFDF;
          v75 &= ~0x20u;
        }
        if ( (v17 & 0x20) != 0 )
        {
          if ( (v29 & 4) != 0 )
          {
LABEL_61:
            if ( *(char *)(*(_QWORD *)(v30 + 40) + 16LL) < 0 )
            {
              v70 = *((_DWORD *)v18 + 8);
              if ( (v70 & 0x40) == 0 && (v70 & 0x87) != 7 )
              {
                Spb = FindSpb(v30);
                FreeSpb(Spb);
              }
            }
            v19 = v18[12];
            if ( v19 )
            {
              GreDeleteObject(v19);
              v18[12] = 0LL;
            }
            v16 = v78;
            if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 21LL) & 1) == 0 && (v18[4] & 0x40) != 0 )
              v16 = ++v78;
            if ( (v29 & 8) != 0 )
              goto LABEL_73;
            if ( (v29 & 5) == 4 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v82);
              xxxInternalInvalidate((struct tagWND *)v30, (HRGN)1, 0x485u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v82);
            }
            v76 = ghrgnInvalid;
            v34 = LogicalToPhysicalInPlaceRgnWorker(v30, &v76, 0LL);
            v35 = v34;
            if ( (v17 & 0x40) != 0 )
            {
              if ( !valid && !v34 )
              {
                v86 = (HRGN)ghrgnInvalid;
LABEL_72:
                v17 &= ~0x40u;
                v75 = v17;
LABEL_73:
                v2 = v81;
                goto LABEL_19;
              }
              v54 = 5LL;
              v56 = 0LL;
              v55 = ghrgnInvalidSum;
            }
            else
            {
              v54 = 2LL;
              v55 = ghrgnInvalidSum;
              v56 = ghrgnInvalidSum;
            }
            v57 = v76;
            GreCombineRgn(v55, v76, v56, v54);
            if ( v35 )
              GreDeleteObject(v57);
            goto LABEL_72;
          }
          v46 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v46 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v46, 4LL) > 1 )
          goto LABEL_61;
LABEL_78:
        *(_DWORD *)(*(_QWORD *)(v30 + 40) + 232LL) &= ~2u;
        LOBYTE(v29) = v29 | 8;
        goto LABEL_61;
      }
      v69 = RestoreSpb(v30, ghrgnInvalid, &v81);
      if ( v69 )
      {
        if ( v69 == 2 && (v75 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v29 & 1) != 0 )
          goto LABEL_159;
      }
      else if ( (v29 & 1) != 0 )
      {
        goto LABEL_77;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_159:
      if ( (v29 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        LOBYTE(v29) = v29 | 0x20;
      goto LABEL_58;
    }
LABEL_22:
    if ( v80 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), &v88);
    v23 = *(__int64 **)(v1 + 40);
    v24 = *(_DWORD *)(v1 + 28);
    while ( --v24 >= 0 )
    {
      v19 = *v23;
      if ( *v23 )
      {
        v20 = _HMObjectFromHandle(v19);
        if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap(v20);
      }
      v23 += 21;
    }
    if ( (v17 & 0x40) == 0 )
    {
      if ( v16 != *(_DWORD *)(v1 + 28) || (v36 = 69, v12 == GetDesktopWindow(v12)) )
        v36 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v83);
      xxxInternalInvalidate((struct tagWND *)v12, v86, v36);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v83);
    }
    if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
      GreClientRgnDone(v19, v20, v14, v15, *(_QWORD *)v72, v73, v74);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 )
    {
      GreSelectVisRgn(v2, 0LL, 1LL);
      GreGetBounds(v2, 0LL, 0LL);
    }
    v3 = v76;
  }
  else
  {
LABEL_37:
    v26 = *(_DWORD *)(v1 + 28) - 1;
    if ( v26 >= 0 )
    {
      v27 = (_QWORD *)(*(_QWORD *)(v1 + 40) + 96LL);
      do
      {
        if ( *v27 )
        {
          GreDeleteObject(*v27);
          *v27 = 0LL;
        }
        v27 += 21;
        --v26;
      }
      while ( v26 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return v3;
}
