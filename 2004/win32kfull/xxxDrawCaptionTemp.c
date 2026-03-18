/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C014B43C
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C01F8C30 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F8DA0 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023F7AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C000C294 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C000C3CC (GreGetTextExtentW.c)
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     xxxGetWindowSmIcon @ 0x1C002BFF8 (xxxGetWindowSmIcon.c)
 *     GreGetTextAlign @ 0x1C005D2C8 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C005D450 (GreSetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C0060838 (GetDPIServerInfo.c)
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 *     FillRect @ 0x1C0062024 (FillRect.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00626AC (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0063FA4 (GreSetBkColor.c)
 *     _HasCaptionIcon @ 0x1C00A08F8 (_HasCaptionIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F6BD8 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00F6CFC (TextCopy.c)
 *     CALL_LPK @ 0x1C014B814 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C014B850 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C014BF28 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     xxxGetWindowText @ 0x1C014C04C (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C024847C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     DrawTextExWorker @ 0x1C025FC70 (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        unsigned __int16 **a6,
        unsigned int a7)
{
  LONG left; // eax
  struct tagCURSOR *WindowSmIcon; // r13
  int v12; // r12d
  int v13; // r14d
  HBRUSH v14; // rcx
  int WindowText; // eax
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  int v18; // edx
  int v19; // r12d
  WCHAR *v20; // r10
  unsigned int v21; // r13d
  WCHAR *SourceString; // r8
  int v23; // r10d
  int *v24; // r11
  HBRUSH v26; // rax
  unsigned int Layout; // eax
  unsigned int v28; // r14d
  int v29; // r12d
  struct _LARGE_UNICODE_STRING *StrName; // rax
  int TextMetricsW; // eax
  __int64 v32; // rcx
  int v33; // ecx
  int TextAlign; // eax
  int v35; // eax
  WCHAR *v36; // r9
  int *v37; // r11
  int v38; // r8d
  int v39; // r10d
  int v40; // edx
  unsigned int v41; // eax
  int v42; // [rsp+50h] [rbp-B0h]
  HBRUSH v43; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 **v46; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+7Ch] [rbp-84h]
  int v50; // [rsp+80h] [rbp-80h]
  struct tagSIZE v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-70h]
  __int128 v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  int v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B4h] [rbp-4Ch]
  __int128 v57; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v58[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v59; // [rsp+120h] [rbp+20h]
  char v60[512]; // [rsp+160h] [rbp+60h] BYREF

  left = a3->left;
  WindowSmIcon = a5;
  v46 = a6;
  v44 = 0;
  v51 = 0LL;
  v45 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( a1
    && !a5
    && (unsigned int)HasCaptionIcon(a1)
    && (a7 & 2) == 0
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
  }
  v42 = *(_DWORD *)(gpsi + 4572LL);
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) == 0 )
    {
      v12 = *(_DWORD *)(gpsi + 4604LL);
      v13 = *(_DWORD *)(gpsi + 4576LL);
      v14 = *(HBRUSH *)(gpsi + 4712LL);
      goto LABEL_11;
    }
    if ( *(_WORD *)(gpsi + 6996LL) < 8u
      || (v13 = *(_DWORD *)(gpsi + 4648LL), v13 != *(_DWORD *)(gpsi + 4568LL))
      || v13 == *(_DWORD *)(gpsi + 4588LL) )
    {
      v12 = *(_DWORD *)(gpsi + 4628LL);
      v13 = *(_DWORD *)(gpsi + 4648LL);
      v43 = *(HBRUSH *)(gpsi + 4944LL);
      goto LABEL_13;
    }
    v26 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_62:
    v12 = *(_DWORD *)(gpsi + 4640LL);
    v43 = v26;
    goto LABEL_14;
  }
  if ( (a7 & 0x10) != 0 )
  {
    v13 = *(_DWORD *)(gpsi + 4628LL);
    v26 = *(HBRUSH *)(gpsi + 4816LL);
    goto LABEL_62;
  }
  v12 = *(_DWORD *)(gpsi + 4644LL);
  v13 = *(_DWORD *)(gpsi + 4580LL);
  v14 = *(HBRUSH *)(gpsi + 4720LL);
LABEL_11:
  v43 = v14;
  if ( (a7 & 0x20) != 0 )
  {
    v44 = 1;
LABEL_13:
    v42 = GreSetBkMode(a2, 1);
  }
LABEL_14:
  v49 = GreSetTextColor(a2, v12);
  v50 = GreSetBkColor(a2, v13);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v28 = Layout;
      v29 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v43, a7);
      if ( v29 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v28);
    }
    else
    {
      a3->left += a3->bottom - a3->top;
    }
  }
  if ( (a7 & 8) != 0 )
  {
    v53 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( a6 )
    {
      v17 = *((unsigned __int16 *)a6 + 1) - 2LL;
      if ( v17 >= *(unsigned __int16 *)a6 )
        LOWORD(v17) = *(_WORD *)a6;
      *(_WORD *)a6 = v17;
      v16 = (unsigned __int16)v17 >> 1;
      a6[1][v16] = 0;
      goto LABEL_25;
    }
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v60);
LABEL_23:
        v17 = (unsigned __int16)WindowText;
        LODWORD(v16) = WindowText;
        LOWORD(v17) = 2 * WindowText;
LABEL_24:
        LOWORD(v53) = v17;
        LOWORD(v17) = v17 + 2;
        WORD1(v53) = v17;
        *((_QWORD *)&v53 + 1) = v60;
        v46 = (unsigned __int16 **)&v53;
LABEL_25:
        if ( a4 )
        {
          v48 = GreSelectFont(a2);
          memset(v58, 0, 0x44uLL);
          TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v58);
          v59 = v58[0];
          if ( TextMetricsW )
            v33 = v59;
          else
            v33 = *(_DWORD *)(GetDPIServerInfo(v32) + 40);
          v19 = (a3->top + a3->bottom - v33) / 2;
        }
        else
        {
          if ( (a7 & 2) != 0 )
            v18 = *(_DWORD *)(GetDPIMetrics(v17) + 44);
          else
            v18 = *(_DWORD *)(GetDPIServerInfo(v17) + 20);
          v19 = (a3->top + a3->bottom - v18) / 2;
          v48 = GreSelectFont(a2);
        }
        if ( v44 )
          FillCaptionGradient(a2, a3, a7 & 1);
        else
          FillRect(a2, a3, v43);
        if ( v43 == *(HBRUSH *)(gpsi + 4944LL) )
        {
          GreSetTextColor(a2, *(_DWORD *)(gpsi + 4640LL));
          GreSetBkColor(a2, *(_DWORD *)(gpsi + 4636LL));
        }
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a2, v20);
          v21 = 1;
        }
        else
        {
          v21 = 1;
          GreGetTextExtentW(a2, v20, v16, &v51, 1u);
        }
        if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x20) != 0 )
        {
          TextAlign = GreGetTextAlign(a2);
          v45 = GreSetTextAlign(a2, TextAlign | 0x100u);
        }
        if ( (a7 & 0x4000) != 0 || (_DWORD)v16 && v51.cx > a3->right - a3->left - 2 )
        {
          v56 = 0LL;
          v54 = 20LL;
          v55 = 2;
          if ( (a7 & 0x4000) != 0 )
          {
            v41 = 34853;
          }
          else if ( !a1 || (v41 = 34854, (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x10) == 0) )
          {
            v41 = 34852;
          }
          DrawTextExWorker(a2, v46[1], v16, a3, v41, (struct tagDRAWTEXTPARAMS *)&v54);
          v21 = 0;
        }
        else if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x10) != 0 )
        {
          v35 = CALL_LPK(ThreadWin32Thread);
          v40 = v39 - v38 - 2;
          if ( v35 )
            xxxClientExtTextOutW((int)a2, v40, v19, 4, (__int64)a3, v36, v16);
          else
            GreExtTextOutWInternal(a2, v40, v19, 4u, a3, v36, v16, v37, v37, (unsigned int)v37);
        }
        else if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientExtTextOutW((int)a2, v23, v19, 4, (__int64)a3, SourceString, v16);
        }
        else
        {
          GreExtTextOutWInternal(a2, v23, v19, 4u, a3, SourceString, v16, v24, v24, (unsigned int)v24);
        }
        if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x20) != 0 )
          GreSetTextAlign(a2, v45);
        if ( v48 )
          GreSelectFont(a2);
        goto LABEL_50;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) )
      {
        v57 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)&v57);
        WindowText = TextCopy((__int64)StrName, v60, 0xFFu);
        goto LABEL_23;
      }
    }
    *(_WORD *)v60 = 0;
    v17 = 0LL;
    LODWORD(v16) = 0;
    goto LABEL_24;
  }
  v21 = 1;
LABEL_50:
  GreSetTextColor(a2, v49);
  GreSetBkColor(a2, v50);
  if ( v43 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode(a2, v42);
  return v21;
}
