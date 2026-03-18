/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0070824
 * Callers:
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     _ScrollDC @ 0x1C00F67C4 (_ScrollDC.c)
 * Callees:
 *     UnionRect @ 0x1C0023B50 (UnionRect.c)
 *     GetDCOrgOnScreen @ 0x1C005FBB0 (GetDCOrgOnScreen.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     GreTransformPoints @ 0x1C00F211C (GreTransformPoints.c)
 *     SubtractRect @ 0x1C01029EC (SubtractRect.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C014F974 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  HRGN v10; // rbx
  int v11; // r12d
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned int ClipBox; // esi
  __m128i *v16; // rcx
  __m128i v17; // xmm6
  int v18; // r8d
  __int64 v19; // rcx
  HRGN v20; // rdi
  int v22; // eax
  __int64 v23; // rcx
  struct tagRECT v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rdx
  int v27; // r9d
  __int64 v28; // r8
  int v29; // r10d
  __int64 v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // edi
  int v35; // ecx
  __int32 v36; // ecx
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  HRGN v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+80h] [rbp-80h]
  HRGN EmptyRgn; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  struct tagRECT *v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+C0h] [rbp-40h] BYREF
  int v53; // [rsp+C4h] [rbp-3Ch]
  int v54; // [rsp+C8h] [rbp-38h]
  unsigned int v55; // [rsp+CCh] [rbp-34h]
  __m128i v56; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v57; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v58; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v59; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v60; // [rsp+110h] [rbp+10h] BYREF
  __int128 v61; // [rsp+120h] [rbp+20h] BYREF
  __m128i v62; // [rsp+130h] [rbp+30h]

  v10 = a8;
  v11 = a3;
  v51 = a5;
  v13 = 0LL;
  v43 = a7;
  v59 = 0LL;
  v56 = 0LL;
  v61 = 0LL;
  LODWORD(v47) = a3;
  v58 = 0LL;
  LODWORD(v46) = 0;
  v60 = 0LL;
  EmptyRgn = 0LL;
  v57 = 0LL;
  v14 = *(_QWORD *)(gpDispInfo + 40LL);
  v40 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v42 = 0LL;
  v44 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v14) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v59, 1LL);
  if ( !ClipBox )
    goto LABEL_97;
  v16 = (__m128i *)&v59;
  if ( v51 )
    v16 = (__m128i *)v51;
  v17 = *v16;
  v56 = *v16;
  if ( a6 )
    v61 = (__int128)*a6;
  LODWORD(v50) = a4;
  LODWORD(v51) = v11;
  if ( a10 )
  {
    GreTransformPoints((_DWORD)a2, (unsigned int)&v59, (unsigned int)&v59, 2, 1);
    GreTransformPoints((_DWORD)a2, (unsigned int)&v56, (unsigned int)&v56, 2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v35 = v59;
      LODWORD(v59) = DWORD2(v59);
      DWORD2(v59) = v35;
      v36 = v56.m128i_i32[0];
      v56.m128i_i32[0] = v56.m128i_i32[2];
      v56.m128i_i32[2] = v36;
      LODWORD(v46) = 1;
    }
    if ( a6 )
    {
      GreTransformPoints((_DWORD)a2, (unsigned int)&v61, (unsigned int)&v61, 2, 1);
      if ( (_DWORD)v46 )
      {
        v37 = v61;
        LODWORD(v61) = DWORD2(v61);
        DWORD2(v61) = v37;
      }
    }
    v53 = 0;
    v52 = 0;
    v55 = a4;
    v54 = v11;
    GreTransformPoints((_DWORD)a2, (unsigned int)&v52, (unsigned int)&v52, 2, 1);
    v11 = v54 - v52;
    v17 = v56;
    a4 = v55 - v53;
    LODWORD(v47) = v54 - v52;
  }
  if ( ClipBox == 1 )
  {
    v20 = 0LL;
    goto LABEL_23;
  }
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_97;
    v17 = v56;
    v18 = 1;
    v44 = 1;
  }
  else
  {
    v18 = 0;
  }
  v58.left = v11 + _mm_cvtsi128_si32(v17);
  v58.right = v11 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  v58.top = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
  v19 = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 12));
  v58.bottom = v19;
  if ( !a6 )
  {
LABEL_28:
    if ( ClipBox != 2 )
    {
LABEL_62:
      if ( v44 || (EmptyRgn = (HRGN)CreateEmptyRgn(v19), (unsigned int)GetTrueClipRgn(a2, EmptyRgn)) )
      {
        v48 = CreateEmptyRgn(v19);
        SetRectRgnIndirect(v48, &v56);
        if ( (unsigned int)GreCombineRgn(v48, v48, EmptyRgn, 1LL) )
        {
          v49 = CreateEmptyRgn(v32);
          SetRectRgnIndirect(v49, &v58);
          if ( (unsigned int)GreCombineRgn(v49, v49, EmptyRgn, 1LL) )
          {
            v34 = 1;
            if ( v43 == (HRGN)1 )
              goto LABEL_122;
            v42 = CreateEmptyRgn(v33);
            if ( (unsigned int)GreCombineRgn(v42, v48, 0LL, 5LL) )
            {
              GreOffsetRgn(v42, (unsigned int)v47, a4);
              v34 = GreCombineRgn(v42, v42, v49, 1LL);
              if ( (unsigned __int64)v43 > 1 )
              {
                v13 = CreateEmptyRgn(v33);
                if ( !v34 )
                  goto LABEL_116;
                if ( v34 != 1 )
                {
                  v46 = 0LL;
                  GetDCOrgOnScreen((__int64)a2, &v46);
                  GreCombineRgn(v13, v43, 0LL, 5LL);
                  GreOffsetRgn(v13, (unsigned int)-(int)v46, (unsigned int)-HIDWORD(v46));
                  v34 = GreCombineRgn(v42, v42, v13, 4LL);
                }
                if ( !v34 )
                  goto LABEL_116;
                if ( v34 != 1 )
                {
                  GreOffsetRgn(v13, (unsigned int)v47, a4);
                  v34 = GreCombineRgn(v42, v42, v13, 4LL);
                }
              }
              if ( v34 )
              {
LABEL_122:
                if ( !a8 )
                {
                  if ( !a9 )
                    goto LABEL_81;
                  if ( !v13 )
                    v13 = CreateEmptyRgn(v33);
                  v10 = (HRGN)v13;
                  if ( !v13 )
                    goto LABEL_81;
                }
                ClipBox = GreCombineRgn(v10, v49, v48, 2LL);
                if ( ClipBox )
                {
                  if ( v34 != 1 )
                    ClipBox = GreCombineRgn(v10, v10, v42, 4LL);
                  if ( !a9 || (unsigned int)GreGetRgnBox(v10, a9) )
                  {
LABEL_81:
                    if ( v34 != 1 )
                    {
                      v43 = 0LL;
                      GreGetDCOrg(a2, &v43);
                      v30 = v42;
                      GreOffsetRgn(v42, (unsigned int)v43, HIDWORD(v43));
                      GreSelectVisRgnShared(a2, v42, 4LL);
                      if ( a10 )
                        GreTransformPoints((_DWORD)a2, (unsigned int)&v58, (unsigned int)&v58, 2, 0);
                      NtGdiBitBltInternal(
                        a2,
                        (unsigned int)v58.left,
                        (unsigned int)v58.top,
                        (unsigned int)(v58.right - v58.left),
                        v58.bottom - v58.top,
                        a2,
                        v58.left - (_DWORD)v51,
                        v58.top - v50,
                        13369376,
                        0,
                        0);
                      GreSelectVisRgnShared(a2, v42, 4LL);
                      v25 = v40;
                      goto LABEL_48;
                    }
                    v25 = v40;
LABEL_47:
                    v30 = v42;
LABEL_48:
                    if ( a10 && a9 )
                      GreTransformPoints((_DWORD)a2, (_DWORD)a9, (_DWORD)a9, 2, 0);
                    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                    GreDeleteObject(EmptyRgn);
                    GreDeleteObject(v25);
                    GreDeleteObject(v13);
                    GreDeleteObject(v48);
                    GreDeleteObject(v49);
                    GreDeleteObject(v30);
                    return ClipBox;
                  }
                }
              }
            }
          }
        }
      }
LABEL_116:
      v25 = v40;
      goto LABEL_117;
    }
LABEL_29:
    if ( (unsigned __int64)v43 <= 1 )
    {
      v62 = v17;
      IntersectRect(&v58, &v58, &v59);
      v22 = IntersectRect(&v56, &v56, &v59);
      LODWORD(v46) = v22;
      if ( v43 != (HRGN)1 )
      {
        LODWORD(v57) = v11 + v56.m128i_i32[0];
        DWORD2(v57) = v11 + v56.m128i_i32[2];
        DWORD1(v57) = a4 + v56.m128i_i32[1];
        HIDWORD(v57) = a4 + v56.m128i_i32[3];
        IntersectRect(&v57, &v57, &v58);
        v22 = v46;
      }
      if ( v22 )
      {
        if ( (unsigned int)IntersectRect(&v60, &v56, &v58) )
        {
          if ( v11 && a4 )
            goto LABEL_105;
          UnionRect(&v60, v56.m128i_i32, &v58.left);
          SubtractRect(&v60, &v60, &v57);
          v24 = v60;
LABEL_36:
          if ( a9 )
            *a9 = v24;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v60) )
            goto LABEL_116;
          ClipBox = 2;
          if ( v60.left >= v60.right || v60.top >= v60.bottom )
            ClipBox = 1;
          goto LABEL_41;
        }
        v38 = v56.m128i_i64[0] - v62.m128i_i64[0];
        if ( v56.m128i_i64[0] == v62.m128i_i64[0] )
          v38 = v56.m128i_i64[1] - v62.m128i_i64[1];
        if ( v38 )
        {
LABEL_105:
          if ( a8 || a9 && (v13 = CreateEmptyRgn(v23), (v10 = (HRGN)v13) != 0LL) )
          {
            v39 = v40;
            if ( !v40 )
            {
              v39 = CreateEmptyRgn(v23);
              v40 = v39;
            }
            SetRectRgnIndirect(v39, &v56);
            SetRectRgnIndirect(v10, &v58);
            v25 = v40;
            if ( !(unsigned int)GreCombineRgn(v10, v10, v40, 2LL) )
              goto LABEL_117;
            SetRectRgnIndirect(v40, &v57);
            ClipBox = GreCombineRgn(v10, v10, v40, 4LL);
            if ( !ClipBox || a9 && !(unsigned int)GreGetRgnBox(v10, a9) )
              goto LABEL_117;
            goto LABEL_42;
          }
LABEL_41:
          v25 = v40;
LABEL_42:
          v26 = (unsigned int)v57;
          v27 = DWORD2(v57);
          if ( (int)v57 < SDWORD2(v57) )
          {
            v28 = DWORD1(v57);
            v29 = HIDWORD(v57);
            if ( SDWORD1(v57) < SHIDWORD(v57) )
            {
              if ( a10 )
              {
                GreTransformPoints((_DWORD)a2, (unsigned int)&v57, (unsigned int)&v57, 2, 0);
                v29 = HIDWORD(v57);
                v27 = DWORD2(v57);
                v28 = DWORD1(v57);
                v26 = (unsigned int)v57;
              }
              NtGdiBitBltInternal(
                a2,
                v26,
                v28,
                (unsigned int)(v27 - v26),
                v29 - v28,
                a2,
                v26 - (_DWORD)v51,
                v28 - v50,
                13369376,
                0,
                0);
            }
          }
          goto LABEL_47;
        }
        v24 = (struct tagRECT)v56;
      }
      else
      {
        v24 = v58;
      }
      v60 = v24;
      goto LABEL_36;
    }
    goto LABEL_62;
  }
  if ( (unsigned __int64)v43 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v59, &v59, &v61) )
    {
      v20 = EmptyRgn;
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  if ( !v18 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v19);
    v20 = EmptyRgn;
    if ( (unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
    {
      v44 = 1;
      goto LABEL_57;
    }
LABEL_97:
    v25 = 0LL;
LABEL_117:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDeleteObject(EmptyRgn);
    GreDeleteObject(v25);
    GreDeleteObject(v13);
    GreDeleteObject(v48);
    GreDeleteObject(v49);
    GreDeleteObject(v42);
    return 0LL;
  }
  v20 = EmptyRgn;
LABEL_57:
  v40 = CreateEmptyRgn(v19);
  SetRectRgnIndirect(v40, &v61);
  v31 = GreCombineRgn(v20, v40, v20, 1LL);
  ClipBox = v31;
  if ( !v31 )
    goto LABEL_116;
  if ( v31 != 1 )
  {
    if ( v31 == 2 )
    {
      if ( !(unsigned int)GreGetRgnBox(v20, &v59) )
        goto LABEL_116;
      v17 = v56;
      goto LABEL_29;
    }
    v17 = v56;
    goto LABEL_28;
  }
LABEL_23:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_116;
  if ( a9 )
    *a9 = 0LL;
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(v20);
  GreDeleteObject(v40);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
