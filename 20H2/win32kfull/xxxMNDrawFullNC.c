/*
 * XREFs of xxxMNDrawFullNC @ 0x1C024C4A4
 * Callers:
 *     xxxMNSetTop @ 0x1C023B0B8 (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     DrawEdge @ 0x1C00375E4 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1C0037A28 (GreSetBrushOrg.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxSendUAHMenuMessage @ 0x1C00FB170 (xxxSendUAHMenuMessage.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C011B8B8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     DrawFrame @ 0x1C014F4A8 (DrawFrame.c)
 *     GreGetBrushOrg @ 0x1C0152D8C (GreGetBrushOrg.c)
 *     MNDrawArrow @ 0x1C024C0AC (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C024C278 (MNDrawEdge.c)
 */

__int64 __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 **a3)
{
  __int64 result; // rax
  int v4; // ebx
  HDC DCEx; // rsi
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rdx
  LONG bottom; // r12d
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  const struct tagDPIMETRICS *v23; // rax
  RECT v24; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v25[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h]

  result = (__int64)*a3;
  v4 = 0;
  v26 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)result + 40LL) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    result = MNIsUAHMenu(*(_QWORD *)(**a3 + 40));
    if ( (_DWORD)result )
    {
      result = (__int64)*a3;
      if ( *(_QWORD *)(**a3 + 16) )
      {
        v9 = *a3;
        v25[2] = 0LL;
        v10 = *(_QWORD *)(*v9 + 16);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v25;
        v25[1] = v10;
        if ( v10 )
          HMLockObject(v10);
        v4 = xxxSendUAHMenuMessage(*(_QWORD *)(**a3 + 16), 149LL, *(__int64 **)(**a3 + 40), (__int64)DCEx);
        result = ThreadUnlock1(v13, v12, v14);
      }
    }
    if ( *(_QWORD *)(**a3 + 40) )
    {
      if ( v4 )
      {
        MNDrawArrow(DCEx, a3, -3);
        result = MNDrawArrow(DCEx, a3, -4);
      }
      else
      {
        v15 = (_DWORD *)*((_QWORD *)a1 + 5);
        v24.top = 0;
        v24.left = 0;
        v24.right = v15[24] - v15[22];
        v24.bottom = v15[25] - v15[23];
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
        {
          MNDrawEdge(*(_QWORD *)(**a3 + 40), a2, &v24, 0x2000);
          bottom = v24.bottom;
        }
        else
        {
          DrawEdge(DCEx, &v24, 5, 8207);
          DrawFrame(DCEx, &v24.left, 1, 120);
          ++v24.left;
          --v24.right;
          ++v24.top;
          bottom = v24.bottom - 1;
        }
        v17 = bottom - *((_DWORD *)GetDPIMETRICS(a1) + 7);
        GreGetBrushOrg(DCEx, &v26);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL) )
        {
          v18 = MNGetpItemFromIndex(*(_QWORD *)(**a3 + 40), *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 116LL));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_QWORD *)v18 + 68LL), 0LL);
          v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL);
        }
        else
        {
          v19 = *(_QWORD *)(gpsi + 4728LL);
        }
        v20 = GreSelectBrush(DCEx, v19);
        v21 = v24.right - v24.left;
        v27 = v20;
        DPIMETRICS = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, (unsigned int)v24.left, v24.top, v21, *((_DWORD *)DPIMETRICS + 7), 15728673);
        MNDrawArrow(DCEx, a3, -3);
        v23 = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, (unsigned int)v24.left, v17, v21, *((_DWORD *)v23 + 7), 15728673);
        MNDrawArrow(DCEx, a3, -4);
        GreSetBrushOrg(DCEx, v26, SHIDWORD(v26), 0LL);
        result = GreSelectBrush(DCEx, v27);
      }
      if ( !a2 )
        return _ReleaseDC(DCEx);
    }
    else if ( !a2 && DCEx )
    {
      return _ReleaseDC(DCEx);
    }
  }
  return result;
}
