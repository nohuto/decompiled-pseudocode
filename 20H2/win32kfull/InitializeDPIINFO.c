/*
 * XREFs of InitializeDPIINFO @ 0x1C0090EAC
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C0090E4C (UpdateWindowSpriteDPI.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E68A8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C003DDC8 (GetMonitorRectForDpiContext.c)
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

char __fastcall InitializeDPIINFO(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v8; // r14d
  __int64 v9; // rcx
  _OWORD *MonitorRectForDpiContext; // rax
  INT ScaledLogPixels; // ebp
  __int64 v12; // rdx
  double v13; // xmm1_8
  double v14; // xmm1_8
  __int64 v15; // rdx
  bool v16; // cl
  __int64 v17; // r8
  __int64 v18; // r9
  INT v19; // eax
  INT v20; // ecx
  int v21; // ecx
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF
  __int128 v24; // [rsp+30h] [rbp-28h] BYREF

  v8 = *(unsigned __int16 *)(*(_QWORD *)(a3 + 40) + 64LL);
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v8;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)GetMonitorRectForDpiContext(&v23, a3, a2);
  MonitorRectForDpiContext = GetMonitorRectForDpiContext(&v24, a3, 0x12u);
  *(_DWORD *)(a1 + 36) = 0;
  v9 = *(_QWORD *)MonitorRectForDpiContext;
  LOBYTE(MonitorRectForDpiContext) = -1;
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_QWORD *)(a1 + 24) = v9;
  if ( v8 != 96 )
  {
    MonitorRectForDpiContext = (_OWORD *)W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( MonitorRectForDpiContext )
    {
      MonitorRectForDpiContext = (_OWORD *)W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( *((_QWORD *)MonitorRectForDpiContext + 57) )
      {
        v16 = (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0;
        LOBYTE(MonitorRectForDpiContext) = (a2 & 0x4000000F) == 0x40000000;
        if ( (v16 & (unsigned __int8)MonitorRectForDpiContext) != 0 )
        {
          ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8, v15, v17, v18);
          v19 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
          v20 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 16) = v19;
          LODWORD(MonitorRectForDpiContext) = EngMulDiv(v20, ScaledLogPixels, 96);
          *(_DWORD *)(a1 + 20) = (_DWORD)MonitorRectForDpiContext;
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
      MonitorRectForDpiContext = *(_OWORD **)(a3 + 40);
      *(_DWORD *)(a1 + 36) |= 1u;
      v21 = *((unsigned __int16 *)MonitorRectForDpiContext + 34);
      *(_DWORD *)(a1 + 12) = v21;
      v14 = (double)v21;
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
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 424LL) + 284LL);
      LOBYTE(MonitorRectForDpiContext) = *(_DWORD *)(v12 + 288) & 0xF;
      if ( (_BYTE)MonitorRectForDpiContext == 2 && (*(_DWORD *)(v12 + 288) & 0x20000000) != 0 )
      {
        MonitorRectForDpiContext = *(_OWORD **)(a3 + 40);
        *(_DWORD *)(a1 + 36) |= 2u;
        *(_DWORD *)(a1 + 32) = v8;
        *(_DWORD *)(a1 + 12) = *((unsigned __int16 *)MonitorRectForDpiContext + 34);
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
  return (char)MonitorRectForDpiContext;
}
