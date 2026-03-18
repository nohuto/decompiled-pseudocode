/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0214F90
 * Callers:
 *     xxxPointerSpeedHitTest @ 0x1C02175AC (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C02178C4 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00C08F4 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C0214C24 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1C0217D38 (xxxTouchTargetWindow.c)
 */

struct tagWND *__fastcall TopLevelTouchTarget(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        int a5)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  struct tagPOINT v8; // rbx
  struct tagPOINT v9; // rdi
  struct tagTOUCHTARGETINGCONTACT *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  int v15; // esi
  __int64 v16; // rax
  int v17; // esi
  const struct _D3DMATRIX *v18; // r8
  struct tagRECT *ScreenRect; // rax
  const struct _D3DMATRIX *v20; // r8
  __m128i v21; // xmm6
  const struct _D3DMATRIX *v22; // r8
  struct tagRECT *v23; // rax
  const struct _D3DMATRIX *v24; // r8
  __m128i v25; // xmm6
  const struct _D3DMATRIX *v26; // r8
  struct tagRECT *v27; // rax
  const struct _D3DMATRIX *v28; // r8
  __m128i v29; // xmm6
  const struct _D3DMATRIX *v30; // r8
  struct tagRECT *v31; // rax
  const struct _D3DMATRIX *v32; // r8
  __m128i v33; // xmm6
  struct tagPOINT *v34; // rax
  _QWORD v36[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h]
  struct tagPOINT v38; // [rsp+70h] [rbp-98h] BYREF
  char v39[8]; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v40; // [rsp+80h] [rbp-88h] BYREF
  struct tagRECT v41; // [rsp+90h] [rbp-78h] BYREF
  struct tagRECT v42; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v43; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v44; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v45; // [rsp+D0h] [rbp-38h] BYREF
  struct tagRECT v46; // [rsp+E0h] [rbp-28h] BYREF
  struct tagRECT v47; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v48; // [rsp+158h] [rbp+50h] BYREF
  struct tagTOUCHTARGETINGCONTACT *v49; // [rsp+160h] [rbp+58h]
  struct tagPOINT *v50; // [rsp+168h] [rbp+60h]

  v50 = a3;
  v49 = a2;
  v37 = 0xFFE00000000LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v11 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v39);
  if ( !g_bHitTestDwmFirstForTouch && (unsigned __int8)IsInputThread(0LL, v12, v13) )
    UserAtomicCheck::Detach((UserAtomicCheck *)v39);
  v14 = *((_QWORD *)a1 + 14);
  if ( !v14 )
    goto LABEL_20;
  do
  {
    LOWORD(v48) = 0;
    if ( !*((_DWORD *)v11 + 44) && !*((_DWORD *)v11 + 45) )
      break;
    v38 = *v50;
    v15 = xxxTouchTargetWindow((struct tagWND *)v14, v11, &v38, (__int64)&v48, (__int64)a4, a5);
    v16 = HMValidateHandleNoSecure(v7, 1);
    v6 = v16;
    if ( v15 )
    {
      if ( !v16 )
        goto LABEL_14;
      v17 = a5;
      v18 = *(const struct _D3DMATRIX **)(v16 + 216);
      *(_OWORD *)&v36[1] = *(_OWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
      ScreenRect = GetScreenRect(&v40, a5, v18, (struct tagRECT *)&v36[1]);
      v20 = *(const struct _D3DMATRIX **)(v14 + 216);
      v21 = *(__m128i *)ScreenRect;
      *(_OWORD *)&v36[1] = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(v21) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v41, v17, v20, (struct tagRECT *)&v36[1]),
                                         8)) )
        goto LABEL_13;
      v22 = *(const struct _D3DMATRIX **)(v14 + 216);
      *(_OWORD *)&v36[1] = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
      v23 = GetScreenRect(&v42, v17, v22, (struct tagRECT *)&v36[1]);
      v24 = *(const struct _D3DMATRIX **)(v6 + 216);
      v25 = *(__m128i *)v23;
      *(_OWORD *)&v36[1] = *(_OWORD *)(*(_QWORD *)(v6 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(v25) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v43, v17, v24, (struct tagRECT *)&v36[1]),
                                         8)) )
        goto LABEL_13;
      v26 = *(const struct _D3DMATRIX **)(v6 + 216);
      *(_OWORD *)&v36[1] = *(_OWORD *)(*(_QWORD *)(v6 + 40) + 88LL);
      v27 = GetScreenRect(&v44, v17, v26, (struct tagRECT *)&v36[1]);
      v28 = *(const struct _D3DMATRIX **)(v14 + 216);
      v29 = *(__m128i *)v27;
      *(_OWORD *)&v36[1] = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v29, 4)) >= _mm_srli_si128(
                                                          *(__m128i *)GetScreenRect(
                                                                        &v45,
                                                                        v17,
                                                                        v28,
                                                                        (struct tagRECT *)(v36 + 8)),
                                                          8).m128i_i32[1]
        || (v30 = *(const struct _D3DMATRIX **)(v14 + 216),
            *(_OWORD *)&v36[1] = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL),
            v31 = GetScreenRect(&v46, v17, v30, (struct tagRECT *)&v36[1]),
            v32 = *(const struct _D3DMATRIX **)(v6 + 216),
            v33 = *(__m128i *)v31,
            *(_OWORD *)&v36[1] = *(_OWORD *)(*(_QWORD *)(v6 + 40) + 88LL),
            _mm_cvtsi128_si32(_mm_srli_si128(v33, 4)) >= _mm_srli_si128(
                                                           *(__m128i *)GetScreenRect(
                                                                         &v47,
                                                                         v17,
                                                                         v32,
                                                                         (struct tagRECT *)(v36 + 8)),
                                                           8).m128i_i32[1]) )
      {
LABEL_13:
        if ( (unsigned int)(unsigned __int16)v48 + 4095 < WORD2(v37) + ((_DWORD)v37 == 0 ? 0xFFF : 0) )
        {
LABEL_14:
          v6 = v14;
          LODWORD(v37) = 0;
          v7 = *(_QWORD *)v14;
          v8 = *a4;
          v9 = v38;
          HIDWORD(v37) = (unsigned __int16)v48;
        }
      }
    }
    v14 = *(_QWORD *)(v14 + 88);
    v11 = v49;
  }
  while ( v14 );
  if ( v6 )
  {
    v34 = v50;
    *a4 = v8;
    *v34 = v9;
  }
  else
  {
LABEL_20:
    *a4 = 0LL;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v39);
  return (struct tagWND *)v6;
}
