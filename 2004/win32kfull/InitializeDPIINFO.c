/*
 * XREFs of InitializeDPIINFO @ 0x1C001FD54
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C001F1A4 (UpdateWindowSpriteDPI.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7568 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

char __fastcall InitializeDPIINFO(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v8; // r14d
  __int64 v9; // rcx
  __int64 MonitorRectForDpiContext; // rax
  INT ScaledLogPixels; // ebp
  __int64 v12; // rdx
  double v13; // xmm1_8
  double v14; // xmm1_8
  bool v15; // cl
  INT v16; // eax
  INT v17; // ecx
  int v18; // ecx
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = *(unsigned __int16 *)(*(_QWORD *)(a3 + 40) + 64LL);
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v8;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)GetMonitorRectForDpiContext(&v20, a3, a2);
  MonitorRectForDpiContext = GetMonitorRectForDpiContext(v21, a3, 18LL);
  *(_DWORD *)(a1 + 36) = 0;
  v9 = *(_QWORD *)MonitorRectForDpiContext;
  LOBYTE(MonitorRectForDpiContext) = -1;
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_QWORD *)(a1 + 24) = v9;
  if ( v8 != 96 )
  {
    MonitorRectForDpiContext = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( MonitorRectForDpiContext )
    {
      MonitorRectForDpiContext = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( *(_QWORD *)(MonitorRectForDpiContext + 448) )
      {
        v15 = (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0;
        LOBYTE(MonitorRectForDpiContext) = (a2 & 0x4000000F) == 0x40000000;
        if ( (v15 & (unsigned __int8)MonitorRectForDpiContext) != 0 )
        {
          ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
          v16 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
          v17 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 16) = v16;
          LODWORD(MonitorRectForDpiContext) = EngMulDiv(v17, ScaledLogPixels, 96);
          *(_DWORD *)(a1 + 20) = MonitorRectForDpiContext;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 32) = (unsigned __int16)ScaledLogPixels;
  if ( (_WORD)ScaledLogPixels )
  {
    LODWORD(MonitorRectForDpiContext) = DrvIsUniformSpaceMapping(*(_QWORD *)(gpDispInfo + 16LL));
    if ( (_DWORD)MonitorRectForDpiContext
      && a4
      && (LODWORD(MonitorRectForDpiContext) = IsTopLevelWindow(a4), (_DWORD)MonitorRectForDpiContext) )
    {
      MonitorRectForDpiContext = *(_QWORD *)(a3 + 40);
      *(_DWORD *)(a1 + 36) |= 1u;
      v18 = *(unsigned __int16 *)(MonitorRectForDpiContext + 68);
      *(_DWORD *)(a1 + 12) = v18;
      v14 = (double)v18;
    }
    else
    {
      v14 = (double)v8;
    }
    v13 = v14 / (double)(unsigned __int16)ScaledLogPixels;
  }
  else
  {
    if ( a4 )
    {
      v12 = *(_QWORD *)(a4 + 40);
      if ( (*(_DWORD *)(v12 + 232) & 0x10000000) == 0 )
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 416LL) + 284LL);
      LOBYTE(MonitorRectForDpiContext) = *(_DWORD *)(v12 + 288) & 0xF;
      if ( (_BYTE)MonitorRectForDpiContext == 2 && (*(_DWORD *)(v12 + 288) & 0x20000000) != 0 )
      {
        MonitorRectForDpiContext = *(_QWORD *)(a3 + 40);
        *(_DWORD *)(a1 + 36) |= 2u;
        *(_DWORD *)(a1 + 32) = v8;
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(MonitorRectForDpiContext + 68);
      }
    }
    v13 = DOUBLE_1_0;
  }
  *(double *)a1 = v13;
  if ( a4 )
  {
    LODWORD(MonitorRectForDpiContext) = IsChildWindowDpiBoundary((struct tagWND *)a4);
    if ( (_DWORD)MonitorRectForDpiContext )
      *(_DWORD *)(a1 + 36) |= 4u;
  }
  return MonitorRectForDpiContext;
}
