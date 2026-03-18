/*
 * XREFs of xxxBeginPaint @ 0x1C00CFA68
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserBeginPaint @ 0x1C00CC350 (NtUserBeginPaint.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00F4DB0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxTooltipWndProc @ 0x1C011C5E0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023571C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C001AB6C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     CalcWindowRgn @ 0x1C0040864 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     UT_GetParentDCClipBox @ 0x1C00CF94C (UT_GetParentDCClipBox.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C00CF9DC (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C00D1F84 (ClearHungFlag.c)
 *     zzzInternalHideCaret @ 0x1C00D68F0 (zzzInternalHideCaret.c)
 *     xxxSendEraseBkgnd @ 0x1C00FBE64 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0106AE0 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 DCEx; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 result; // rax
  HRGN NCUpdateRgn; // rbx
  __int64 EmptyRgnPublic; // rax

  if ( (gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1, (__int64)a1, 0x404u, 1);
  SetOrClrWF(0, (__int64)a1, 0x240u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0, (__int64)a1, 0x120u, 1);
      NCUpdateRgn = (HRGN)GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x20) != 0 );
  }
  else
  {
    SetOrClrWF(0, (__int64)a1, 0x120u, 1);
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
    zzzInternalHideCaret();
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 17) & 2;
  if ( (*(_BYTE *)(v4 + 17) & 2) != 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x104u, 1);
    SetOrClrWF(0, (__int64)a1, 0x102u, 1);
    v4 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v4 + 136) || (*(_BYTE *)(v4 + 17) & 0x10) != 0 )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v6 + 600))-- == 1 )
    {
      *(_WORD *)(*(_QWORD *)(v6 + 448) + 6LL) &= ~0x20u;
      *(_WORD *)(*(_QWORD *)(v6 + 448) + 4LL) &= ~0x20u;
    }
  }
  SetOrClrWF(0, (__int64)a1, 0x110u, 1);
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_QWORD *)(v8 + 136);
  *(_QWORD *)(v8 + 136) = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( v9 )
    {
      EmptyRgnPublic = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
      if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type
        || (EmptyRgnPublic = CreateEmptyRgnPublic(), (*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = EmptyRgnPublic) != 0LL) )
      {
        if ( v9 == 1 )
          CalcWindowRgn((__int64)a1, EmptyRgnPublic, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v9, 2LL);
        ++LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink);
      }
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v9, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v11 = DCEx;
  if ( (unsigned int)UT_GetParentDCClipBox((__int64)a1, DCEx, (int *)(a2 + 12)) && v5 )
    xxxSendEraseBkgnd(a1, v11, v9);
  xxxSendChildNCPaint(a1, v12, v13);
  ClearHungFlag(a1);
  result = v11;
  *(_DWORD *)(a2 + 8) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 17LL) >> 2) & 1;
  return result;
}
