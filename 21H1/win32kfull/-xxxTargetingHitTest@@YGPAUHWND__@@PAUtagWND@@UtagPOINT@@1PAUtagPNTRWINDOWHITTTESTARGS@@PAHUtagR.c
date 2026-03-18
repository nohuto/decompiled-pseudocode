/*
 * XREFs of ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _xxxWindowHitTest@20 @ 0x7D14C (_xxxWindowHitTest@20.c)
 *     _xxxDCEWindowHitTest@32 @ 0x9AED8 (_xxxDCEWindowHitTest@32.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@3PAIPAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x17996A (-BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT.c)
 *     ?TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z @ 0x179D48 (-TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464 (-_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@.c)
 *     ?_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x17A562 (-_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x17A5BF (-xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K.c)
 *     ?xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x17A904 (-xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 *     _SizeBoxHwnd@4 @ 0x1B6D75 (_SizeBoxHwnd@4.c)
 *     _TouchTargetingRankForRect@48 @ 0x1B902D (_TouchTargetingRankForRect@48.c)
 *     _TouchTargetingRankForRectDeep@32 @ 0x1B944B (_TouchTargetingRankForRectDeep@32.c)
 */

LONG __fastcall xxxTargetingHitTest(
        int a1,
        LONG a2,
        _DWORD *a3,
        struct tagRECT *a4,
        int a5,
        struct tagPOINT a6,
        LONG a7,
        struct tagPOINT *a8,
        LONG a9,
        LONG a10,
        LONG a11,
        LONG a12)
{
  int v12; // ebx
  bool v13; // zf
  int v14; // edx
  int *left; // esi
  int v16; // eax
  BOOL v17; // eax
  unsigned int v18; // edx
  _DWORD *v19; // ecx
  struct tagRECT *v20; // edi
  int v21; // eax
  int v22; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  HWND v25; // eax
  LONG v26; // eax
  int v27; // edi
  PKTHREAD v28; // eax
  int v29; // eax
  HWND v30; // eax
  int v31; // eax
  struct tagWND *v32; // edi
  int v33; // edx
  int v34; // esi
  PKTHREAD v35; // eax
  int v36; // eax
  LONG result; // eax
  struct tagWND *v38; // edi
  int v39; // ecx
  LONG v40; // edx
  char v41; // al
  int v42; // edx
  int v43; // eax
  struct tagRECT v44; // [esp-Ch] [ebp-98h]
  int v45; // [esp-4h] [ebp-90h]
  struct tagRECT *v46; // [esp+0h] [ebp-8Ch]
  int *v47; // [esp+0h] [ebp-8Ch]
  struct tagPNTRWINDOWHITTTESTARGS *v48; // [esp+4h] [ebp-88h]
  unsigned int v49; // [esp+4h] [ebp-88h]
  struct tagPNTRWINDOWHITTTESTARGS *v50; // [esp+4h] [ebp-88h]
  int v51; // [esp+Ch] [ebp-80h] BYREF
  int v52; // [esp+10h] [ebp-7Ch]
  int v53; // [esp+14h] [ebp-78h]
  LONG v54; // [esp+18h] [ebp-74h] BYREF
  LONG v55; // [esp+1Ch] [ebp-70h]
  _DWORD *v56; // [esp+20h] [ebp-6Ch]
  struct tagPOINT *v57; // [esp+24h] [ebp-68h] BYREF
  int v58; // [esp+28h] [ebp-64h]
  int v59; // [esp+2Ch] [ebp-60h] BYREF
  int v60; // [esp+30h] [ebp-5Ch]
  int v61; // [esp+34h] [ebp-58h]
  int v62; // [esp+38h] [ebp-54h] BYREF
  char v63; // [esp+3Fh] [ebp-4Dh]
  unsigned int v64; // [esp+40h] [ebp-4Ch] BYREF
  struct tagPOINT *v65; // [esp+44h] [ebp-48h]
  struct tagRECT v66; // [esp+48h] [ebp-44h] BYREF
  struct tagRECT *v67; // [esp+58h] [ebp-34h]
  struct tagWND *v68; // [esp+5Ch] [ebp-30h] BYREF
  int v69; // [esp+60h] [ebp-2Ch] BYREF
  __int64 v70; // [esp+64h] [ebp-28h]
  LONG bottom; // [esp+6Ch] [ebp-20h]
  struct tagRECT v72; // [esp+70h] [ebp-1Ch] BYREF

  v56 = a3;
  v72.left = a9;
  v12 = a1;
  v67 = a4;
  v66.bottom = a7;
  v72.top = a10;
  v64 = a7;
  v60 = (int)a8;
  v72.right = a11;
  v65 = a8;
  v72.bottom = a12;
  v61 = -2;
  v62 = -2;
  v51 = 0;
  v66.left = a2;
  v52 = 0;
  v53 = 0;
  v13 = *(_DWORD *)(a2 + 64) == 1;
  v59 = 0;
  v57 = 0;
  v58 = 0;
  v68 = 0;
  v66.top = 0;
  if ( v13
    && !PtInRect((_DWORD *)(*(_DWORD *)(a1 + 20) + 52), v66.bottom, v60)
    && (_WORD)v67 != 3
    && (*(_BYTE *)(v14 + 22) & 4) == 0 )
  {
    return v66.top;
  }
  left = (int *)v66.left;
  if ( !BasicTargetingWindowHitTest(
          v12,
          v66.left,
          v56,
          &v59,
          &v68,
          &v57,
          a5,
          (int)v67,
          v66.bottom,
          v60,
          v72.left,
          v72.top,
          v72.right,
          v72.bottom) )
    return v66.top;
  if ( IsCompositionInputWindow() )
  {
    v61 = CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)v12) != 0 ? -2 : 1;
    v62 = v61;
    v16 = 1;
  }
  else
  {
    v16 = v59;
  }
  v59 = v16;
  if ( v16 )
  {
    v38 = v68;
    v39 = v61;
    goto LABEL_69;
  }
  v66.bottom = *(_DWORD *)(v12 + 20);
  if ( (*(_BYTE *)(v66.bottom + 23) & 0x20) != 0 )
    goto LABEL_53;
  v54 = (LONG)v57 + v64;
  v55 = (LONG)v65 + v58;
  v17 = PtInRect((_DWORD *)(v66.bottom + 68), (int)v57 + v64, (int)v65 + v58);
  v20 = v67;
  if ( !v17 )
  {
    if ( left[16] == 1 )
      goto LABEL_53;
    left = (int *)v66.left;
    v20 = v67;
    if ( (unsigned __int16)TouchTargetingRankForRect(
                             *(struct tagPOINT **)(v66.left + 24),
                             0,
                             (int)v67,
                             *v19,
                             v19[1],
                             v19[2],
                             v19[3],
                             *v19,
                             v19[1],
                             v19[2],
                             v19[3]) > 0xFFDu )
      goto LABEL_53;
    v18 = v64;
  }
  if ( left[16] != 1 )
    goto LABEL_20;
  if ( !*(_DWORD *)(left[6] + 176)
    || (xxxSendNCHitTest(
          &v57,
          (int *)v12,
          (struct tagWND *)&v62,
          (struct tagPOINT)__PAIR64__(a6.x, (unsigned int)left),
          (struct tagPOINT)__PAIR64__(v18, a6.y),
          v65,
          (int *)v44.bottom,
          v48),
        v21 = v62,
        v61 = v62,
        v62 == -1)
    || v62 == 1 )
  {
    *(_QWORD *)&v44.left = *(_QWORD *)&v72.top;
    v44.right = v72.bottom;
    v20 = v67;
    left = (int *)v66.left;
    xxxPointerInsideNCTargeting(
      v66.left,
      (int *)v12,
      (struct tagWND *)v67,
      a6,
      (struct tagPNTRWINDOWHITTTESTARGS *)v72.left,
      v44,
      (unsigned int)v48);
LABEL_20:
    v21 = v61;
  }
  if ( v21 != -2 && v21 != 1 )
  {
    v22 = *(_DWORD *)(v12 + 60);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v51 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v51;
    v52 = v22;
    if ( v22 )
      HMLockObject(v22);
    if ( left[15] )
    {
      v66.right = v64;
      v66.bottom = (LONG)v65;
      LogicalToPhysicalDPIPoint(&v66.right, &v64, *(_DWORD *)(*(_DWORD *)(v12 + 20) + 184), 0);
      v25 = xxxDCEWindowHitTest(
              *(_DWORD *)(v12 + 60),
              *left,
              left[1],
              left[2],
              (int)(left + 4),
              left[5],
              (struct tagWND *)v66.right,
              v66.bottom);
    }
    else
    {
      v25 = (HWND)xxxWindowHitTest(*(_DWORD *)(v12 + 60), left[5], v64, (int)v65);
    }
    v66.top = (LONG)v25;
    if ( v25 )
    {
      v26 = ValidateHwnd(v25);
      v66.bottom = v26;
      if ( v26 )
      {
        v69 = v72.left;
        *v56 = 1;
        v70 = *(_QWORD *)&v72.top;
        bottom = v72.bottom;
        TransformRectBetweenCoordinateSpaces(&v69, &v72, v26, v12);
        *(_QWORD *)&v44.left = v70;
        v44.right = bottom;
        left = (int *)v66.left;
        _TTUpdateBestTarget((int *)v66.bottom, v66.left, 0, 0, 0, 0, v67, v69, v44, (unsigned int)v48);
      }
    }
    ThreadUnlock1();
LABEL_50:
    v32 = v68;
    goto LABEL_51;
  }
  if ( v20 != (struct tagRECT *)2 )
  {
    v33 = *(_DWORD *)(v12 + 20);
    v69 = 0;
    v70 = 0LL;
    bottom = 0;
    if ( IntersectRect(&v69, (int *)(v33 + 68), &v72.left) )
    {
      ++left[16];
      v34 = *(_DWORD *)(v12 + 60);
      v35 = KeGetCurrentThread();
      v36 = W32GetThreadWin32Thread(v35);
      v51 = *(_DWORD *)(v36 + 228);
      *(_DWORD *)(v36 + 228) = &v51;
      v52 = v34;
      if ( v34 )
        HMLockObject(v34);
      left = (int *)v66.left;
      v66.top = xxxWindowHitTestWithTargeting(
                  *(_DWORD *)(v12 + 60),
                  v66.left,
                  (unsigned __int16)v67,
                  v64,
                  v65,
                  v69,
                  v70,
                  HIDWORD(v70),
                  bottom);
      ThreadUnlock1();
      --left[16];
      goto LABEL_50;
    }
LABEL_53:
    v32 = v68;
    goto LABEL_54;
  }
  v27 = *(_DWORD *)(v12 + 60);
  v28 = KeGetCurrentThread();
  v29 = W32GetThreadWin32Thread(v28);
  v51 = *(_DWORD *)(v29 + 228);
  *(_DWORD *)(v29 + 228) = &v51;
  v52 = v27;
  if ( v27 )
    HMLockObject(v27);
  if ( left[15] )
  {
    v66.right = v54;
    v66.bottom = v55;
    LogicalToPhysicalDPIPoint(&v66.right, &v54, *(_DWORD *)(*(_DWORD *)(v12 + 20) + 184), 0);
    v30 = xxxDCEWindowHitTest(
            *(_DWORD *)(v12 + 60),
            *left,
            left[1],
            left[2],
            (int)(left + 4),
            left[5],
            (struct tagWND *)v66.right,
            v66.bottom);
  }
  else
  {
    v30 = (HWND)xxxWindowHitTest(*(_DWORD *)(v12 + 60), left[5], v54, v55);
  }
  v66.top = (LONG)v30;
  if ( v30 && (v31 = ValidateHwnd(v30), (v60 = v31) != 0) )
  {
    v32 = v68;
    if ( v68 )
    {
      v32 = (struct tagWND *)((char *)v32
                            + _TTWindowPenalty(
                                (int)left,
                                v12,
                                v68,
                                (struct tagPNTRWINDOWHITTTESTARGS *)v44.bottom,
                                (unsigned int)v48));
      v31 = v60;
      v68 = v32;
    }
    if ( TTBetterTarget(
           (int)v32,
           v31,
           (struct tagWND *)left,
           &v72.left,
           (struct tagPNTRWINDOWHITTTESTARGS *)2,
           (struct tagRECT *)v44.bottom,
           (unsigned int)v48) )
    {
      v69 = v72.left;
      v44.top = v60;
      *v56 = 1;
      v70 = *(_QWORD *)&v72.top;
      bottom = v72.bottom;
      TransformRectBetweenCoordinateSpaces(&v69, &v72, v44.top, v12);
      *(_QWORD *)&v44.left = v70;
      v44.right = bottom;
      v32 = v68;
      left = (int *)v66.left;
      _TTUpdateBestTarget((int *)v60, v66.left, v68, 0, 0, 0, (struct tagRECT *)2, v69, v44, (unsigned int)v48);
    }
  }
  else
  {
    v32 = v68;
  }
  ThreadUnlock1();
LABEL_51:
  result = v66.top;
  if ( v66.top )
    return result;
LABEL_54:
  if ( v32 == (struct tagWND *)4093 )
    return 0;
  v38 = (struct tagWND *)((char *)v32
                        + _TTWindowPenalty(
                            (int)left,
                            v12,
                            v32,
                            (struct tagPNTRWINDOWHITTTESTARGS *)v44.bottom,
                            (unsigned int)v48));
  v68 = v38;
  if ( !TTBetterTarget(
          (int)v38,
          v12,
          (struct tagWND *)left,
          &v72.left,
          (struct tagPNTRWINDOWHITTTESTARGS *)v67,
          v46,
          v49) )
    return *(_DWORD *)v12;
  v39 = v61;
  if ( v61 == -2 || v57 || v58 )
  {
    xxxSendNCHitTest(
      &v57,
      (int *)v12,
      (struct tagWND *)&v62,
      (struct tagPOINT)__PAIR64__(a6.x, (unsigned int)left),
      (struct tagPOINT)__PAIR64__(v64, a6.y),
      v65,
      (int *)v44.bottom,
      v48);
    v39 = v62;
  }
  if ( v39 != -1
    || (left = (int *)v66.left,
        v38 = (struct tagWND *)(unsigned __int16)TouchTargetingRankForRectDeep(
                                                   *(_DWORD *)(v66.left + 24),
                                                   &v72,
                                                   &v57,
                                                   a5,
                                                   *(_DWORD *)(*(_DWORD *)(v12 + 20) + 52),
                                                   *(_DWORD *)(*(_DWORD *)(v12 + 20) + 56),
                                                   *(_DWORD *)(*(_DWORD *)(v12 + 20) + 60),
                                                   *(_DWORD *)(*(_DWORD *)(v12 + 20) + 64)),
        v68 = v38,
        TTBetterTarget(
          (int)v38,
          v12,
          (struct tagWND *)left,
          &v72.left,
          (struct tagPNTRWINDOWHITTTESTARGS *)v67,
          (struct tagRECT *)v44.bottom,
          (unsigned int)v48))
    && (xxxSendNCHitTest(
          &v57,
          (int *)v12,
          (struct tagWND *)&v62,
          (struct tagPOINT)__PAIR64__(a6.x, (unsigned int)left),
          (struct tagPOINT)__PAIR64__(v64, a6.y),
          v65,
          v47,
          v50),
        v39 = v62,
        v62 != -1) )
  {
LABEL_69:
    left[4] = v39;
    v40 = *(_DWORD *)(v12 + 20);
    v66.bottom = v40;
    v41 = *(_BYTE *)(v40 + 18) & 0x40;
    v13 = left[15] == 0;
    v63 = v41;
    if ( v13 )
    {
      if ( v41 )
        v45 = 16;
      else
        v45 = 17;
      v42 = v45;
    }
    else
    {
      v42 = ((v63 == 0) ^ (*(unsigned __int8 *)(v40 + 17) >> 6) & 1) + 16;
    }
    if ( v39 == v42 && (*(_BYTE *)(v66.bottom + 22) & 4) == 0 )
    {
      v43 = SizeBoxHwnd(v12);
      if ( v43 )
        v12 = v43;
    }
    if ( v59 )
    {
      v38 = (struct tagWND *)((char *)v38
                            + _TTWindowPenalty(
                                (int)left,
                                v12,
                                v38,
                                (struct tagPNTRWINDOWHITTTESTARGS *)v44.bottom,
                                (unsigned int)v48));
      v68 = v38;
    }
    if ( IsCompositionInputWindow()
      || TTBetterTarget(
           (int)v38,
           v12,
           (struct tagWND *)left,
           &v72.left,
           (struct tagPNTRWINDOWHITTTESTARGS *)v67,
           (struct tagRECT *)v44.bottom,
           (unsigned int)v48) )
    {
      *(_QWORD *)&v44.left = *(_QWORD *)&v72.top;
      v44.right = v72.bottom;
      _TTUpdateBestTarget((int *)v12, v66.left, v68, (struct tagWND *)&v57, 0, 0, v67, v72.left, v44, (unsigned int)v48);
    }
    return *(_DWORD *)v12;
  }
  *v56 = 0;
  return v66.top;
}
