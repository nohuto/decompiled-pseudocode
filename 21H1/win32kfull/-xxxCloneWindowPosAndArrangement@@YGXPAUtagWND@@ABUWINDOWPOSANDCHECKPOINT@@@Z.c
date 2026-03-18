/*
 * XREFs of ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48 (__SetDeferredDpiStateForWindowAndChildren@12.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _GetMonitorMaxArea@8 @ 0x7307A (_GetMonitorMaxArea@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _LogicalToPhysicalInPlaceRect@8 @ 0x15135F (_LogicalToPhysicalInPlaceRect@8.c)
 *     ?ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E382 (-ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 *     ?NotifyTemplateApplied@WindowGroupingWindowManagement@@YGXPBUtagWND@@ABUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x19F31C (-NotifyTemplateApplied@WindowGroupingWindowManagement@@YGXPBUtagWND@@ABUtagGROUP_WINDOW_TEMPLATE.c)
 */

void __fastcall xxxCloneWindowPosAndArrangement(int a1, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  bool v7; // zf
  int v8; // eax
  _DWORD *v9; // esi
  unsigned __int8 *v10; // esi
  struct tagWND *v11; // edi
  PKTHREAD v12; // eax
  int v13; // eax
  void *v14; // eax
  int Prop; // eax
  int *v16; // esi
  struct tagWND *v17; // eax
  struct tagWND *v18; // edi
  int v19; // eax
  _DWORD *v20; // esi
  _DWORD *v21; // ebx
  int *MonitorMaxArea; // eax
  int v23; // eax
  char v24; // al
  struct tagRECT *v25; // [esp+0h] [ebp-A8h]
  const struct tagRECT *v26; // [esp+0h] [ebp-A8h]
  struct tagRECT *v27; // [esp+4h] [ebp-A4h]
  struct tagRECT *v28; // [esp+4h] [ebp-A4h]
  const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *v29; // [esp+8h] [ebp-A0h]
  int v30; // [esp+10h] [ebp-98h] BYREF
  int v31; // [esp+14h] [ebp-94h]
  struct tagWND *v32; // [esp+18h] [ebp-90h]
  _DWORD *v33; // [esp+1Ch] [ebp-8Ch]
  int v34; // [esp+20h] [ebp-88h]
  int v35; // [esp+24h] [ebp-84h]
  int v36; // [esp+28h] [ebp-80h]
  int v37; // [esp+2Ch] [ebp-7Ch]
  int v38; // [esp+30h] [ebp-78h]
  int v39; // [esp+34h] [ebp-74h]
  int v40; // [esp+38h] [ebp-70h]
  int v41; // [esp+3Ch] [ebp-6Ch]
  int v42; // [esp+40h] [ebp-68h]
  int v43; // [esp+44h] [ebp-64h]
  _DWORD v44[3]; // [esp+48h] [ebp-60h] BYREF
  int v45; // [esp+54h] [ebp-54h] BYREF
  struct tagWND *v46; // [esp+58h] [ebp-50h]
  int v47; // [esp+5Ch] [ebp-4Ch]
  int v48; // [esp+60h] [ebp-48h] BYREF
  int v49; // [esp+64h] [ebp-44h]
  int v50; // [esp+68h] [ebp-40h]
  int v51; // [esp+6Ch] [ebp-3Ch]
  int v52; // [esp+70h] [ebp-38h] BYREF
  int v53; // [esp+74h] [ebp-34h]
  int v54; // [esp+78h] [ebp-30h]
  int v55; // [esp+7Ch] [ebp-2Ch]
  int v56; // [esp+80h] [ebp-28h] BYREF
  int v57; // [esp+84h] [ebp-24h]
  int v58; // [esp+88h] [ebp-20h]
  int v59; // [esp+8Ch] [ebp-1Ch]
  _DWORD v60[5]; // [esp+90h] [ebp-18h] BYREF

  v44[2] = 0;
  v2 = a2;
  v3 = a1;
  v31 = a2;
  v33 = (_DWORD *)a1;
  v4 = ValidateHmonitorNoRip(*(_DWORD *)(a2 + 8));
  v30 = v4;
  if ( !v4 )
  {
    v4 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(v3 + 20) + 164));
    v30 = v4;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v44[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v44;
  v44[1] = v4;
  HMLockObject(v4);
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v7 = *(_BYTE *)(v2 + 81) == 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  if ( v7 )
  {
    if ( *(_BYTE *)(v2 + 82) )
    {
      v8 = *(_DWORD *)(v3 + 20);
      if ( (*(_BYTE *)(v8 + 23) & 1) == 0 || *(_DWORD *)(v8 + 164) != *(_DWORD *)(v2 + 8) )
        xxxMinMaximizeEx(
          (struct tagQ *)v3,
          (struct tagWND *)3,
          *(_DWORD *)(v2 + 4) != 0 ? 64 : 320,
          v30,
          0,
          *(_DWORD *)(v2 + 4));
    }
    else
    {
      v9 = (_DWORD *)(v2 + 12);
      v60[0] = *v9++;
      v60[1] = *v9++;
      v60[2] = *v9;
      v60[3] = v9[1];
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      PhysicalToLogicalDPIRect(&v56, v60, *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184), &v30);
      ExtendRectByWindowMargin((const struct tagWND *)&v56, v25, v27);
      if ( (*(_BYTE *)(*(_DWORD *)(v3 + 20) + 23) & 0x21) != 0 )
      {
        Prop = _GetProp(v3, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
        if ( Prop )
          *(_DWORD *)(Prop + 48) &= 0xFFFFFFE1;
        v10 = (unsigned __int8 *)v31;
        xxxMinMaximizeEx((struct tagQ *)v3, (struct tagWND *)9, 0x248u, v30, (unsigned int *)&v56, *(_DWORD *)(v31 + 4));
      }
      else
      {
        v10 = (unsigned __int8 *)v31;
        v32 = (struct tagWND *)ValidateHwnd(*(_DWORD *)(v31 + 4));
        v45 = 0;
        v46 = 0;
        v47 = 0;
        v11 = v32;
        if ( v32 )
        {
          v12 = KeGetCurrentThread();
          v13 = W32GetThreadWin32Thread(v12);
          v45 = *(_DWORD *)(v13 + 228);
          *(_DWORD *)(v13 + 228) = &v45;
          v46 = v11;
          HMLockObject(v11);
          v14 = &loc_80010;
        }
        else
        {
          v14 = &loc_80011 + 3;
        }
        xxxSetWindowPos(v3, (int)v11, v56, v57, v58 - v56, v59 - v57, (int)v14);
        if ( v11 )
          ThreadUnlock1();
      }
      SetOrClrWF(0, v3, 0xF01u, 1);
      SetOrClrWF(0, v3, 0xF20u, 1);
      SetOrClrWF(v10[83], v3, 0x8901u, 1);
      SetOrClrWF(v10[84], v3, 0x8902u, 1);
      SetOrClrWF(v10[85], v3, 0x8A80u, 1);
      v48 = v56;
      v49 = v57;
      v50 = v58;
      v51 = v59;
      LogicalToPhysicalInPlaceRect(v3, &v48);
      v16 = (int *)(*(_DWORD *)(v3 + 20) + 52);
      v52 = *v16++;
      v53 = *v16++;
      v54 = *v16;
      v55 = v16[1];
      LogicalToPhysicalInPlaceRect(v3, &v52);
      v2 = v31;
    }
  }
  else if ( (*(_BYTE *)(*(_DWORD *)(v3 + 20) + 23) & 0x20) == 0 )
  {
    xxxMinMaximizeEx((struct tagQ *)v3, (struct tagWND *)7, 0x140u, 0, 0, 0);
  }
  v17 = (struct tagWND *)CkptRestore(v3, *(_DWORD *)(v3 + 20) + 52);
  v32 = v17;
  if ( v17 && *(_BYTE *)(v2 + 80) )
  {
    qmemcpy(v17, (const void *)(v2 + 28), 0x34u);
    v18 = v32;
    PhysicalToLogicalDPIRect(v32, v32, *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184), &v30);
    PhysicalToLogicalDPIRect((char *)v18 + 16, (char *)v18 + 16, *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184), &v30);
    ExtendRectByWindowMargin(v18, v25, v27);
    ExtendRectByWindowMargin((struct tagWND *)((char *)v18 + 16), v26, v28);
    v19 = *((_DWORD *)v18 + 12);
    if ( (v19 & 0x20) != 0 )
    {
      PhysicalToLogicalDPIPoint((char *)v18 + 32, (char *)v18 + 32, *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184), &v30);
      v19 = *((_DWORD *)v18 + 12);
    }
    if ( (v19 & 0x40) != 0 )
    {
      v20 = v33;
      v21 = (_DWORD *)((char *)v18 + 40);
      PhysicalToLogicalDPIPoint((char *)v18 + 40, (char *)v18 + 40, *(_DWORD *)(v33[5] + 184), &v30);
      MonitorMaxArea = GetMonitorMaxArea(v20, v30, v60);
      v56 = *MonitorMaxArea;
      v57 = MonitorMaxArea[1];
      v58 = MonitorMaxArea[2];
      v59 = MonitorMaxArea[3];
      v18 = v32;
      *v21 -= v56;
      *((_DWORD *)v18 + 11) -= v57;
      v19 = *((_DWORD *)v18 + 12);
      v3 = (int)v33;
    }
    *((_DWORD *)v18 + 12) = v19 & 0xFFFFFF7F;
    v23 = *(_DWORD *)(v3 + 20);
    if ( (*(_BYTE *)(v23 + 23) & 0x20) != 0 && (*(_DWORD *)(v23 + 184) & 0xF) == 2 )
    {
      _SetDeferredDpiStateForWindowAndChildren(v3, 1, 0);
      *((_DWORD *)v18 + 12) |= 0x80u;
    }
  }
  ThreadUnlock1();
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( *(_BYTE *)(v31 + 81) )
  {
    v34 = 2;
  }
  else if ( *(_BYTE *)(v31 + 82) )
  {
    v34 = 1;
  }
  else
  {
    if ( *(_BYTE *)(v31 + 83) || (v34 = 0, *(_BYTE *)(v31 + 84)) )
      v34 = 3;
    v36 = v48;
    v37 = v49;
    v38 = v50;
    v39 = v51;
  }
  v24 = *(_BYTE *)(*(_DWORD *)(v3 + 20) + 23);
  if ( (v24 & 0x20) != 0 )
  {
    v35 = 2;
  }
  else if ( (v24 & 1) != 0 )
  {
    v35 = 1;
  }
  else
  {
    v35 = IsSemiMaximized((_DWORD *)v3) ? 3 : 0;
    v40 = v52;
    v41 = v53;
    v42 = v54;
    v43 = v55;
  }
  WindowGroupingWindowManagement::NotifyTemplateApplied(
    (WindowGroupingWindowManagement *)v25,
    (const struct tagWND *)v27,
    v29);
}
