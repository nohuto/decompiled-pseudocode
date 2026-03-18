/*
 * XREFs of xxxScrollWindowEx @ 0x1C00695EC
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C0069400 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C023BF48 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C024A8BC (xxxMNUpdateShownMenu.c)
 * Callees:
 *     _IsDescendant @ 0x1C0020EA8 (_IsDescendant.c)
 *     UnionRect @ 0x1C0023B50 (UnionRect.c)
 *     GetRect @ 0x1C00276C0 (GetRect.c)
 *     MirrorRegion @ 0x1C005BBAC (MirrorRegion.c)
 *     GetDCOrgOnScreen @ 0x1C005FBB0 (GetDCOrgOnScreen.c)
 *     zzzInternalHideCaret @ 0x1C005FE40 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x1C00600AC (zzzInternalShowCaret.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IsVisible @ 0x1C0069C04 (IsVisible.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0070824 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     OffsetChildren @ 0x1C00B04D4 (OffsetChildren.c)
 *     GreTransformPoints @ 0x1C00F211C (GreTransformPoints.c)
 *     ThreadLockExchangeAlways @ 0x1C010B5D0 (ThreadLockExchangeAlways.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C021B284 (SpbCheckRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        int a2,
        int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned __int64 a6,
        struct tagRECT *a7,
        __int16 a8)
{
  int v8; // r10d
  __int64 v9; // r14
  unsigned __int64 v10; // r11
  int v11; // r12d
  struct tagWND *v12; // rbx
  __int64 v14; // r9
  __int16 v15; // si
  int v16; // edi
  unsigned int v17; // edi
  HDC DCEx; // r15
  int v19; // r15d
  int v20; // r12d
  int v21; // edi
  __int64 v22; // rax
  HRGN v23; // rcx
  struct tagRECT *v24; // r13
  bool v25; // zf
  HDC v26; // rdi
  int v27; // eax
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 i; // rdi
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  __int64 DesktopWindow; // rax
  __int64 v40; // rcx
  int v41; // ecx
  LONG v42; // edx
  int v43; // ecx
  int v44; // edx
  int v45; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v47; // rcx
  int v48; // edx
  int v49; // eax
  int v50; // edx
  LONG v51; // eax
  LONG v52; // edx
  struct tagRECT v53; // xmm0
  LONG left; // r8d
  __int64 v55; // rax
  int v56; // ecx
  int v57; // edx
  __int64 v58; // rax
  int v59; // r9d
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // rdx
  int v63; // [rsp+20h] [rbp-E0h]
  int v64; // [rsp+50h] [rbp-B0h]
  int v65; // [rsp+54h] [rbp-ACh]
  unsigned int v66; // [rsp+54h] [rbp-ACh]
  int v68; // [rsp+5Ch] [rbp-A4h]
  HRGN v70; // [rsp+68h] [rbp-98h]
  HDC v71[2]; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+80h] [rbp-80h]
  struct tagRECT v73; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v74; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v75; // [rsp+A4h] [rbp-5Ch]
  int v76; // [rsp+A8h] [rbp-58h] BYREF
  int v77; // [rsp+ACh] [rbp-54h]
  int v78; // [rsp+B0h] [rbp-50h]
  int v79; // [rsp+B4h] [rbp-4Ch]
  int v80; // [rsp+B8h] [rbp-48h]
  int v81; // [rsp+BCh] [rbp-44h]
  struct tagRECT *v82; // [rsp+C0h] [rbp-40h]
  struct tagRECT *v83; // [rsp+C8h] [rbp-38h]
  struct tagRECT *v84; // [rsp+D0h] [rbp-30h]
  char v85[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v86; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-10h]
  __int128 v88; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v89; // [rsp+108h] [rbp+8h]
  __int128 v90; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v91; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v92; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v93; // [rsp+140h] [rbp+40h] BYREF
  __int128 v94; // [rsp+150h] [rbp+50h] BYREF

  v68 = 0;
  v8 = 0;
  v74 = 0;
  v75 = 0;
  v9 = 0LL;
  v10 = a6;
  v11 = a2;
  v89 = 0LL;
  v12 = a1;
  v87 = 0LL;
  v65 = a2;
  v82 = a4;
  v84 = a5;
  v70 = (HRGN)a6;
  v83 = a7;
  v64 = 0;
  v92 = 0LL;
  v88 = 0LL;
  v86 = 0LL;
  if ( !a1 )
  {
    v68 = 1;
    v12 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 0x40) != 0 )
  {
    v11 = -a2;
    v65 = -a2;
    MirrorRegion((__int64)v12, a6, 1);
    if ( a4 )
    {
      v44 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->left;
      a4->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->right;
      a4->right = v44;
    }
    v10 = a6;
    v8 = 0;
    if ( a5 )
    {
      v45 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->left;
      a5->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->right;
      a5->right = v45;
    }
  }
  if ( v11 | a3 )
  {
    v15 = a8;
    if ( (unsigned int)IsVisible(v12) )
      goto LABEL_6;
    if ( (((a8 & 1) != 0) & (unsigned __int8)~(*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) >> 5)) != 0 && !v14 )
    {
      v8 = 1;
      v15 = a8 & 0xFFFD;
      v64 = 1;
    }
  }
  else
  {
    v15 = a8;
  }
  if ( v10 )
  {
    SetEmptyRgn(v10);
    v8 = v64;
  }
  if ( a7 )
    *a7 = 0LL;
  if ( !v8 )
    return 1LL;
LABEL_6:
  v72 = 0;
  if ( v68 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v88 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v88;
    *((_QWORD *)&v88 + 1) = v12;
    HMLockObject(v12);
  }
  if ( !v64 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 424LL) + 296LL;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v9, (__int64)v12) )
      {
        v72 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v16 = 65538;
  v80 = v15 & 1;
  if ( v15 < 0 )
  {
    v16 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 17) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
    if ( (v15 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 )
      v16 |= 0x80002u;
  }
  else if ( (v15 & 1) != 0 )
  {
    v16 = 589826;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v85);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v17 = v16 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v12, 0LL, v17);
  v71[0] = DCEx;
  v81 = v15 & 2;
  if ( (v15 & 2) != 0 )
  {
    GetDCOrgOnScreen((__int64)DCEx, &v74);
    if ( !a6 )
      v70 = (HRGN)ghrgnSW;
  }
  if ( !a4 )
  {
    v82 = &v92;
    GetRect((__int64)v12, (__int64)&v92, 17);
    if ( (v17 & 2) == 0 )
      GreTransformPoints((_DWORD)DCEx, (unsigned int)&v92, (unsigned int)&v92, 2, 0);
  }
  v19 = v11;
  v20 = a3;
  v91 = *v82;
  v21 = v17 & 2;
  if ( !v21 )
  {
    GreTransformPoints(v71[0], (unsigned int)&v91, (unsigned int)&v91, 2, 1);
    v77 = 0;
    v76 = 0;
    v78 = v65;
    v79 = a3;
    GreTransformPoints(v71[0], (unsigned int)&v76, (unsigned int)&v76, 2, 1);
    v19 = v78 - v76;
    v20 = v79 - v77;
  }
  if ( v64 )
  {
    v26 = v71[0];
    v66 = 1;
  }
  else
  {
    v22 = *((_QWORD *)v12 + 5);
    v23 = *(HRGN *)(v22 + 136);
    if ( v15 < 0 && (*(_BYTE *)(v22 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v23 > 1 )
      {
        v94 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v23, &v94) )
        {
          v47 = *((_QWORD *)v12 + 5);
          v48 = v20 - *(_DWORD *)(v47 + 108);
          v49 = v19 - *(_DWORD *)(v47 + 104);
          HIDWORD(v94) += v48;
          DWORD1(v94) += v48;
          LODWORD(v94) = v49 + v94;
          DWORD2(v94) += v49;
          xxxRedrawWindow(v12);
        }
      }
      v23 = 0LL;
    }
    v24 = v83;
    v25 = v21 == 0;
    v26 = v71[0];
    v66 = InternalScrollDC(v12, v71[0], v65, a3, v82, v84, v23, v70, v83, v25);
    if ( v24 )
    {
      v33 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v33 + 26) & 0x40) != 0 )
      {
        v50 = *(_DWORD *)(v33 + 112) - *(_DWORD *)(v33 + 104);
        v51 = v50 - v24->right;
        v52 = v50 - v24->left;
        v24->left = v51;
        v24->right = v52;
      }
    }
  }
  _ReleaseDC(v26);
  v27 = v64;
  if ( !v64 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( a4 )
      {
        if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
        {
          v53 = v91;
          v92 = v91;
          left = v91.left;
        }
        else
        {
          v55 = *((_QWORD *)v12 + 5);
          v56 = *(_DWORD *)(v55 + 104);
          left = v56 + v91.left;
          v57 = *(_DWORD *)(v55 + 108);
          v92.right = v91.right + v56;
          v92.left = v56 + v91.left;
          v92.top = v57 + v91.top;
          v92.bottom = v57 + v91.bottom;
          v53 = v92;
        }
        v73.right = v19 + v53.right;
        v73.bottom = v20 + v53.bottom;
        v73.top = v20 + v53.top;
        v73.left = left + v19;
        UnionRect(&v73, &v73.left, &v92.left);
      }
      else
      {
        v73 = *(struct tagRECT *)(*((_QWORD *)v12 + 5) + 104LL);
      }
      SpbCheckRect(v12, &v73, 0);
    }
    v27 = 0;
  }
  v28 = v80;
  if ( v80 )
  {
    v93 = 0LL;
    if ( !v27 && v12 == *(struct tagWND **)v9 )
    {
      if ( !a4
        || (v42 = *(_DWORD *)(v9 + 24),
            v93.left = *(_DWORD *)(v9 + 20),
            v93.right = *(_DWORD *)(v9 + 32) + v93.left,
            v43 = *(_DWORD *)(v9 + 28),
            v93.top = v42,
            v93.bottom = v42 + v43,
            (unsigned int)IntersectRect(&v93, &v93, &v91)) )
      {
        *(_DWORD *)(v9 + 20) += v19;
        *(_DWORD *)(v9 + 24) += v20;
      }
    }
    if ( a4 )
    {
      if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
      {
        v93 = v91;
      }
      else
      {
        v36 = *((_QWORD *)v12 + 5);
        v37 = *(_DWORD *)(v36 + 104);
        v38 = *(_DWORD *)(v36 + 108);
        v93.left = v37 + v91.left;
        v93.right = v37 + v91.right;
        v93.top = v38 + v91.top;
        v93.bottom = v38 + v91.bottom;
      }
    }
    if ( *((_QWORD *)v12 + 14) )
    {
      OffsetChildren(v12, v63);
      zzzLockDisplayAreaAndInvalidateDCCache(v12, (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 ? 4 : 2);
    }
  }
  if ( v81 )
  {
    if ( v70 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v70, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v74, v75);
    xxxInternalInvalidate(v12, ghrgnSW, v15 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v85);
  zzzEndDeferWinEventNotify();
  if ( v28 )
  {
    v90 = 0LL;
    *(_OWORD *)v71 = 0LL;
    if ( a4 )
    {
      DesktopWindow = GetDesktopWindow(v12);
      if ( v29 == DesktopWindow )
      {
        LODWORD(v71[0]) = v19 + v91.left;
        LODWORD(v71[1]) = v19 + v91.right;
        HIDWORD(v71[0]) = v20 + v91.top;
        v41 = v20 + v91.bottom;
      }
      else
      {
        v40 = *(_QWORD *)(v29 + 40);
        v29 = (unsigned int)(v19 + *(_DWORD *)(v40 + 104));
        v31 = (unsigned int)(v20 + *(_DWORD *)(v40 + 108));
        LODWORD(v71[0]) = v29 + v91.left;
        LODWORD(v71[1]) = v29 + v91.right;
        HIDWORD(v71[0]) = v31 + v91.top;
        v41 = v31 + v91.bottom;
      }
      HIDWORD(v71[1]) = v41;
    }
    v34 = gptiCurrent;
    *(_QWORD *)&v86 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v86;
    *((_QWORD *)&v86 + 1) = 0LL;
    for ( i = *((_QWORD *)v12 + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( !a4 || (unsigned int)IntersectRect(&v90, v71, *(_QWORD *)(i + 40) + 88LL) )
      {
        ThreadLockExchangeAlways(i, &v86);
        if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
        {
          v58 = *(_QWORD *)(i + 40);
          v59 = *(unsigned __int16 *)(v58 + 108);
          v60 = *(unsigned __int16 *)(v58 + 104);
        }
        else
        {
          v61 = *(_QWORD *)(i + 40);
          v62 = *((_QWORD *)v12 + 5);
          v59 = (unsigned __int16)(*(_WORD *)(v61 + 108) - *(_WORD *)(v62 + 108));
          v60 = (unsigned __int16)(*(_WORD *)(v61 + 104) - *(_WORD *)(v62 + 104));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 3, 0, v60 | (v59 << 16), 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v34, v29, v31);
  }
  if ( v72 )
    zzzInternalShowCaret();
  if ( v68 )
    ThreadUnlock1(v30, v29, v31);
  return v66;
}
