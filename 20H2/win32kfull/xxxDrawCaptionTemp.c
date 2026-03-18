/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C014DC4C
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C01F7DC0 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F7F30 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E50C (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C0024D94 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     _HasCaptionIcon @ 0x1C005C5D8 (_HasCaptionIcon.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     GreExtTextOutWInternal @ 0x1C009A950 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxGetWindowSmIcon @ 0x1C00C37C8 (xxxGetWindowSmIcon.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F1438 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00F155C (TextCopy.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 *     CALL_LPK @ 0x1C014E024 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C014E060 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C014E738 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     xxxGetWindowText @ 0x1C014E85C (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246ECC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     DrawTextExWorker @ 0x1C025E650 (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        unsigned __int64 a1,
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
  __int64 v15; // r8
  __int64 v16; // r9
  int WindowText; // eax
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  int v20; // edx
  int v21; // r12d
  WCHAR *v22; // r10
  unsigned int v23; // r13d
  WCHAR *SourceString; // r8
  int v25; // r10d
  int *v26; // r11
  HBRUSH v28; // rax
  unsigned int Layout; // eax
  unsigned int v30; // r14d
  int v31; // r12d
  struct _LARGE_UNICODE_STRING *StrName; // rax
  int TextMetricsW; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  int TextAlign; // eax
  int v40; // eax
  WCHAR *v41; // r9
  int *v42; // r11
  int v43; // r8d
  int v44; // r10d
  int v45; // edx
  unsigned int v46; // eax
  int v47; // [rsp+50h] [rbp-B0h]
  HBRUSH v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 **v51; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+7Ch] [rbp-84h]
  int v55; // [rsp+80h] [rbp-80h]
  struct tagSIZE v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-70h]
  __int128 v58; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h] BYREF
  int v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B4h] [rbp-4Ch]
  __int128 v62; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v63[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v64; // [rsp+120h] [rbp+20h]
  char v65[512]; // [rsp+160h] [rbp+60h] BYREF

  left = a3->left;
  WindowSmIcon = a5;
  v51 = a6;
  v49 = 0;
  v56 = 0LL;
  v50 = 0;
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
  v47 = *(_DWORD *)(gpsi + 4572LL);
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
      v48 = *(HBRUSH *)(gpsi + 4944LL);
      goto LABEL_13;
    }
    v28 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_62:
    v12 = *(_DWORD *)(gpsi + 4640LL);
    v48 = v28;
    goto LABEL_14;
  }
  if ( (a7 & 0x10) != 0 )
  {
    v13 = *(_DWORD *)(gpsi + 4628LL);
    v28 = *(HBRUSH *)(gpsi + 4816LL);
    goto LABEL_62;
  }
  v12 = *(_DWORD *)(gpsi + 4644LL);
  v13 = *(_DWORD *)(gpsi + 4580LL);
  v14 = *(HBRUSH *)(gpsi + 4720LL);
LABEL_11:
  v48 = v14;
  if ( (a7 & 0x20) != 0 )
  {
    v49 = 1;
LABEL_13:
    v47 = GreSetBkMode(a2, 1);
  }
LABEL_14:
  v54 = GreSetTextColor(a2, v12);
  v55 = GreSetBkColor(a2, v13);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v30 = Layout;
      v31 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v48, a7);
      if ( v31 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v30);
    }
    else
    {
      a3->left += a3->bottom - a3->top;
    }
  }
  if ( (a7 & 8) != 0 )
  {
    v58 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( a6 )
    {
      v19 = *((unsigned __int16 *)a6 + 1) - 2LL;
      if ( v19 >= *(unsigned __int16 *)a6 )
        LOWORD(v19) = *(_WORD *)a6;
      *(_WORD *)a6 = v19;
      v18 = (unsigned __int16)v19 >> 1;
      a6[1][v18] = 0;
      goto LABEL_25;
    }
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v65);
LABEL_23:
        v19 = (unsigned __int16)WindowText;
        LODWORD(v18) = WindowText;
        LOWORD(v19) = 2 * WindowText;
LABEL_24:
        LOWORD(v58) = v19;
        LOWORD(v19) = v19 + 2;
        WORD1(v58) = v19;
        *((_QWORD *)&v58 + 1) = v65;
        v51 = (unsigned __int16 **)&v58;
LABEL_25:
        if ( a4 )
        {
          v53 = GreSelectFont(a2);
          memset(v63, 0, 0x44uLL);
          TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v63);
          v64 = v63[0];
          if ( TextMetricsW )
            v38 = v64;
          else
            v38 = *(_DWORD *)(GetDPIServerInfo(v35, v34, v36, v37) + 40);
          v21 = (a3->top + a3->bottom - v38) / 2;
        }
        else
        {
          if ( (a7 & 2) != 0 )
            v20 = *(_DWORD *)(GetDPIMetrics(v19, 2LL, v15, v16) + 44);
          else
            v20 = *(_DWORD *)(GetDPIServerInfo(v19, 2LL, v15, v16) + 20);
          v21 = (a3->top + a3->bottom - v20) / 2;
          v53 = GreSelectFont(a2);
        }
        if ( v49 )
          FillCaptionGradient(a2, a3, a7 & 1);
        else
          FillRect(a2, a3, v48);
        if ( v48 == *(HBRUSH *)(gpsi + 4944LL) )
        {
          GreSetTextColor(a2, *(_DWORD *)(gpsi + 4640LL));
          GreSetBkColor(a2, *(_DWORD *)(gpsi + 4636LL));
        }
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a2, v22);
          v23 = 1;
        }
        else
        {
          v23 = 1;
          GreGetTextExtentW(a2, v22, v18, &v56, 1u);
        }
        if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x20) != 0 )
        {
          TextAlign = GreGetTextAlign(a2);
          v50 = GreSetTextAlign(a2, TextAlign | 0x100u);
        }
        if ( (a7 & 0x4000) != 0 || (_DWORD)v18 && v56.cx > a3->right - a3->left - 2 )
        {
          v61 = 0LL;
          v59 = 20LL;
          v60 = 2;
          if ( (a7 & 0x4000) != 0 )
          {
            v46 = 34853;
          }
          else if ( !a1 || (v46 = 34854, (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x10) == 0) )
          {
            v46 = 34852;
          }
          DrawTextExWorker(a2, v51[1], v18, a3, v46, (struct tagDRAWTEXTPARAMS *)&v59);
          v23 = 0;
        }
        else if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x10) != 0 )
        {
          v40 = CALL_LPK(ThreadWin32Thread);
          v45 = v44 - v43 - 2;
          if ( v40 )
            xxxClientExtTextOutW((int)a2, v45, v21, 4, (__int64)a3, v41, v18);
          else
            GreExtTextOutWInternal(a2, v45, v21, 4u, a3, v41, v18, v42, v42, (unsigned int)v42);
        }
        else if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientExtTextOutW((int)a2, v25, v21, 4, (__int64)a3, SourceString, v18);
        }
        else
        {
          GreExtTextOutWInternal(a2, v25, v21, 4u, a3, SourceString, v18, v26, v26, (unsigned int)v26);
        }
        if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x20) != 0 )
          GreSetTextAlign(a2, v50);
        if ( v53 )
          GreSelectFont(a2);
        goto LABEL_50;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) )
      {
        v62 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)&v62);
        WindowText = TextCopy((__int64)StrName, v65, 0xFFu);
        goto LABEL_23;
      }
    }
    *(_WORD *)v65 = 0;
    v19 = 0LL;
    LODWORD(v18) = 0;
    goto LABEL_24;
  }
  v23 = 1;
LABEL_50:
  GreSetTextColor(a2, v54);
  GreSetBkColor(a2, v55);
  if ( v48 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode(a2, v47);
  return v23;
}
