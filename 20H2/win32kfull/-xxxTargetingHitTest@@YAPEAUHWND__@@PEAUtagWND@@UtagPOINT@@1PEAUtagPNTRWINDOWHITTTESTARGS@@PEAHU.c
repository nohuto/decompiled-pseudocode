/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0215CB8
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C021686C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     xxxWindowHitTest @ 0x1C0012468 (xxxWindowHitTest.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0012B48 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C004C93C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C00F8C84 (xxxDCEWindowHitTest.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C0214864 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0214D10 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C021554C (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0215628 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C02156A0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0215A70 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C021686C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C025CF6C (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C025F79C (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025FC7C (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        struct tagPOINT a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5,
        struct tagRECT *a6,
        unsigned int a7,
        int a8)
{
  _DWORD *v8; // r11
  int v10; // r9d
  unsigned int v11; // r15d
  unsigned __int64 v12; // r10
  bool v13; // zf
  __int64 v15; // rdi
  int v16; // r13d
  __int64 v17; // r12
  __int64 v18; // r8
  bool v19; // cf
  int v20; // eax
  __int64 v21; // rdx
  __int128 *v22; // rcx
  struct tagPOINT v23; // r8
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  struct tagWND *v32; // r14
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct tagWND *v39; // r15
  unsigned int v40; // r14d
  int *v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // r14d
  __int64 v49; // rdx
  unsigned __int8 *v50; // rdx
  __int64 v51; // rax
  unsigned int v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-ACh]
  unsigned int v55; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v56; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v58; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v59; // [rsp+78h] [rbp-88h]
  struct tagPOINT v60; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v61; // [rsp+88h] [rbp-78h]
  __int128 v62; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v64; // [rsp+A8h] [rbp-58h] BYREF
  struct tagPOINT v65; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v66; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v67; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v69; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v70; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v71; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v72; // [rsp+120h] [rbp+20h] BYREF
  __int128 v73; // [rsp+130h] [rbp+30h] BYREF
  __int128 v74; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v75; // [rsp+150h] [rbp+50h] BYREF
  struct tagRECT v76; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v77; // [rsp+170h] [rbp+70h] BYREF

  v8 = a5;
  v10 = a7;
  v11 = -2;
  v58 = (struct tagPOINT)a3;
  v12 = a3;
  v61 = a5;
  v13 = *(_DWORD *)(a4 + 88) == 1;
  v15 = a1;
  v59 = a6;
  v54 = a7;
  v16 = 17;
  v55 = -2;
  v17 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v57 = 0;
  v56 = 0LL;
  v53 = 0;
  if ( v13
    && !PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), a3)
    && (_WORD)v10 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v17;
  }
  v67 = *a6;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v15, v12, a4, v8, &v67, &v57, &v53, (__int64)&v56, a8, v10) )
    return v17;
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v15) )
  {
    v19 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v15) != 0;
    v20 = 1;
    v57 = 1;
    v11 = v19 ? -2 : 1;
    v55 = v11;
  }
  else
  {
    v20 = v57;
  }
  if ( v20 )
  {
    v48 = v53;
    goto LABEL_64;
  }
  v21 = *(_QWORD *)(v15 + 40);
  if ( (*(_BYTE *)(v21 + 31) & 0x20) != 0 )
    goto LABEL_51;
  v60.x = v58.x + v56.x;
  v60.y = v58.y + v56.y;
  if ( !PtInRect((_DWORD *)(v21 + 104), *(_QWORD *)&v60) )
  {
    if ( *(_DWORD *)(a4 + 88) == 1 )
      goto LABEL_51;
    v24 = *(_QWORD *)(a4 + 40);
    v68 = *v22;
    v69 = v68;
    if ( (unsigned __int16)TouchTargetingRankForRect(&v69, &v68, v24, 0LL, 0LL, v54) > 0xFFDu )
      goto LABEL_51;
    v23 = v58;
  }
  if ( *(_DWORD *)(a4 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a4 + 40) + 176LL)
      || (xxxSendNCHitTest((struct tagWND *)v15, a2, v23, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
          v11 = v55,
          ((v55 + 1) & 0xFFFFFFFD) == 0) )
    {
      v70 = *a6;
      xxxPointerInsideNCTargeting((struct tagWND *)v15, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v70, v54);
    }
  }
  if ( v11 != -2 && v11 != 1 )
  {
    v25 = *(_QWORD *)(v15 + 112);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v62 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v62;
    *((_QWORD *)&v62 + 1) = v25;
    if ( v25 )
      HMLockObject(v25);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v64 = v58;
      LogicalToPhysicalDPIPoint(&v64, &v58, *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL), 0LL);
      v27 = (__int64)xxxDCEWindowHitTest(
                       *(struct tagWND **)(v15 + 112),
                       *(_DWORD *)a4,
                       *(_QWORD *)(a4 + 8),
                       *(_QWORD *)(a4 + 16),
                       v64,
                       a4 + 32,
                       *(_DWORD *)(a4 + 36));
    }
    else
    {
      v27 = xxxWindowHitTest(*(struct tagWND **)(v15 + 112), *(_QWORD *)&v58, a4 + 32);
    }
    v17 = v27;
    if ( v27 )
    {
      v31 = ValidateHwnd(v27);
      v32 = (struct tagWND *)v31;
      if ( v31 )
      {
        *v61 = 1;
        v76 = *v59;
        TransformRectBetweenCoordinateSpaces(&v76, v59, v31, v15);
        v71 = v76;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v32, 0, 0LL, 0LL, 0, &v71, v54);
      }
    }
    ThreadUnlock1(v29, v28, v30);
LABEL_48:
    v40 = v53;
    goto LABEL_49;
  }
  if ( v54 != 2 )
  {
    v41 = (int *)(*(_QWORD *)(v15 + 40) + 104LL);
    v66 = 0LL;
    if ( (unsigned int)IntersectRect(&v66, v41, &a6->left) )
    {
      ++*(_DWORD *)(a4 + 88);
      v42 = *(_QWORD *)(v15 + 112);
      v43 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v62 = *(_QWORD *)(v43 + 416);
      *(_QWORD *)(v43 + 416) = &v62;
      *((_QWORD *)&v62 + 1) = v42;
      if ( v42 )
        HMLockObject(v42);
      v44 = *(_QWORD *)(v15 + 112);
      v73 = v66;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v44,
              v58,
              a4,
              &v73,
              (unsigned __int16)v54);
      ThreadUnlock1(v46, v45, v47);
      --*(_DWORD *)(a4 + 88);
      goto LABEL_48;
    }
LABEL_51:
    v40 = v53;
    goto LABEL_52;
  }
  v33 = *(_QWORD *)(v15 + 112);
  v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v62 = *(_QWORD *)(v34 + 416);
  *(_QWORD *)(v34 + 416) = &v62;
  *((_QWORD *)&v62 + 1) = v33;
  if ( v33 )
    HMLockObject(v33);
  if ( *(_DWORD *)(a4 + 84) )
  {
    v65 = v60;
    LogicalToPhysicalDPIPoint(&v65, &v60, *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL), 0LL);
    v35 = (__int64)xxxDCEWindowHitTest(
                     *(struct tagWND **)(v15 + 112),
                     *(_DWORD *)a4,
                     *(_QWORD *)(a4 + 8),
                     *(_QWORD *)(a4 + 16),
                     v65,
                     a4 + 32,
                     *(_DWORD *)(a4 + 36));
  }
  else
  {
    v35 = xxxWindowHitTest(*(struct tagWND **)(v15 + 112), *(_QWORD *)&v60, a4 + 32);
  }
  v17 = v35;
  if ( v35 && (v39 = (struct tagWND *)ValidateHwnd(v35)) != 0LL )
  {
    v40 = v53;
    if ( v53 )
      v40 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v53);
    if ( (unsigned int)TTBetterTarget(v39, v40, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v59, 2) )
    {
      *v61 = 1;
      v77 = *v59;
      TransformRectBetweenCoordinateSpaces(&v77, v59, v39, v15);
      v72 = v77;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v39, v40, 0LL, 0LL, 0, &v72, 2);
    }
  }
  else
  {
    v40 = v53;
  }
  ThreadUnlock1(v37, v36, v38);
LABEL_49:
  if ( !v17 )
  {
    v11 = v55;
LABEL_52:
    if ( v40 == 4093 )
      return 0LL;
    v48 = _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v40) + v40;
    if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v59, v54) )
      return *(_QWORD *)v15;
    if ( v11 == -2 || v56.x || v56.y )
    {
      xxxSendNCHitTest((struct tagWND *)v15, a2, v58, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v11 = v55;
    }
    if ( v11 == -1 )
    {
      v49 = *(_QWORD *)(a4 + 40);
      v74 = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      v48 = (unsigned __int16)TouchTargetingRankForRectDeep(&v74, v49, v59, &v56, a8);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v59, v54)
        || (xxxSendNCHitTest((struct tagWND *)v15, a2, v58, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v11 = v55,
            v55 == -1) )
      {
        *v61 = 0;
        return v17;
      }
    }
LABEL_64:
    *(_DWORD *)(a4 + 32) = v11;
    v50 = *(unsigned __int8 **)(v15 + 40);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v16 = (((v50[26] & 0x40) == 0) ^ (v50[25] >> 6) & 1) + 16;
    }
    else if ( (v50[26] & 0x40) != 0 )
    {
      v16 = 16;
    }
    if ( v11 == v16 && (v50[30] & 4) == 0 )
    {
      v51 = SizeBoxHwnd(v15);
      if ( v51 )
        v15 = v51;
    }
    if ( v57 )
      v48 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v48);
    if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v15)
      || (unsigned int)TTBetterTarget((struct tagWND *)v15, v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v59, v54) )
    {
      v75 = *v59;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, (struct tagWND *)v15, v48, &v56, 0LL, 0, &v75, v54);
    }
    return *(_QWORD *)v15;
  }
  return v17;
}
