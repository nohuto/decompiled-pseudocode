/*
 * XREFs of ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C020B49C
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D400 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C020E19C (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01D0718 (ReduceArrangedRectangleByFrameMargin.c)
 *     TransformRectAroundPoint @ 0x1C01E5794 (TransformRectAroundPoint.c)
 */

bool __fastcall MigrateRectMonitors(
        struct tagWND *a1,
        __m128i *a2,
        struct tagMONITOR *a3,
        struct tagRECT *a4,
        struct tagMONITOR *a5,
        struct tagMONITOR *a6,
        struct _MOVESIZEDATA *a7,
        char a8)
{
  __m128i v8; // xmm7
  __int128 v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  int v14; // esi
  __m128i v15; // xmm0
  int v16; // esi
  int v17; // edi
  __m128i v18; // xmm6
  __m128i v19; // xmm0
  INT v20; // r13d
  INT v21; // r14d
  INT v22; // edx
  INT v23; // r15d
  int v24; // r8d
  int v25; // eax
  __int64 v26; // rsi
  INT v27; // eax
  INT v28; // edx
  INT v29; // eax
  INT v30; // edx
  INT v31; // r8d
  INT v32; // eax
  INT v33; // eax
  int v34; // ecx
  LONG top; // r11d
  LONG v36; // r9d
  LONG v37; // r10d
  int v38; // edx
  LONG v39; // r11d
  int v40; // r14d
  LONG v41; // eax
  int v42; // r13d
  INT v43; // ecx
  LONG v44; // eax
  __int64 v45; // rax
  BOOL v46; // edi
  struct _MOVESIZEDATA *v47; // rcx
  INT v48; // eax
  LONG v49; // eax
  LONG v50; // edx
  int v51; // ecx
  int v52; // r14d
  LONG v53; // eax
  int v54; // r13d
  int v56; // [rsp+38h] [rbp-A1h]
  INT c; // [rsp+3Ch] [rbp-9Dh]
  INT ca; // [rsp+3Ch] [rbp-9Dh]
  INT v59; // [rsp+44h] [rbp-95h]
  INT v60[4]; // [rsp+48h] [rbp-91h] BYREF
  int v61; // [rsp+58h] [rbp-81h]
  INT b; // [rsp+5Ch] [rbp-7Dh]
  __int128 v63; // [rsp+60h] [rbp-79h] BYREF
  __int64 v64; // [rsp+70h] [rbp-69h]
  __int64 v65; // [rsp+78h] [rbp-61h]
  struct tagWND *v66; // [rsp+80h] [rbp-59h]
  struct tagMONITOR *v67; // [rsp+88h] [rbp-51h]
  struct tagMONITOR *v68; // [rsp+90h] [rbp-49h]
  __m128i v69; // [rsp+98h] [rbp-41h] BYREF

  v8 = *a2;
  v66 = a1;
  v68 = a3;
  v69 = v8;
  v67 = a5;
  v11 = *GetMonitorWorkRectForWindow(v60, (__int64)a3, a1);
  v12 = *((_QWORD *)a1 + 5);
  v63 = v11;
  if ( (*(_BYTE *)(v12 + 233) & 3) != 0 )
  {
    ReduceArrangedRectangleByFrameMargin((__int64)a1, &v63, v69.m128i_i32);
    v8 = v69;
  }
  v64 = v8.m128i_i64[0];
  v13 = _mm_srli_si128(v8, 8);
  v14 = _mm_cvtsi128_si32(v13);
  v65 = v13.m128i_i64[0];
  v15 = _mm_srli_si128(v8, 12);
  v16 = v14 - v8.m128i_i32[0];
  v17 = _mm_cvtsi128_si32(v15) - v69.m128i_i32[1];
  c = DWORD2(v63) - v63;
  v61 = _mm_cvtsi128_si32(v15);
  v59 = HIDWORD(v63) - DWORD1(v63);
  if ( a6 )
  {
    v18 = *(__m128i *)GetMonitorWorkRectForWindow(v60, (__int64)a6, a1);
    v19 = *(__m128i *)GetMonitorWorkRectForWindow(v60, (__int64)a5, a1);
    *(_QWORD *)v60 = v19.m128i_i64[0];
    *(_QWORD *)&v60[2] = __PAIR64__(
                           _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)),
                           _mm_cvtsi128_si32(_mm_srli_si128(v19, 8)));
  }
  else
  {
    *(_OWORD *)v60 = *GetMonitorWorkRectForWindow(v60, (__int64)a5, a1);
  }
  v20 = v60[2];
  v21 = v60[0];
  v22 = v60[2] - v60[0];
  v23 = v60[3] - v60[1];
  b = v60[2] - v60[0];
  if ( v60[2] - v60[0] >= v16 )
  {
    v24 = a8 & 1;
    if ( (a8 & 1) == 0 && v23 < v17 )
    {
      v56 = a8 & 0x20;
      goto LABEL_39;
    }
    v25 = v65;
    *a4 = (struct tagRECT)v8;
    if ( v25 <= SDWORD2(v63) && ((a8 & 1) != 0 || v61 <= SHIDWORD(v63)) )
    {
      if ( c == v16 )
      {
        ca = 0;
        v26 = v64;
      }
      else
      {
        v27 = c - v16;
        v28 = v22 - v16;
        v26 = v64;
        v29 = EngMulDiv(v64 - v63, v28, v27);
        v24 = a8 & 1;
        ca = v29;
      }
      if ( !v24 && v59 != v17 )
      {
        v30 = v23 - v17;
        v31 = v59 - v17;
LABEL_22:
        v33 = EngMulDiv(v69.m128i_i32[1] - DWORD1(v63), v30, v31);
        v24 = a8 & 1;
LABEL_23:
        v34 = ca + v21 - v26;
        top = a4->top;
        v36 = v34 + a4->left;
        v37 = v34 + a4->right;
        v38 = v33 + v60[1] - v69.m128i_i32[1];
        a4->left = v36;
        a4->bottom += v38;
        v39 = v38 + top;
        a4->right = v37;
        a4->top = v39;
        if ( (a8 & 4) != 0 )
        {
          v40 = v21 - v36;
          a4->left = v36 + v40;
          v41 = v37 + v40;
        }
        else
        {
          if ( (a8 & 2) == 0 )
          {
LABEL_28:
            if ( v24 )
            {
              if ( (a8 & 8) != 0 || (v43 = *((_DWORD *)a7 + 29), v44 = v43 + v39, v23 < v43) )
                v44 = v60[3];
              a4->bottom = v44;
            }
            v45 = *(_QWORD *)&a4->left - v26;
            if ( *(_QWORD *)&a4->left == v26 )
              v45 = *(_QWORD *)&a4->right - v65;
            v46 = v45 != 0;
            goto LABEL_61;
          }
          v42 = v20 - v37;
          a4->left = v36 + v42;
          v41 = v37 + v42;
        }
        a4->right = v41;
        goto LABEL_28;
      }
    }
    else
    {
      v26 = v64;
      v32 = EngMulDiv(v64 - v63, v22, c);
      v24 = a8 & 1;
      ca = v32;
      if ( (a8 & 1) == 0 )
      {
        v31 = v59;
        v30 = v23;
        goto LABEL_22;
      }
    }
    v33 = 0;
    goto LABEL_23;
  }
  v16 = EngMulDiv(v16, v22, c);
  v56 = a8 & 0x20;
  if ( (a8 & 0x20) != 0 )
  {
    v56 = a8 & 0x20;
    if ( v16 <= *((_DWORD *)a7 + 26) )
    {
      v16 = *((_DWORD *)a7 + 26);
      v56 = a8 & 0x20;
    }
  }
LABEL_39:
  v61 = a8 & 1;
  if ( (a8 & 1) != 0 )
  {
    v17 = v23;
LABEL_41:
    v47 = a7;
    goto LABEL_42;
  }
  if ( v23 >= v17 )
    goto LABEL_41;
  v17 = EngMulDiv(v17, v23, v59);
  if ( !v56 )
    goto LABEL_41;
  v47 = a7;
  if ( v17 <= *((_DWORD *)a7 + 27) )
    v17 = *((_DWORD *)a7 + 27);
LABEL_42:
  if ( (a8 & 8) != 0
    || v16 < *((_DWORD *)v47 + 26)
    || v16 > *((_DWORD *)v47 + 28)
    || v17 < *((_DWORD *)v47 + 27)
    || v17 > *((_DWORD *)v47 + 29) )
  {
    LOBYTE(v46) = 0;
    return v46;
  }
  b = EngMulDiv(v64 - v63, b, c);
  if ( v61 )
    v48 = 0;
  else
    v48 = EngMulDiv(v69.m128i_i32[1] - DWORD1(v63), v23, v59);
  v49 = v60[1] + v48;
  v50 = v21 + b;
  a4->top = v49;
  a4->left = v50;
  a4->bottom = v17 + v49;
  v51 = v50 + v16;
  a4->right = v50 + v16;
  if ( (a8 & 4) != 0 )
  {
    v52 = v21 - v50;
    a4->left = v50 + v52;
    v53 = v51 + v52;
LABEL_59:
    a4->right = v53;
    goto LABEL_60;
  }
  if ( (a8 & 2) != 0 )
  {
    v54 = v20 - v51;
    a4->left = v50 + v54;
    v53 = v51 + v54;
    goto LABEL_59;
  }
LABEL_60:
  v46 = 1;
LABEL_61:
  if ( v46 && (*(_DWORD *)(*((_QWORD *)v66 + 5) + 288LL) & 0xF) == 2 && (a8 & 0x10) != 0 )
  {
    *(struct tagRECT *)v60 = *a4;
    TransformRectAroundPoint(
      v60,
      *(_WORD *)(*((_QWORD *)v68 + 5) + 64LL),
      0LL,
      a4,
      *(_WORD *)(*((_QWORD *)v67 + 5) + 64LL),
      *(__int64 *)v60);
  }
  return v46;
}
