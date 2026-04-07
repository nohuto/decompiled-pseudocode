/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001C460
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001D930 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001CA40 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18001CC20 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001CD90 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180053C34 (IsOpenThemeDataPresent.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800BF104 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  HRGN v2; // r15
  int v3; // edi
  char v5; // bl
  char v6; // bl
  __int64 v7; // rcx
  int v8; // eax
  LONG left; // r14d
  int right; // r8d
  int top; // r10d
  int bottom; // ecx
  int v13; // edx
  int v14; // r12d
  int v15; // r13d
  __int64 v16; // rax
  int v17; // edi
  int v18; // ebx
  bool v19; // zf
  __int64 v20; // rax
  int v21; // r9d
  LONG v22; // edx
  LONG v23; // edi
  int v24; // r10d
  int v25; // eax
  int v26; // ecx
  int v27; // r14d
  int v28; // r9d
  int v29; // r8d
  LONG v30; // edx
  LONG v31; // eax
  HRGN RoundRectRgn; // rax
  int v33; // eax
  signed int v34; // ebx
  int v35; // eax
  HRGN v36; // rdi
  int GeometryFromHRGN; // eax
  int v38; // r12d
  int v39; // r13d
  LONG v40; // ebx
  int v41; // r15d
  HRGN RectRgn; // rax
  int v43; // eax
  signed int v45; // eax
  int v46; // edx
  unsigned int v47; // ecx
  int v48; // r8d
  signed int LastError; // eax
  int v50; // r9d
  signed int v51; // eax
  int v52; // edx
  unsigned int v53; // ecx
  int v54; // r8d
  signed int v55; // eax
  unsigned int w; // [rsp+20h] [rbp-79h]
  int v57; // [rsp+30h] [rbp-69h]
  HRGN hrgnDst; // [rsp+38h] [rbp-61h] BYREF
  HRGN hrgnSrc2; // [rsp+40h] [rbp-59h]
  int v60; // [rsp+48h] [rbp-51h]
  int v61; // [rsp+4Ch] [rbp-4Dh]
  int v62; // [rsp+50h] [rbp-49h]
  struct tagRECT rc; // [rsp+58h] [rbp-41h] BYREF
  struct tagRECT v64; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT Src; // [rsp+80h] [rbp-19h] BYREF
  LONG v66; // [rsp+90h] [rbp-9h]
  LONG v67; // [rsp+94h] [rbp-5h]
  int v68; // [rsp+98h] [rbp-1h]
  int v69; // [rsp+9Ch] [rbp+3h]
  int v70; // [rsp+A0h] [rbp+7h]
  LONG v71; // [rsp+A4h] [rbp+Bh]
  LONG v72; // [rsp+A8h] [rbp+Fh]
  int v73; // [rsp+ACh] [rbp+13h]
  int v74; // [rsp+B0h] [rbp+17h]
  int v75; // [rsp+B4h] [rbp+1Bh]
  LONG v76; // [rsp+B8h] [rbp+1Fh]
  int v77; // [rsp+BCh] [rbp+23h]

  v1 = *((_QWORD *)this + 91);
  v2 = 0LL;
  v3 = *((_DWORD *)this + 148);
  hrgnDst = 0LL;
  v5 = *(_BYTE *)(v1 + 611);
  IsOpenThemeDataPresent();
  v6 = v5 & 0x20;
  if ( (v3 & 0x20) != 0 )
  {
    if ( v6 || (v3 & 0x40) != 0 )
      v7 = 16LL;
    else
      v7 = 24LL;
  }
  else if ( v6 || (v3 & 0x40) != 0 )
  {
    v7 = 0LL;
    if ( (v3 & 2) != 0 )
      v7 = 32LL;
  }
  else if ( (v3 & 2) != 0 )
  {
    v7 = 40LL;
  }
  else
  {
    v7 = 8LL;
  }
  *(_QWORD *)&v64.left = *(_QWORD *)(v7 + CTopLevelWindow::s_rgpwfWindowFrames);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 91) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  v8 = *((_DWORD *)this + 157);
  left = v8 + rc.left;
  right = rc.right - *((_DWORD *)this + 158);
  top = *((_DWORD *)this + 159) + rc.top;
  bottom = rc.bottom - *((_DWORD *)this + 160);
  v13 = *((_DWORD *)this + 153) - v8;
  v14 = *((_DWORD *)this + 154) - *((_DWORD *)this + 158);
  v15 = *((_DWORD *)this + 156) - *((_DWORD *)this + 160);
  v61 = *((_DWORD *)this + 155) - *((_DWORD *)this + 159);
  v16 = *((_QWORD *)this + 41);
  rc.left = left;
  rc.right = right;
  rc.top = top;
  rc.bottom = bottom;
  v57 = v13;
  LODWORD(hrgnSrc2) = v13 - *(_DWORD *)(v16 + 24);
  v62 = v14;
  if ( (int)hrgnSrc2 < 0 )
    LODWORD(hrgnSrc2) = 0;
  v17 = v14 - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL);
  if ( v17 < 0 )
    v17 = 0;
  v18 = v15 - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL);
  if ( v18 < 0 )
    v18 = 0;
  v19 = (*((_BYTE *)this + 592) & 0x40) == 0;
  v60 = (int)((double)dword_1800E4EA0 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60));
  if ( v19 )
  {
    v20 = *((_QWORD *)this + 91);
    if ( (*(_BYTE *)(v20 + 611) & 0x20) == 0 && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 564) )
    {
      if ( !(unsigned int)IsWindowArranged(*(_QWORD *)(v20 + 40)) && (*((_BYTE *)this + 592) & 0x20) == 0 )
      {
        bottom = rc.bottom;
        right = rc.right;
        top = rc.top;
        v21 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
        left = rc.left;
        goto LABEL_18;
      }
      bottom = rc.bottom;
      right = rc.right;
      top = rc.top;
      left = rc.left;
    }
  }
  v21 = 0;
LABEL_18:
  Src.top = top + v21;
  v22 = right - v21 - v17;
  v23 = top + v60;
  v68 = left + v57;
  v24 = v61 + top;
  v25 = bottom - v15;
  Src.left = (_DWORD)hrgnSrc2 + left + v21;
  Src.right = v22;
  Src.bottom = v23;
  v66 = Src.left;
  v67 = v23;
  if ( v24 > bottom - v15 )
    v69 = v24;
  else
    v69 = bottom - v15;
  v71 = v23;
  v70 = right - v14;
  v72 = v22;
  if ( v24 > v25 )
    v73 = v24;
  else
    v73 = bottom - v15;
  v74 = (_DWORD)hrgnSrc2 + left + v21;
  if ( v25 < 0 )
    v75 = 0;
  else
    v75 = bottom - v15;
  v76 = v22;
  v26 = bottom - v21 - v18;
  if ( v26 < 0 )
    v77 = 0;
  else
    v77 = v26;
  SetLastError(0);
  v27 = 0x7FFFFFF;
  v28 = rc.bottom + 1;
  if ( rc.bottom + 1 <= -134217728 )
  {
    v28 = -134217728;
  }
  else if ( v28 >= 0x7FFFFFF )
  {
    v28 = 0x7FFFFFF;
  }
  v29 = rc.right + 1;
  if ( rc.right + 1 <= -134217728 )
  {
    v29 = -134217728;
  }
  else if ( v29 >= 0x7FFFFFF )
  {
    v29 = 0x7FFFFFF;
  }
  v30 = rc.top;
  if ( rc.top <= -134217728 )
  {
    v30 = -134217728;
  }
  else if ( rc.top >= 0x7FFFFFF )
  {
    v30 = 0x7FFFFFF;
  }
  v31 = rc.left;
  if ( rc.left <= -134217728 )
  {
    v31 = -134217728;
  }
  else if ( rc.left >= 0x7FFFFFF )
  {
    v31 = 0x7FFFFFF;
  }
  RoundRectRgn = CreateRoundRectRgn(
                   v31,
                   v30,
                   v29,
                   v28,
                   2 * *(_DWORD *)(*(_QWORD *)&v64.left + 1884LL),
                   2 * *(_DWORD *)(*(_QWORD *)&v64.left + 1884LL));
  hrgnSrc2 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v33 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    v34 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF08, 11LL, v33, 0x123Au);
      goto LABEL_68;
    }
    v35 = HrgnFromRects(&Src, 4u, &hrgnDst);
    v34 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF08, 11LL, v35, 0x1240u);
      goto LABEL_97;
    }
    SetLastError(0);
    v36 = hrgnDst;
    if ( !CombineRgn(hrgnDst, hrgnDst, hrgnSrc2, 1) )
    {
      LastError = GetLastError();
      v34 = LastError;
      if ( LastError > 0 )
        v34 = (unsigned __int16)LastError | 0x80070000;
      w = 4674;
      if ( v34 >= 0 )
        v34 = -2003304445;
      v50 = v34;
      goto LABEL_121;
    }
    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v36, (struct CRgnGeometryProxy **)this + 69);
    v34 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      w = 4675;
      goto LABEL_120;
    }
    if ( v36 )
    {
      DeleteObject(v36);
      v36 = 0LL;
      hrgnDst = 0LL;
    }
    if ( v57 < 0 )
      v57 = 0;
    v38 = rc.left + v57;
    v39 = rc.top + v60;
    v64.left = rc.left + v57;
    v64.top = rc.top + v60;
    if ( v62 >= 0 )
      LODWORD(v2) = v62;
    v40 = rc.right - (_DWORD)v2;
    v41 = rc.top + v61;
    v64.right = v40;
    v64.bottom = rc.top + v61;
    SetLastError(0);
    if ( v41 <= -134217728 )
    {
      v41 = -134217728;
    }
    else if ( v41 >= 0x7FFFFFF )
    {
      v41 = 0x7FFFFFF;
    }
    if ( v40 <= -134217728 )
    {
      v40 = -134217728;
    }
    else if ( v40 >= 0x7FFFFFF )
    {
      v40 = 0x7FFFFFF;
    }
    if ( v39 <= -134217728 )
    {
      v39 = -134217728;
    }
    else if ( v39 >= 0x7FFFFFF )
    {
      v39 = 0x7FFFFFF;
    }
    if ( v38 <= -134217728 )
    {
      v38 = -134217728;
    }
    else if ( v38 >= 0x7FFFFFF )
    {
LABEL_61:
      RectRgn = CreateRectRgn(v27, v39, v40, v41);
      v2 = RectRgn;
      if ( !RectRgn )
      {
        v51 = GetLastError();
        v34 = v51;
        if ( v51 > 0 )
          v34 = (unsigned __int16)v51 | 0x80070000;
        if ( v34 >= 0 )
          v34 = CheckGUIHandleQuota(v53, v52, v54);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF08, 11LL, v34, 0x124Fu);
LABEL_122:
        if ( v36 )
LABEL_67:
          DeleteObject(v36);
LABEL_68:
        DeleteObject(hrgnSrc2);
        if ( v2 )
          DeleteObject(v2);
        return (unsigned int)v34;
      }
      GeometryFromHRGN = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
      v34 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        w = 4689;
        goto LABEL_120;
      }
      v43 = HrgnFromRects(&v64, 1u, &hrgnDst);
      v34 = v43;
      if ( v43 >= 0 )
      {
        SetLastError(0);
        v36 = hrgnDst;
        if ( !CombineRgn(hrgnDst, hrgnDst, v2, 1) )
        {
          v55 = GetLastError();
          v34 = v55;
          if ( v55 > 0 )
            v34 = (unsigned __int16)v55 | 0x80070000;
          w = 4697;
          if ( v34 >= 0 )
            v34 = -2003304445;
          v50 = v34;
          goto LABEL_121;
        }
        GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v36, (struct CRgnGeometryProxy **)this + 70);
        v34 = GeometryFromHRGN;
        if ( GeometryFromHRGN >= 0 )
        {
          if ( !v36 )
            goto LABEL_68;
          goto LABEL_67;
        }
        w = 4698;
LABEL_120:
        v50 = GeometryFromHRGN;
LABEL_121:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF08, 11LL, v50, w);
        goto LABEL_122;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF08, 11LL, v43, 0x1257u);
LABEL_97:
      v36 = hrgnDst;
      goto LABEL_122;
    }
    v27 = v38;
    goto LABEL_61;
  }
  v45 = GetLastError();
  v34 = v45;
  if ( v45 > 0 )
    v34 = (unsigned __int16)v45 | 0x80070000;
  if ( v34 >= 0 )
    v34 = CheckGUIHandleQuota(v47, v46, v48);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF08, 11LL, v34, 0x1238u);
  return (unsigned int)v34;
}
