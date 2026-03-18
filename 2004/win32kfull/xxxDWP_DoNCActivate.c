/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C005E4B4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C02346E0 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     IsModelessMenuNotificationWindow @ 0x1C005E640 (IsModelessMenuNotificationWindow.c)
 *     DwmAsyncActivationChange @ 0x1C005E680 (DwmAsyncActivationChange.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C005FF14 (GetWindowBorders.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     xxxMenuBarDraw @ 0x1C024E57C (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(__int64 a1, char a2, __int64 a3)
{
  int v5; // r15d
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  char v8; // r8
  unsigned __int16 v9; // di
  __int64 v10; // rbp
  __int64 DCEx; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  void *v15; // rax
  unsigned int WindowBorders; // eax

  v5 = 4108;
  if ( (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow() )
  {
    v6 = 1LL;
    v5 = 4109;
  }
  else
  {
    v6 = 0LL;
  }
  SetOrClrWF(v6, a1, 64LL, 1LL);
  if ( a3 != -1 )
  {
    v7 = *(_BYTE **)(a1 + 40);
    v8 = v7[31];
    if ( (v8 & 0x10) != 0 && (v7[17] & 1) == 0 )
    {
      v9 = 0;
      if ( *(_DWORD *)(gpsi + 4576LL) != *(_DWORD *)(gpsi + 4580LL)
        || *(_DWORD *)(gpsi + 4604LL) != *(_DWORD *)(gpsi + 4644LL) )
      {
        v9 = 4108;
      }
      if ( (v8 & 0x20) == 0 && (v7[30] & 4) != 0 && *(_DWORD *)(gpsi + 4608LL) != *(_DWORD *)(gpsi + 4612LL) )
        v9 |= 0x8000u;
      if ( v9 )
      {
        v10 = UserValidateCopyRgn(a3);
        DCEx = _GetDCEx(a1, v10, 65537LL);
        if ( DCEx )
        {
          v12 = *(_QWORD *)(a1 + 40);
          if ( (*(_BYTE *)(v12 + 16) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v12 + 28), *(unsigned int *)(v12 + 24));
            xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
          }
          xxxDrawCaptionBar(a1, DCEx, v5 | (unsigned int)v9);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v10);
        }
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v15 = (void *)ReferenceDwmApiPort(v14);
      return DwmAsyncActivationChange(v15);
    }
  }
  return result;
}
