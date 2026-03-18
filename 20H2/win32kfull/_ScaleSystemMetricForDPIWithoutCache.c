/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E9D80
 * Callers:
 *     GetWindowBordersWithDpiAwareness @ 0x1C004C5DC (GetWindowBordersWithDpiAwareness.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C005B890 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00C7DC0 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00C966C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00CBE20 (_AdjustWindowRectExForDpi.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01E9D00 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E9D80 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetCursorSizeFromIndex @ 0x1C00281C8 (GetCursorSizeFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C003510C (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C0037DEC (GetDPIServerInfoForDpi.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E9D80 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v4; // ebx
  int v5; // r14d
  __int64 v6; // rax
  INT v7; // edi
  __int64 v8; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edi
  __int64 DPIMETRICSForDpi; // rax
  INT DpiDependentMetric; // eax
  __int64 v18; // rcx
  int v19; // edi
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax

  v3 = a2;
  v4 = a1;
  if ( (unsigned int)a1 <= 0x1D )
  {
    v5 = 0;
    if ( (int)a2 > 0 )
    {
      if ( (int)a1 <= 16 )
      {
        if ( (_DWORD)a1 != 16 )
        {
          if ( (_DWORD)a1 == 2 )
          {
            v8 = 13LL;
          }
          else
          {
            if ( (int)a1 <= 6 )
              goto LABEL_29;
            if ( (int)a1 <= 8 )
            {
              if ( (unsigned int)a2 >= 0x90 )
              {
                if ( (unsigned int)a2 >= 0xC0 )
                {
                  if ( (unsigned int)a2 >= 0x120 )
                    v5 = 4 - ((unsigned int)a2 < 0x180);
                  else
                    v5 = 2;
                }
                else
                {
                  v5 = 1;
                }
              }
              return (unsigned int)GetCursorSizeFromIndex(v5);
            }
            if ( (_DWORD)a1 != 9 )
            {
              if ( (_DWORD)a1 == 14 || (_DWORD)a1 == 15 )
              {
                v6 = Get96DpiServerInfo(a1, a2, a3);
                return (unsigned int)(EngMulDiv(*(_DWORD *)(v6 + 4), v3, 96) + 3);
              }
LABEL_29:
              DpiDependentMetric = GetDpiDependentMetric(a1, 0x60u);
              v7 = EngMulDiv(DpiDependentMetric, v3, 96);
              if ( v4 > 19 )
              {
                v20 = v4 - 23;
                if ( v20 )
                {
                  v21 = v20 - 1;
                  if ( !v21 )
                  {
                    if ( v7 > *(_DWORD *)(GetDPIMETRICSForDpi(v3) + 44) + 2 )
                      return (unsigned int)v7;
                    v19 = *(_DWORD *)(GetDPIMETRICSForDpi(v3) + 44);
                    return (unsigned int)(v19 + 2);
                  }
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    v23 = v22 - 1;
                    if ( v23 )
                    {
                      if ( v23 == 3 )
                      {
                        v24 = 100;
                        if ( v7 < 100 )
                          v24 = v7;
                        if ( v24 <= 0 )
                        {
                          return 0;
                        }
                        else if ( v7 >= 100 )
                        {
                          return 100;
                        }
                      }
                    }
                    else if ( v7 <= *(_DWORD *)(GetDPIMETRICSForDpi(v3) + 28) )
                    {
                      return *(unsigned int *)(GetDPIMETRICSForDpi(v3) + 28);
                    }
                    return (unsigned int)v7;
                  }
                }
              }
              else
              {
                if ( v4 == 19 )
                {
                  if ( v7 > (int)ScaleSystemMetricForDPIWithoutCache(6LL, v3) )
                    return (unsigned int)v7;
                  v18 = 6LL;
                  return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v18, v3);
                }
                if ( v4 > 1 )
                {
                  if ( v4 <= 2 )
                    return (unsigned int)v7;
                  if ( v4 > 4 )
                  {
                    if ( v4 <= 9 )
                      return (unsigned int)v7;
                    if ( v4 > 12 )
                    {
                      if ( v4 != 13 )
                      {
                        if ( v4 != 18 || v7 > (int)ScaleSystemMetricForDPIWithoutCache(5LL, v3) )
                          return (unsigned int)v7;
                        v18 = 5LL;
                        return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v18, v3);
                      }
                      if ( v7 > *(_DWORD *)(GetDPIServerInfoForDpi(v3) + 20) + 2 )
                        return (unsigned int)v7;
                      v19 = *(_DWORD *)(GetDPIServerInfoForDpi(v3) + 20);
                      return (unsigned int)(v19 + 2);
                    }
                  }
                }
              }
              if ( v7 <= 8 )
                return 8;
              return (unsigned int)v7;
            }
            v8 = 26LL;
          }
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v8, a2) + 1);
        }
        v10 = 2 * *(_DWORD *)(GetDPIServerInfoForDpi(a2) + 16);
        v11 = ScaleSystemMetricForDPIWithoutCache(29LL, v3) + v10;
        v12 = 2 * (v11 + ScaleSystemMetricForDPIWithoutCache(14LL, v3));
        v13 = ScaleSystemMetricForDPIWithoutCache(12LL, v3);
        v14 = 13LL;
        v15 = v13 + 4 + v12 + 2 * v13;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v14, v3) + v15);
      }
      switch ( (_DWORD)a1 )
      {
        case 0x11:
          v32 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
          v33 = ScaleSystemMetricForDPIWithoutCache(15LL, v3);
          v14 = 2LL;
          v15 = 2 * (v33 + v32);
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v14, v3) + v15);
        case 0x14:
          v30 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
          v31 = ScaleSystemMetricForDPIWithoutCache(5LL, v3);
          v27 = v3;
          if ( v30 < v31 / 2 )
          {
            v28 = 12LL;
            return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v28, v27) - 2);
          }
          v29 = 5LL;
          break;
        case 0x15:
          v25 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
          v26 = ScaleSystemMetricForDPIWithoutCache(6LL, v3);
          v27 = v3;
          if ( v25 < v26 / 2 )
          {
            v28 = 13LL;
            return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v28, v27) - 2);
          }
          v29 = 6LL;
          break;
        case 0x16:
          v8 = 24LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v8, a2) + 1);
        default:
          if ( (unsigned int)(a1 - 27) <= 1 )
          {
            DPIMETRICSForDpi = GetDPIMETRICSForDpi((unsigned int)a2);
            return (unsigned int)(((*(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(DPIMETRICSForDpi + 12) + 1) & 0xFFFE)
                                - 1);
          }
          goto LABEL_29;
      }
      return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v29, v27) / 2);
    }
  }
  UserSetLastError(87LL, a2, a3);
  return 0LL;
}
