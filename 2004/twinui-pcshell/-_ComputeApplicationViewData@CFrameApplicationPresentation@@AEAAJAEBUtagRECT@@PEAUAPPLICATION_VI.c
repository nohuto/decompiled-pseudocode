/*
 * XREFs of ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1800234C0
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800231D0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_ComputeApplicationViewData(
        HWND *this,
        const struct tagRECT *a2,
        struct APPLICATION_VIEW_DATA *a3)
{
  HMONITOR v5; // rax
  __int64 result; // rax
  int v7; // r10d
  bool v8; // al
  bool v9; // dl
  bool v10; // al
  bool v11; // cl
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  int v17; // eax
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+28h] [rbp-D8h]
  __int128 v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  struct tagPOINT Points[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-98h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-80h] BYREF

  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_DWORD *)a3 + 10) = 0;
  *(struct tagRECT *)&Points[0].x = *a2;
  SetLastError(0);
  if ( MapWindowPoints(this[16], 0LL, Points, 2u)
    || !GetLastError()
    || (result = ResultFromKnownLastError(), (int)result >= 0) )
  {
    if ( GetWindowRect(this[16], &Rect) || (result = ResultFromKnownLastError(), (int)result >= 0) )
    {
      v5 = MonitorFromWindow(this[16], 1u);
      mi.cbSize = 104;
      if ( GetMonitorInfoW(v5, &mi) || (result = ResultFromKnownLastError(), (int)result >= 0) )
      {
        result = GetScaleFactorForWindow(*(_QWORD *)this[14], &v18);
        if ( (int)result >= 0 )
        {
          v20 = 0uLL;
          v7 = Points[1].x - Points[0].x;
          LODWORD(v21) = 3;
          if ( Points[1].x - Points[0].x >= 320 * v18 / 100 && v7 < 5 * v18 )
          {
            LODWORD(v19) = 2;
          }
          else if ( v7 < Points[1].y - Points[0].y )
          {
            LODWORD(v19) = 3;
          }
          else
          {
            v8 = Rect.left <= mi.rcWork.left && mi.rcWork.left <= Points[0].x;
            v9 = mi.rcWork.right <= Rect.right && Points[1].x <= mi.rcWork.right;
            LODWORD(v19) = !v8 || !v9;
          }
          *(_QWORD *)((char *)&v19 + 4) = v7 < Points[1].y - Points[0].y;
          v10 = Rect.left <= mi.rcWork.left && mi.rcWork.left <= Points[0].x;
          v11 = Points[1].x <= mi.rcWork.right && mi.rcWork.right <= Rect.right;
          if ( v10 )
          {
            v12 = 2 - v11;
          }
          else
          {
            v12 = 0;
            if ( v11 )
              v12 = 3;
          }
          v13 = v12 - 1;
          if ( v13 )
          {
            v17 = v13 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
                DWORD2(v19) = 2;
            }
            else
            {
              DWORD2(v19) = 1;
            }
          }
          else
          {
            DWORD2(v19) = 3;
          }
          v14 = *((_BYTE *)this + 592) == 0;
          HIDWORD(v19) = 0;
          HIDWORD(v21) = 1;
          if ( !v14 )
          {
            if ( *((_BYTE *)this + 558) || *((_BYTE *)this + 559) )
              HIDWORD(v21) = 2;
            else
              HIDWORD(v21) = 0;
          }
          result = 0LL;
          v15 = v20;
          *(_OWORD *)a3 = v19;
          v16 = v21;
          *((_OWORD *)a3 + 1) = v15;
          *((_QWORD *)a3 + 4) = v16;
          *((_DWORD *)a3 + 10) = 0;
        }
      }
    }
  }
  return result;
}
