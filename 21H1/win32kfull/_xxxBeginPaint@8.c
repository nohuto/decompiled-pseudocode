/*
 * XREFs of _xxxBeginPaint@8 @ 0x7140C
 * Callers:
 *     ?xxxDWP_Paint@@YGXPAUtagWND@@@Z @ 0x1246C (-xxxDWP_Paint@@YGXPAUtagWND@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _NtUserBeginPaint@8 @ 0x71348 (_NtUserBeginPaint@8.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     ?xxxHandleMenuPainting@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x196AEB (-xxxHandleMenuPainting@@YGXPAUtagWND@@ABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     ?xxxSendChildNCPaint@@YGXPAUtagWND@@@Z @ 0x715FC (-xxxSendChildNCPaint@@YGXPAUtagWND@@@Z.c)
 *     _UT_GetParentDCClipBox@12 @ 0x71660 (_UT_GetParentDCClipBox@12.c)
 *     ?GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z @ 0x73A88 (-GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z.c)
 *     _xxxSendEraseBkgnd@12 @ 0x73B52 (_xxxSendEraseBkgnd@12.c)
 *     ?xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x73CC0 (-xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _zzzInternalHideCaret@0 @ 0x7DB46 (_zzzInternalHideCaret@0.c)
 *     _CalcWindowRgn@12 @ 0x9B782 (_CalcWindowRgn@12.c)
 */

int __fastcall xxxBeginPaint(struct tagVWPL **a1, _DWORD *a2)
{
  struct tagVWPL *v4; // eax
  struct tagVWPL *v5; // ecx
  struct tagVWPL *v7; // eax
  int v8; // esi
  int DCEx; // ebx
  HRGN NCUpdateRgn; // esi
  int EmptyRgnPublic; // eax
  struct tagWND *v13; // [esp+0h] [ebp-18h]
  struct tagWND *v14; // [esp+0h] [ebp-18h]
  int v15; // [esp+4h] [ebp-14h]
  HRGN v16; // [esp+4h] [ebp-14h]
  int v17; // [esp+10h] [ebp-8h]

  if ( (_gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1, (int)a1, 0x404u, 1);
  SetOrClrWF(0, (int)a1, 0x240u, 1);
  if ( (*((_BYTE *)a1[5] + 9) & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0, (int)a1, 0x120u, 1);
      NCUpdateRgn = GetNCUpdateRgn(v13, v15);
      xxxSendNCPaint(v14, v16);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*((_BYTE *)a1[5] + 9) & 0x20) != 0 );
  }
  else
  {
    SetOrClrWF(0, (int)a1, 0x120u, 1);
  }
  if ( a1 == *(struct tagVWPL ***)(*(_DWORD *)(_gptiCurrent + 236) + 216) )
    zzzInternalHideCaret();
  v4 = a1[5];
  v17 = *((_BYTE *)v4 + 9) & 2;
  if ( (*((_BYTE *)v4 + 9) & 2) != 0 )
  {
    SetOrClrWF(0, (int)a1, 0x104u, 1);
    SetOrClrWF(0, (int)a1, 0x102u, 1);
    v4 = a1[5];
  }
  if ( *((_DWORD *)v4 + 23) || (*((_BYTE *)v4 + 9) & 0x10) != 0 )
  {
    v5 = a1[2];
    if ( (*((_DWORD *)v5 + 80))-- == 1 )
    {
      *(_WORD *)(*((_DWORD *)v5 + 61) + 6) &= ~0x20u;
      *(_WORD *)(*((_DWORD *)v5 + 61) + 4) &= ~0x20u;
    }
  }
  SetOrClrWF(0, (int)a1, 0x110u, 1);
  v7 = a1[5];
  v8 = *((_DWORD *)v7 + 23);
  *((_DWORD *)v7 + 23) = 0;
  if ( (*((_BYTE *)a1[5] + 12) & 2) != 0 )
  {
    if ( v8 )
    {
      EmptyRgnPublic = ghrgnUpdateSave;
      if ( ghrgnUpdateSave || (EmptyRgnPublic = CreateEmptyRgnPublic(), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
      {
        if ( v8 == 1 )
          CalcWindowRgn((((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v8, 2);
        ++gnUpdateSave;
      }
    }
  }
  a2[6] = 0;
  a2[7] = 0;
  DCEx = _GetDCEx(a1, v8, 65664);
  *a2 = DCEx;
  if ( UT_GetParentDCClipBox(a2 + 2) && v17 )
    xxxSendEraseBkgnd(v8);
  xxxSendChildNCPaint(v13);
  ClearHungFlag(a1);
  a2[1] = (*((unsigned __int8 *)a1[5] + 9) >> 2) & 1;
  return DCEx;
}
