/*
 * XREFs of _xxxDrawCaptionTemp@28 @ 0xBC4CE
 * Callers:
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _NtUserDrawCaption@16 @ 0x160F85 (_NtUserDrawCaption@16.c)
 *     _NtUserDrawCaptionTemp@28 @ 0x161080 (_NtUserDrawCaptionTemp@28.c)
 *     ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC (-xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z.c)
 * Callees:
 *     _xxxGetWindowSmIcon@8 @ 0x1D0E0 (_xxxGetWindowSmIcon@8.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z @ 0x1D702 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z.c)
 *     _TextCopy@12 @ 0x1D7C6 (_TextCopy@12.c)
 *     __HasCaptionIcon@4 @ 0x321BC (__HasCaptionIcon@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreGetTextMetricsW@8 @ 0x84442 (_GreGetTextMetricsW@8.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientExtTextOutW@32 @ 0xBC862 (_xxxClientExtTextOutW@32.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     ?FillCaptionGradient@@YGXPAUHDC__@@PBUtagRECT@@H@Z @ 0xBCE06 (-FillCaptionGradient@@YGXPAUHDC__@@PBUtagRECT@@H@Z.c)
 *     _xxxGetWindowText@12 @ 0xBDB18 (_xxxGetWindowText@12.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106 (-DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z.c)
 *     _DrawTextExWorker@28 @ 0x1B8194 (_DrawTextExWorker@28.c)
 */

int __fastcall xxxDrawCaptionTemp(
        _DWORD *a1,
        HDC a2,
        _DWORD *a3,
        int a4,
        HDC a5,
        unsigned __int16 *a6,
        struct tagCURSOR *a7)
{
  char v8; // dl
  int v9; // esi
  int v11; // eax
  BOOL HasCaptionIcon; // eax
  HDC v13; // eax
  int v14; // edx
  int v15; // eax
  char v16; // cl
  PKTHREAD CurrentThread; // eax
  int v18; // ecx
  int WindowText; // edi
  char CurrentThreadDpiAwarenessContext; // al
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // ecx
  int WindowSmIcon; // eax
  struct XDCOBJ *v29; // eax
  int Layout; // eax
  struct _LARGE_UNICODE_STRING *StrName; // eax
  unsigned int v32; // eax
  int ProcessDpiMetrics; // eax
  int TextMetricsW; // eax
  int ProcessDpiServerInfo; // eax
  int v36; // ecx
  int TextAlign; // eax
  int v38; // eax
  int v39; // eax
  RECT *v40; // [esp+0h] [ebp-308h]
  HBRUSH v41; // [esp+4h] [ebp-304h]
  int v42; // [esp+10h] [ebp-2F8h]
  int v43; // [esp+10h] [ebp-2F8h]
  int v44; // [esp+10h] [ebp-2F8h]
  struct XDCOBJ *v45; // [esp+14h] [ebp-2F4h]
  int v46; // [esp+14h] [ebp-2F4h]
  struct XDCOBJ *v47; // [esp+14h] [ebp-2F4h]
  HDC v48; // [esp+1Ch] [ebp-2ECh]
  WCHAR *SourceString; // [esp+20h] [ebp-2E8h]
  WCHAR *SourceStringa; // [esp+20h] [ebp-2E8h]
  HDC v51; // [esp+24h] [ebp-2E4h]
  HDC ThreadWin32Thread; // [esp+24h] [ebp-2E4h]
  int *v53; // [esp+28h] [ebp-2E0h]
  int v54; // [esp+2Ch] [ebp-2DCh]
  int v56; // [esp+34h] [ebp-2D4h]
  int v57; // [esp+38h] [ebp-2D0h] BYREF
  _WORD *v58; // [esp+3Ch] [ebp-2CCh]
  int v59; // [esp+40h] [ebp-2C8h]
  struct tagSIZE v60; // [esp+44h] [ebp-2C4h] BYREF
  int v61; // [esp+4Ch] [ebp-2BCh]
  int v62; // [esp+50h] [ebp-2B8h]
  int v63; // [esp+54h] [ebp-2B4h]
  _DWORD *v64; // [esp+58h] [ebp-2B0h]
  int v65; // [esp+5Ch] [ebp-2ACh]
  int v66; // [esp+60h] [ebp-2A8h]
  int v67; // [esp+64h] [ebp-2A4h] BYREF
  int v68; // [esp+68h] [ebp-2A0h]
  int v69; // [esp+6Ch] [ebp-29Ch]
  int v70; // [esp+70h] [ebp-298h]
  int v71; // [esp+74h] [ebp-294h]
  _BYTE v72[76]; // [esp+78h] [ebp-290h] BYREF
  _DWORD v73[15]; // [esp+C4h] [ebp-244h] BYREF
  _WORD v74[258]; // [esp+100h] [ebp-208h] BYREF

  v63 = a4;
  v8 = (char)a7;
  v9 = (int)a3;
  v53 = (int *)a6;
  v59 = 0;
  v60.cx = 0;
  v60.cy = 0;
  v61 = 0;
  v11 = a3[2];
  v64 = a3;
  v51 = a5;
  v62 = 1;
  if ( v11 <= *a3 )
    return 0;
  if ( a1 )
  {
    if ( !a5 )
    {
      HasCaptionIcon = _HasCaptionIcon(a1);
      v8 = (char)a7;
      if ( HasCaptionIcon )
      {
        if ( ((unsigned __int8)a7 & 2) == 0 && (*(_BYTE *)(a1[5] + 22) & 8) != 0 )
        {
          WindowSmIcon = xxxGetWindowSmIcon((ULONG_PTR)a1, (unsigned __int16)a7 & 0x2000);
          v8 = (char)a7;
          v51 = (HDC)WindowSmIcon;
        }
      }
    }
  }
  v56 = *(_DWORD *)(_gpsi + 4172);
  SourceString = (WCHAR *)(v8 & 1);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 0x10) != 0 )
    {
      if ( *(_WORD *)(_gpsi + 6240) >= 8u )
      {
        v29 = *(struct XDCOBJ **)(_gpsi + 4248);
        v45 = v29;
        if ( v29 == *(struct XDCOBJ **)(_gpsi + 4168) && v29 != *(struct XDCOBJ **)(_gpsi + 4188) )
        {
          v14 = *(_DWORD *)(_gpsi + 4240);
          v48 = *(HDC *)(_gpsi + 4372);
          goto LABEL_12;
        }
      }
      v42 = *(_DWORD *)(_gpsi + 4228);
      v45 = *(struct XDCOBJ **)(_gpsi + 4248);
      v48 = *(HDC *)(_gpsi + 4416);
      goto LABEL_10;
    }
    v42 = *(_DWORD *)(_gpsi + 4204);
    v45 = *(struct XDCOBJ **)(_gpsi + 4176);
    v13 = *(HDC *)(_gpsi + 4300);
  }
  else
  {
    if ( (v8 & 0x10) != 0 )
    {
      v42 = *(_DWORD *)(_gpsi + 4240);
      v45 = *(struct XDCOBJ **)(_gpsi + 4228);
      v48 = *(HDC *)(_gpsi + 4352);
      goto LABEL_11;
    }
    v42 = *(_DWORD *)(_gpsi + 4244);
    v45 = *(struct XDCOBJ **)(_gpsi + 4180);
    v13 = *(HDC *)(_gpsi + 4304);
  }
  v48 = v13;
  if ( (v8 & 0x20) != 0 )
  {
    v59 = 1;
LABEL_10:
    v56 = GreSetBkMode(a2, 1);
  }
LABEL_11:
  v14 = v42;
LABEL_12:
  v65 = GreSetTextColor(a2, v14);
  v15 = GreSetBkColor(a2, (int)v45);
  v16 = (char)a7;
  v66 = v15;
  if ( v51 && ((unsigned __int8)a7 & 2) == 0 )
  {
    if ( ((unsigned __int8)a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v44 = Layout;
      v47 = (struct XDCOBJ *)(Layout & 1);
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, -1, Layout | 8);
      DrawCaptionIcon(v51, (struct tagRECT *)v48, a7, (HBRUSH)v40, (unsigned int)v41);
      if ( v47 )
        GreSetLayout(a2, -1, v44);
      v16 = (char)a7;
    }
    else
    {
      *a3 += a3[3] - a3[1];
    }
  }
  if ( (v16 & 8) == 0 )
    goto LABEL_46;
  v57 = 0;
  v58 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (HDC)W32GetThreadWin32Thread(CurrentThread);
  if ( !a6 )
  {
    if ( a1 )
    {
      if ( ((unsigned __int16)a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(v18);
        LOWORD(v57) = 2 * WindowText;
LABEL_18:
        v43 = WindowText;
LABEL_19:
        v58 = v74;
        HIWORD(v57) = v57 + 2;
        v53 = &v57;
        goto LABEL_20;
      }
      if ( *(_DWORD *)(a1[5] + 116) )
      {
        v67 = 0;
        v68 = 0;
        v69 = 0;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 25),
                    (struct _LARGE_UNICODE_STRING *)&v67);
        WindowText = TextCopy((int)StrName, v74, 255);
        v43 = WindowText;
        LOWORD(v57) = 2 * WindowText;
        goto LABEL_19;
      }
    }
    WindowText = 0;
    v74[0] = 0;
    LOWORD(v57) = 0;
    goto LABEL_18;
  }
  v32 = a6[1] - 2;
  if ( v32 >= *a6 )
    LOWORD(v32) = *a6;
  *a6 = v32;
  WindowText = (unsigned __int16)v32 >> 1;
  v43 = WindowText;
  *(_WORD *)(*((_DWORD *)a6 + 1) + 2 * WindowText) = 0;
LABEL_20:
  if ( v63 )
  {
    v54 = GreSelectFont(a2, v63);
    memset(v72, 0, 0x44u);
    TextMetricsW = GreGetTextMetricsW(a2, (struct RFONTOBJ *)v72);
    qmemcpy(v73, v72, sizeof(v73));
    if ( TextMetricsW )
    {
      v36 = v73[0];
    }
    else
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        ProcessDpiServerInfo = GetProcessDpiServerInfo();
      else
        ProcessDpiServerInfo = Get96DpiServerInfo();
      v36 = *(_DWORD *)(ProcessDpiServerInfo + 32);
    }
    v9 = (int)v64;
    WindowText = v43;
    v46 = (v64[1] + v64[3] - v36) / 2;
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( ((unsigned __int8)a7 & 2) != 0 )
    {
      if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
        ProcessDpiMetrics = GetProcessDpiMetrics();
      else
        ProcessDpiMetrics = Get96DpiMetrics();
      v22 = *(_DWORD *)(ProcessDpiMetrics + 28);
      v23 = *(_DWORD *)(ProcessDpiMetrics + 36);
    }
    else
    {
      if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
        v21 = GetProcessDpiServerInfo();
      else
        v21 = Get96DpiServerInfo();
      v22 = *(_DWORD *)(v21 + 8);
      v23 = *(_DWORD *)(v21 + 16);
    }
    v46 = (a3[1] + a3[3] - v23) / 2;
    v54 = GreSelectFont(a2, v22);
  }
  if ( v59 )
    FillCaptionGradient((HDC)SourceString, v40, (int)v41);
  else
    FillRect(v48, v40, v41);
  if ( v48 == *(HDC *)(_gpsi + 4416) )
  {
    GreSetTextColor(a2, *(_DWORD *)(_gpsi + 4240));
    GreSetBkColor(a2, *(_DWORD *)(_gpsi + 4236));
  }
  if ( (int)CALL_LPK(ThreadWin32Thread, v53[1]) )
    xxxClientGetTextExtentPointW(WindowText, &v60);
  else
    GreGetTextExtentW(a2, WindowText, &v60, 1);
  v24 = (int)a1;
  if ( a1 && (*(_BYTE *)(a1[5] + 17) & 0x20) != 0 )
  {
    TextAlign = GreGetTextAlign(a2);
    v38 = GreSetTextAlign(a2, TextAlign | 0x100);
    v24 = (int)a1;
    v61 = v38;
  }
  if ( ((unsigned __int16)a7 & 0x4000) != 0 || WindowText && v60.cx > *(_DWORD *)(v9 + 8) - *(_DWORD *)v9 - 2 )
  {
    v67 = 20;
    v68 = 0;
    v71 = 0;
    v69 = 2;
    v70 = 0;
    if ( ((unsigned __int16)a7 & 0x4000) != 0 )
    {
      v39 = 34853;
    }
    else if ( !v24 || (v39 = 34854, (*(_BYTE *)(*(_DWORD *)(v24 + 20) + 17) & 0x10) == 0) )
    {
      v39 = 34852;
    }
    DrawTextExWorker(a2, WindowText, v9, v39, (int)&v67, v24);
    v62 = 0;
    goto LABEL_41;
  }
  if ( v24 && (*(_BYTE *)(*(_DWORD *)(v24 + 20) + 17) & 0x10) != 0 )
  {
    SourceStringa = (WCHAR *)v53[1];
    v25 = CALL_LPK(ThreadWin32Thread, *(_DWORD *)(v9 + 8));
    HIDWORD(v25) = HIDWORD(v25) - v60.cx - 2;
    if ( (_DWORD)v25 )
      goto LABEL_40;
  }
  else
  {
    SourceStringa = (WCHAR *)v53[1];
    v25 = CALL_LPK(ThreadWin32Thread, *(_DWORD *)v9 + 2);
    if ( (_DWORD)v25 )
    {
LABEL_40:
      xxxClientExtTextOutW(v46, 4, v9, SourceStringa, WindowText, v26);
      goto LABEL_41;
    }
  }
  GreExtTextOutWInternal(
    a2,
    (ERECTL *)HIDWORD(v25),
    (struct XDCOBJ *)v46,
    4,
    (ERECTL **)v9,
    SourceStringa,
    (struct tagRECT *)WindowText,
    0,
    0,
    0);
LABEL_41:
  if ( a1 && (*(_BYTE *)(a1[5] + 17) & 0x20) != 0 )
    GreSetTextAlign(a2, v61);
  if ( v54 )
    GreSelectFont(a2, v54);
LABEL_46:
  GreSetTextColor(a2, v65);
  GreSetBkColor(a2, v66);
  if ( v48 == *(HDC *)(_gpsi + 4416) )
    GreSetBkMode(a2, v56);
  return v62;
}
