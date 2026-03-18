/*
 * XREFs of _xxxScrollWindowEx@32 @ 0x2B61E
 * Callers:
 *     _NtUserScrollWindowEx@32 @ 0x2B4CC (_NtUserScrollWindowEx@32.c)
 *     _xxxMNSetTop@8 @ 0x19A800 (_xxxMNSetTop@8.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 * Callees:
 *     _OffsetChildren@20 @ 0x2AECC (_OffsetChildren@20.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     __IsDescendant@8 @ 0x72F90 (__IsDescendant@8.c)
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 *     _zzzInternalHideCaret@0 @ 0x7DB46 (_zzzInternalHideCaret@0.c)
 *     _GreTransformPoints@20 @ 0x8DA90 (_GreTransformPoints@20.c)
 *     _UnionRect@12 @ 0x982E2 (_UnionRect@12.c)
 *     _MirrorRegion@12 @ 0x9CC70 (_MirrorRegion@12.c)
 *     _zzzInternalShowCaret@0 @ 0xBA734 (_zzzInternalShowCaret@0.c)
 *     _GetDCOrgOnScreen@8 @ 0xC3520 (_GetDCOrgOnScreen@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 *     _MirrorClientRect@8 @ 0x1B6E50 (_MirrorClientRect@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxScrollWindowEx(_DWORD *a1, int a2, HDC a3, int *a4, int a5, struct tagRECT *a6, HRGN a7, __int16 a8)
{
  int v8; // esi
  _DWORD *v9; // ebx
  int v10; // edi
  __int16 v11; // si
  int DCEx; // edi
  char v13; // al
  int v14; // eax
  struct tagRECT *v15; // ecx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int *v28; // esi
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int *v32; // eax
  int v33; // eax
  int v34; // edx
  int *v35; // edx
  int v36; // edi
  HDC v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  ULONG_PTR v41; // edi
  int v42; // eax
  int v43; // esi
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  struct tagRECT *v47; // [esp+0h] [ebp-B8h]
  int v48; // [esp+4h] [ebp-B4h]
  int v49; // [esp+Ch] [ebp-ACh]
  int v50; // [esp+Ch] [ebp-ACh]
  int v51; // [esp+Ch] [ebp-ACh]
  int v52; // [esp+14h] [ebp-A4h]
  int v53; // [esp+18h] [ebp-A0h]
  int v54; // [esp+1Ch] [ebp-9Ch]
  struct tagRECT *v55; // [esp+20h] [ebp-98h]
  char v56; // [esp+24h] [ebp-94h]
  int v57; // [esp+28h] [ebp-90h]
  int *v58; // [esp+2Ch] [ebp-8Ch]
  int v59; // [esp+30h] [ebp-88h]
  int v60; // [esp+34h] [ebp-84h]
  int v61; // [esp+38h] [ebp-80h]
  int v62; // [esp+3Ch] [ebp-7Ch]
  _DWORD *v63; // [esp+48h] [ebp-70h]
  int v64; // [esp+4Ch] [ebp-6Ch] BYREF
  int v65; // [esp+50h] [ebp-68h]
  int v66; // [esp+54h] [ebp-64h]
  int v67; // [esp+58h] [ebp-60h]
  int v68; // [esp+5Ch] [ebp-5Ch] BYREF
  int v69; // [esp+60h] [ebp-58h]
  int v70; // [esp+64h] [ebp-54h]
  int v71; // [esp+68h] [ebp-50h] BYREF
  _DWORD *v72; // [esp+6Ch] [ebp-4Ch]
  int v73; // [esp+70h] [ebp-48h]
  _BYTE v74[16]; // [esp+74h] [ebp-44h] BYREF
  int v75; // [esp+84h] [ebp-34h] BYREF
  int v76; // [esp+88h] [ebp-30h]
  int v77; // [esp+8Ch] [ebp-2Ch]
  HDC v78; // [esp+90h] [ebp-28h]
  int v79; // [esp+94h] [ebp-24h] BYREF
  int v80; // [esp+98h] [ebp-20h]
  int v81; // [esp+9Ch] [ebp-1Ch]
  HDC v82; // [esp+A0h] [ebp-18h]
  int v83; // [esp+A4h] [ebp-14h] BYREF
  int v84; // [esp+A8h] [ebp-10h]
  int v85; // [esp+ACh] [ebp-Ch]
  HDC v86; // [esp+B0h] [ebp-8h]

  v58 = a4;
  v8 = a2;
  v83 = 0;
  v9 = a1;
  v84 = 0;
  v54 = 0;
  v63 = 0;
  v64 = 0;
  v85 = 0;
  v65 = 0;
  v62 = 0;
  v59 = a2;
  v86 = 0;
  v55 = a6;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v10 = _gptiCurrent;
  if ( !a1 )
  {
    v62 = 1;
    v9 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 4) + 12);
  }
  if ( (*(_BYTE *)(v9[5] + 18) & 0x40) != 0 )
  {
    v8 = -a2;
    v59 = -a2;
    MirrorRegion(v9, a6, 1);
    if ( a4 )
      MirrorClientRect(v9);
    if ( a5 )
      MirrorClientRect(v9);
  }
  if ( (unsigned int)a3 | v8 )
  {
    if ( IsVisible() )
    {
      v11 = a8;
      v56 = a8;
      goto LABEL_7;
    }
    v56 = a8;
    if ( (((a8 & 1) != 0) & (unsigned __int8)~(*(_BYTE *)(v9[5] + 23) >> 5)) == 0 || a4 )
    {
      v11 = a8;
    }
    else
    {
      v54 = 1;
      v56 = a8 & 0xFD;
      v11 = a8 & 0xFFFD;
    }
  }
  else
  {
    v11 = a8;
    v56 = a8;
  }
  if ( a6 )
    SetEmptyRgn(a6);
  if ( a7 )
  {
    *(_DWORD *)a7 = 0;
    *((_DWORD *)a7 + 1) = 0;
    *((_DWORD *)a7 + 2) = 0;
    *((_DWORD *)a7 + 3) = 0;
    v10 = _gptiCurrent;
  }
  if ( !v54 )
    return 1;
LABEL_7:
  v60 = 0;
  if ( v62 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v71 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v71;
    v72 = v9;
    HMLockObject(v9);
  }
  if ( !v54 )
  {
    v63 = (_DWORD *)(*(_DWORD *)(v10 + 236) + 216);
    if ( *v63 )
    {
      if ( _IsDescendant(*v63, v9) )
      {
        v60 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v66 = v11 & 0x8000;
  v61 = v11 & 1;
  if ( v11 < 0 )
  {
    v49 = 2 * ((*(_BYTE *)(*(_DWORD *)(v9[19] + 4) + 8) & 0x60) == 0) + 0x10000;
    if ( (v11 & 1) != 0 )
    {
      v49 = 2 * ((*(_BYTE *)(*(_DWORD *)(v9[19] + 4) + 8) & 0x60) == 0) + 0x10000;
      if ( (*(_BYTE *)(v9[5] + 23) & 2) != 0 )
        v49 = (2 * ((*(_BYTE *)(*(_DWORD *)(v9[19] + 4) + 8) & 0x60) == 0) + 0x10000) | 0x80002;
    }
  }
  else
  {
    v49 = 65538;
    if ( (v11 & 1) != 0 )
      v49 = (int)CreateDPIBitmapStrip;
  }
  ++_gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v74);
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  v50 = v49 | 0x40000000;
  DCEx = _GetDCEx(v9, 0, v50);
  v67 = v11 & 2;
  if ( (v11 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v64);
    if ( !a6 )
      v55 = (struct tagRECT *)_ghrgnSW;
  }
  if ( !a4 )
  {
    v58 = &v83;
    GetRect(17);
    v13 = v50;
    if ( (v50 & 2) != 0 )
      goto LABEL_17;
    GreTransformPoints(&v83, 2, 0);
  }
  v13 = v50;
LABEL_17:
  v52 = v59;
  v79 = *v58;
  v53 = (int)a3;
  v51 = v13 & 2;
  v80 = v58[1];
  v81 = v58[2];
  v82 = (HDC)v58[3];
  if ( (v13 & 2) == 0 )
  {
    GreTransformPoints(&v79, 2, 1);
    v76 = 0;
    v75 = 0;
    v77 = v59;
    v78 = a3;
    GreTransformPoints(&v75, 2, 1);
    v52 = v77 - v75;
    v53 = (int)v78 - v76;
  }
  if ( v54 )
  {
    v57 = 1;
  }
  else
  {
    v14 = v9[5];
    v15 = *(struct tagRECT **)(v14 + 92);
    if ( v66 && (*(_BYTE *)(v14 + 13) & 1) == 0 )
    {
      if ( (unsigned int)v15 > 1 )
      {
        v75 = 0;
        v76 = 0;
        v77 = 0;
        v78 = 0;
        if ( GreGetRgnBox(v15, &v75) )
        {
          v22 = v9[5];
          v23 = v53 - *(_DWORD *)(v22 + 72);
          v24 = v52 - *(_DWORD *)(v22 + 68);
          v78 = (HDC)((char *)v78 + v23);
          v76 += v23;
          v75 += v24;
          v77 += v24;
          xxxRedrawWindow(0, 133);
        }
      }
      v15 = 0;
    }
    v57 = InternalScrollDC((struct tagWND *)v59, a3, (int)v58, a5, v15, v55, a7, (HRGN)(v51 == 0), v47, v48);
    if ( a7 && (*(_BYTE *)(v9[5] + 18) & 0x40) != 0 )
      MirrorClientRect(v9);
  }
  _ReleaseDC(DCEx);
  v16 = v54;
  if ( !v54 && *(_DWORD *)(_gpDispInfo + 16) )
  {
    if ( a4 )
    {
      if ( v9 == (_DWORD *)_GetDesktopWindow(v9) )
      {
        v83 = v79;
        v84 = v80;
        v85 = v81;
        v86 = v82;
      }
      else
      {
        v25 = v9[5];
        v26 = *(_DWORD *)(v25 + 72);
        v27 = *(_DWORD *)(v25 + 68);
        v83 = v27 + v79;
        v85 = v27 + v81;
        v84 = v26 + v80;
        v86 = (HDC)((char *)v82 + v26);
      }
      v77 = v52 + v85;
      v75 = v52 + v83;
      v78 = (HDC)((char *)v86 + v53);
      v76 = v53 + v84;
      UnionRect(&v83);
    }
    else
    {
      v28 = (int *)(v9[5] + 68);
      v75 = *v28++;
      v76 = *v28++;
      v77 = *v28;
      v78 = (HDC)v28[1];
    }
    SpbCheckRect(v9, &v75, 0);
    v16 = 0;
  }
  v17 = v61;
  if ( v61 )
  {
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    if ( !v16 && v9 == (_DWORD *)*v63 )
    {
      if ( !a4
        || (v29 = v63[4],
            v30 = v63[5],
            v77 = v29 + v63[7],
            v31 = v63[6],
            v76 = v30,
            v78 = (HDC)(v30 + v31),
            v75 = v29,
            IntersectRect(&v79)) )
      {
        v63[4] += v52;
        v63[5] += v53;
      }
    }
    v32 = a4;
    if ( a4 )
    {
      if ( v9 == (_DWORD *)_GetDesktopWindow(v9) )
      {
        v75 = v79;
        v76 = v80;
        v77 = v81;
        v78 = v82;
      }
      else
      {
        v33 = v9[5];
        v34 = *(_DWORD *)(v33 + 72);
        v16 = *(_DWORD *)(v33 + 68);
        v75 = v16 + v79;
        v77 = v16 + v81;
        v76 = v34 + v80;
        v78 = (HDC)((char *)v82 + v34);
      }
      v32 = a4;
    }
    v18 = v52;
    if ( v9[15] )
    {
      OffsetChildren((int)v9, v52, v53, v32 != 0 ? (unsigned int)&v75 : 0, v16);
      zzzLockDisplayAreaAndInvalidateDCCache(0);
    }
    v17 = v61;
  }
  else
  {
    v18 = v52;
  }
  if ( v67 )
  {
    if ( v55 != (struct tagRECT *)_ghrgnSW )
      GreCombineRgn(_ghrgnSW, v55, 0, 5);
    GreOffsetRgn(_ghrgnSW, v64, v65);
    xxxInternalInvalidate(v9, _ghrgnSW, v56 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v74);
  zzzEndDeferWinEventNotify();
  if ( v17 )
  {
    v35 = a4;
    memset(v74, 0, sizeof(v74));
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    if ( a4 )
    {
      v36 = v9[14];
      if ( v36 == _GetDesktopWindow(v9) )
      {
        v75 = v18 + v79;
        v77 = v18 + v81;
        v76 = v53 + v80;
        v37 = (HDC)((char *)v82 + v53);
      }
      else
      {
        v38 = *(_DWORD *)(v36 + 20);
        v39 = v18 + *(_DWORD *)(v38 + 68);
        v40 = v53 + *(_DWORD *)(v38 + 72);
        v75 = v39 + v79;
        v77 = v39 + v81;
        v76 = v40 + v80;
        v37 = (HDC)((char *)v82 + v40);
      }
      v35 = a4;
      v78 = v37;
    }
    v68 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v68;
    v69 = 0;
    v41 = v9[15];
    while ( v41 )
    {
      if ( !v35 || IntersectRect(*(_DWORD *)(v41 + 20) + 52) )
      {
        ThreadLockExchangeAlways(v41, &v68);
        if ( v9 == (_DWORD *)_GetDesktopWindow(v9) )
        {
          v42 = *(_DWORD *)(v41 + 20);
          v43 = *(unsigned __int16 *)(v42 + 72);
          v44 = *(unsigned __int16 *)(v42 + 68);
        }
        else
        {
          v45 = *(_DWORD *)(v41 + 20);
          v46 = v9[5];
          v43 = (unsigned __int16)(*(_WORD *)(v45 + 72) - *(_WORD *)(v46 + 72));
          v44 = (unsigned __int16)(*(_WORD *)(v45 + 68) - *(_WORD *)(v46 + 68));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v41, 0, v44 | (v43 << 16), 0, 0, 0, 1, 0);
      }
      v41 = *(_DWORD *)(v41 + 48);
      v35 = a4;
    }
    ThreadUnlock1();
  }
  if ( v60 )
    zzzInternalShowCaret();
  if ( v62 )
    ThreadUnlock1();
  return v57;
}
