/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3568
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01F4ED0 (xxxSwitchWndProc.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     DrawEdge @ 0x1C00375E4 (DrawEdge.c)
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     _GetClientRect @ 0x1C003C56C (_GetClientRect.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F2600 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F290C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3124 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagSwitchWndInfo *v5; // rbx
  __int64 v6; // rdx
  HDC DCEx; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 DPIServerInfo; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  LONG v18; // eax
  int v19; // edx
  LONG v20; // ecx
  LONG v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct tagSwitchWndInfo *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  struct tagSwitchWndInfo *v30; // rbx
  int v31; // [rsp+20h] [rbp-58h]
  RECT v32; // [rsp+50h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v5 = Getpswi(a1, a2, a3, a4);
    if ( v5 )
    {
      DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
      if ( !*((_DWORD *)v5 + 27) )
        goto LABEL_6;
      if ( (_GetKeyState(18LL) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v5 + 27) )
      {
LABEL_6:
        if ( (_GetAsyncKeyState(18LL, v6, v8) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (__int64)v5 + 92);
      FillRect(DCEx, (LPCRECT)((char *)v5 + 92), *(HBRUSH *)(gpsi + 4816LL));
      DPIServerInfo = GetDPIServerInfo(v10, v9, v11, v12);
      v15 = *(unsigned int *)(DPIServerInfo + 20);
      v16 = 2 * *(_DWORD *)(DPIServerInfo + 16);
      *((_DWORD *)v5 + 23) += v16;
      *((_DWORD *)v5 + 25) -= v16;
      *((_DWORD *)v5 + 26) -= v15;
      *((_DWORD *)v5 + 24) += v15;
      *((_DWORD *)v5 + 24) = *((_DWORD *)v5 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v5 + 27) )
        goto LABEL_10;
      if ( (_GetKeyState(18LL) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v5 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL, v15, v14) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v17 = *(int *)(DPIServerInfo + 16) >> 1;
      v18 = *((_DWORD *)v5 + 23) - v17;
      v19 = *(int *)(DPIServerInfo + 20) >> 1;
      v32.right = *((_DWORD *)v5 + 25) + v17;
      v20 = v19 + *((_DWORD *)v5 + 26);
      v32.left = v18;
      v21 = *((_DWORD *)v5 + 24) - v19;
      v32.bottom = v20;
      v32.top = v21;
      DrawEdge(DCEx, &v32, 10, 15);
      if ( *((_DWORD *)v5 + 27) )
      {
        if ( (_GetKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
        if ( *((_DWORD *)v5 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v5, DCEx, *((_DWORD *)v5 + 13), v31, *((_DWORD *)v5 + 11), 0, 0, 0LL);
          v27 = Getpswi(a1, v24, v25, v26);
          v30 = v27;
          if ( v27
            && (!*((_DWORD *)v27 + 27) || (_GetKeyState(18LL) & 0x8000u) != 0LL)
            && (*((_DWORD *)v30 + 27) || (_GetAsyncKeyState(18LL, v28, v29) & 0x8000u) != 0LL) )
          {
            DrawSwitchWndHilite(v30, DCEx, *((_DWORD *)v30 + 17), *((_DWORD *)v30 + 18), 1);
          }
          goto LABEL_21;
        }
      }
      if ( (_GetAsyncKeyState(18LL, v22, v23) & 0x8000u) != 0LL )
        goto LABEL_15;
LABEL_21:
      _ReleaseDC(DCEx);
    }
  }
}
