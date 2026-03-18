/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01CF98C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C001BEC8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     GetMaxTrackSizeForWindow @ 0x1C003DA48 (GetMaxTrackSizeForWindow.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     RECTFromSIZERECT @ 0x1C00F8D5C (RECTFromSIZERECT.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(struct tagWND *a1, LONG *a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  struct tagRECT *MonitorWorkRectForWindow; // rax
  LONG v7; // ecx
  LONG v8; // r10d
  LONG v9; // edx
  LONG v10; // r15d
  __int64 v11; // r11
  char v12; // di
  int v13; // eax
  int v14; // ecx
  LONG v15; // eax
  char v16; // dl
  struct tagSIZE MaxTrackSizeForWindow; // rax
  LONG v18; // r8d
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v20; // [rsp+28h] [rbp-18h] BYREF

  v19 = 0LL;
  if ( GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v19) )
  {
    v20 = 0LL;
    RECTFromSIZERECT(&v20, a2);
    v5 = MonitorFromRect(&v20, 1LL, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v4);
    if ( v5 )
    {
      MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(&v20, v5, a1);
      v7 = *a2;
      v20 = *MonitorWorkRectForWindow;
      if ( v20.left > v7
        || (v8 = a2[2], v20.right < v8 + v7)
        || (v9 = a2[1], v20.top > v9)
        || (v10 = a2[3], v11 = HIDWORD(*(_QWORD *)&v20.right), v20.bottom < v10 + v9) )
      {
        if ( v20.top == a2[1] )
        {
          if ( (v16 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL), (v16 & 3) == 3)
            || (v16 & 1) != 0 && v7 + (__int16)v19 == v20.left
            || (v16 & 2) != 0 && v7 + a2[2] - SWORD1(v19) == v20.right )
          {
            MaxTrackSizeForWindow = GetMaxTrackSizeForWindow((__int64)a1);
            v18 = a2[3];
            v9 = a2[1];
            if ( v18 - v9 <= MaxTrackSizeForWindow.cy && v20.bottom == v18 + v9 )
            {
              v14 = SWORD2(v19);
              v15 = v18 + SWORD2(v19) + SHIWORD(v19);
LABEL_26:
              a2[3] = v15;
              a2[1] = v9 - v14;
            }
          }
        }
      }
      else
      {
        v12 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
        if ( (v12 & 3) == 3 )
        {
LABEL_15:
          if ( (_DWORD)v11 != v10 + v9 )
            return;
          v14 = SWORD2(v19);
          v15 = v10 + SWORD2(v19) + SHIWORD(v19);
          goto LABEL_26;
        }
        if ( (v12 & 1) != 0 && v20.left == v7 )
        {
          v13 = (__int16)v19;
LABEL_14:
          a2[2] = v8 + 2 * v13;
          *a2 = v7 - v13;
          goto LABEL_15;
        }
        if ( (v12 & 2) != 0 && v20.right == v8 + v7 )
        {
          v13 = SWORD1(v19);
          goto LABEL_14;
        }
      }
    }
  }
}
