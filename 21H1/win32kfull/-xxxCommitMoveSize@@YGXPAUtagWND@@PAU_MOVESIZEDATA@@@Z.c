/*
 * XREFs of ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3
 * Callers:
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1750AE (-xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x171919 (-IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x17197A (-IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z @ 0x1719C0 (-MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z.c)
 *     ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18 (-MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x1721B1 (-ShouldGoMonitorMaximizedMoveSizeData@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 *     ?ShouldSendSizing@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x1721F4 (-ShouldSendSizing@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YGXPAUtagRECT@@0@Z @ 0x172420 (-SwapRect@@YGXPAUtagRECT@@0@Z.c)
 *     ?WasMaximized@@YGEPAU_MOVESIZEDATA@@@Z @ 0x172B7C (-WasMaximized@@YGEPAU_MOVESIZEDATA@@@Z.c)
 *     ?WasSemiMaximized@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x172B90 (-WasSemiMaximized@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 *     ?WasVerticallyMaximized@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x172B9E (-WasVerticallyMaximized@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YGXPAU_MOVESIZEDATA@@H@Z @ 0x1743B3 (-xxxGetMinMaxTrackInfo@@YGXPAU_MOVESIZEDATA@@H@Z.c)
 *     _WPP_RECORDER_SF_qdddd@40 @ 0x1765FC (_WPP_RECORDER_SF_qdddd@40.c)
 */

void __fastcall xxxCommitMoveSize(struct tagQ *a1, int a2)
{
  struct tagQ *v2; // esi
  _DWORD *v4; // ecx
  int v5; // edx
  _DWORD *Prop; // edi
  int v7; // eax
  struct tagWND *v8; // edx
  _DWORD *v9; // edi
  int v10; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v13; // eax
  int v14; // eax
  struct tagMONITOR *v15; // eax
  _DWORD *v16; // ecx
  bool v17; // al
  LONG *v18; // edi
  _DWORD *v19; // edi
  unsigned int v20; // eax
  int v21; // edx
  int v22; // ecx
  int *v23; // eax
  int v24; // eax
  int v25; // eax
  bool v26; // zf
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  _DWORD *v30; // ecx
  struct _MOVESIZEDATA *v31; // [esp+0h] [ebp-50h]
  unsigned int v32; // [esp+4h] [ebp-4Ch]
  struct tagWND *v33; // [esp+10h] [ebp-40h]
  int v34; // [esp+10h] [ebp-40h]
  int v35; // [esp+14h] [ebp-3Ch]
  struct tagMONITOR *v36; // [esp+14h] [ebp-3Ch]
  struct tagMONITOR *v37; // [esp+14h] [ebp-3Ch]
  int v38; // [esp+18h] [ebp-38h]
  BOOL v39; // [esp+18h] [ebp-38h]
  int v41; // [esp+20h] [ebp-30h]
  int *v42; // [esp+20h] [ebp-30h]
  int v43; // [esp+24h] [ebp-2Ch] BYREF
  struct tagWND *v44; // [esp+28h] [ebp-28h]
  int v45; // [esp+2Ch] [ebp-24h]
  int v46; // [esp+30h] [ebp-20h] BYREF
  struct tagMONITOR *v47; // [esp+34h] [ebp-1Ch]
  int v48; // [esp+38h] [ebp-18h]
  struct tagRECT v49; // [esp+3Ch] [ebp-14h] BYREF

  v38 = 0;
  v35 = 0;
  memset(&v49, 0, sizeof(v49));
  v2 = a1;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  if ( *((_DWORD *)a1 + 14) != _GetDesktopWindow(a1) )
    goto LABEL_65;
  v41 = (unsigned __int8)ShouldGoMonitorMaximizedMoveSizeData((_DWORD *)a2);
  v39 = IsSemiMaximizedMoveSizeData(v4) || v5;
  Prop = (_DWORD *)_GetProp((int)v2, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
  v36 = (struct tagMONITOR *)Prop;
  if ( Prop )
  {
    v7 = *(_DWORD *)(a2 + 164);
    if ( (v7 == 1 || v7 == 2) && WasVerticallyMaximized((_DWORD *)a2) && IsVerticallyMaximizedMoveSizeData((_DWORD *)a2) )
    {
      *Prop = *(_DWORD *)(a2 + 12);
      Prop[2] = *(_DWORD *)(a2 + 20);
      goto LABEL_50;
    }
    v8 = *(struct tagWND **)(a2 + 196);
    v33 = v8;
    if ( v8 == *(struct tagWND **)(a2 + 204) )
    {
      if ( (*(_DWORD *)(a2 + 184) & 0x1000) == 0
        && v39
        && ((*(_BYTE *)(a2 + 248) & 8) == 0 || *(_DWORD *)(a2 + 108) != -32000 || *(_DWORD *)(a2 + 112) != -32000) )
      {
        *Prop = *(_DWORD *)(a2 + 108);
        v19 = Prop + 1;
        *v19++ = *(_DWORD *)(a2 + 112);
        *v19 = *(_DWORD *)(a2 + 116);
        v19[1] = *(_DWORD *)(a2 + 120);
LABEL_49:
        v2 = a1;
      }
    }
    else if ( v41 || IsSemiMaximized(v2) )
    {
      if ( (*(_DWORD *)(a2 + 184) & 0x1000000) != 0 )
      {
        v33 = v8;
        if ( !EqualRectInl(Prop, (const void *)(a2 + 140)) )
        {
          *Prop = *(_DWORD *)(a2 + 140);
          v9 = Prop + 1;
          *v9++ = *(_DWORD *)(a2 + 144);
          *v9 = *(_DWORD *)(a2 + 148);
          v9[1] = *(_DWORD *)(a2 + 152);
          v2 = a1;
          Prop = v36;
          v33 = *(struct tagWND **)(a2 + 196);
        }
      }
      if ( IsVerticallyMaximized(v2) )
        v33 = (struct tagWND *)_MonitorFromRect(Prop, 2, 0);
      v37 = *(struct tagMONITOR **)(a2 + 204);
      if ( IsVerticallyMaximizedMoveSizeData((_DWORD *)a2) )
      {
        v10 = *(_DWORD *)(a2 + 268);
        if ( *Prop <= v10 && v10 < Prop[2] )
          v37 = (struct tagMONITOR *)_MonitorFromRect(Prop, 2, 0);
      }
      if ( IsVerticallyMaximized(v2) && IsVerticallyMaximizedMoveSizeData((_DWORD *)a2) )
        *(_DWORD *)(a2 + 184) |= (unsigned int)&loc_80000;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v43 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v43;
      v44 = v33;
      if ( v33 )
        HMLockObject(v33);
      v13 = KeGetCurrentThread();
      v14 = W32GetThreadWin32Thread(v13);
      v46 = *(_DWORD *)(v14 + 228);
      *(_DWORD *)(v14 + 228) = &v46;
      v15 = v37;
      v47 = v37;
      if ( v37 )
      {
        HMLockObject(v37);
        v15 = v37;
      }
      if ( *(_WORD *)(*((_DWORD *)v33 + 5) + 52) != *(_WORD *)(*((_DWORD *)v15 + 5) + 52)
        && (*(_DWORD *)(*((_DWORD *)v2 + 5) + 184) & 0xF) == 2 )
      {
        xxxGetMinMaxTrackInfo(v31, v32);
      }
      if ( (struct tagMONITOR *)_MonitorFromRect(Prop, 2, 0) != v37 )
      {
        v16 = (_DWORD *)*((_DWORD *)v2 + 5);
        if ( (v16[46] & 0xF) != 2 || Prop[2] - *Prop == v16[15] - v16[13] && Prop[3] - Prop[1] == v16[16] - v16[14] )
          v17 = MigrateRectMonitors(
                  Prop,
                  v2,
                  v33,
                  &v49,
                  v37,
                  0,
                  (struct tagMONITOR *)a2,
                  (struct tagMONITOR *)0x20,
                  v31,
                  v32);
        else
          v17 = MigrateRectMonitors(
                  Prop,
                  v2,
                  v33,
                  &v49,
                  v37,
                  0,
                  (struct tagMONITOR *)a2,
                  (struct tagMONITOR *)0x30,
                  v31,
                  v32);
        if ( v17 )
        {
          *Prop = v49.left;
          v18 = Prop + 1;
          *v18++ = v49.top;
          *v18 = v49.right;
          v18[1] = v49.bottom;
        }
      }
      ThreadUnlock1();
      ThreadUnlock1();
      goto LABEL_49;
    }
  }
LABEL_50:
  if ( ShouldSendSizing((_DWORD *)a2) || ((unsigned int)&loc_80000 & *(_DWORD *)(a2 + 184)) != 0 )
  {
    v38 = 1;
  }
  else
  {
    v38 = 0;
    if ( !EqualRectInl((const void *)(a2 + 12), (const void *)(*((_DWORD *)v2 + 5) + 52)) )
    {
      v35 = 1;
      goto LABEL_56;
    }
  }
  v35 = 0;
LABEL_56:
  MakeArrangedStateObservable((int *)a2);
  if ( !v41 )
  {
LABEL_65:
    if ( WasMaximized((_DWORD *)a2) && (v21 & 0x20) == 0
      || (v22 = *((_DWORD *)v2 + 5), LOBYTE(v22) = ((v21 & 0x100000) == 0) & *(_BYTE *)(v22 + 23), (v22 & 1) != 0) )
    {
      v23 = (int *)_GetProp((int)v2, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
      v42 = v23;
      if ( v23 )
      {
        v49 = *(struct tagRECT *)(a2 + 12);
        SwapRect(v23, &v49.left);
        xxxMinMaximizeEx(*(struct tagQ **)(a2 + 8), (struct tagWND *)9, 4u, 0, 0, 0);
        SwapRect(&v49.left, v42);
        MakeArrangedStateObservable((int *)a2);
        v2 = a1;
      }
    }
    v34 = 516;
    v24 = *(_DWORD *)(a2 + 164);
    if ( (v24 == 9 && !v35 || v24 == 10) && !v38 )
      v34 = 517;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(
        v22,
        14,
        v22,
        (char)v2,
        *(_DWORD *)(a2 + 12),
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 20),
        *(_DWORD *)(a2 + 24));
    v25 = v34;
    if ( (*(_BYTE *)(a2 + 308) & 0x20) != 0 )
    {
      v25 = v34 | 0x10;
      v34 |= 0x10u;
    }
    if ( (v25 & 1) == 0 )
    {
      v26 = !IsSemiMaximizedMoveSizeData((_DWORD *)a2);
      v25 = v34;
      if ( !v26 )
        v25 = v34 | 0x100000;
    }
    if ( (*(_BYTE *)(a2 + 248) & 8) != 0 )
      v25 |= (unsigned int)&loc_1FFFFC + 4;
    v27 = *(_DWORD *)(a2 + 16);
    v28 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 184) |= 0x80000000;
    xxxSetWindowPos((int)v2, 0, v28, v27, *(_DWORD *)(a2 + 20) - v28, *(_DWORD *)(a2 + 24) - v27, v25);
    if ( (*(_DWORD *)(a2 + 184) & 0x100000) != 0 && _gSqmIsOptedIn )
    {
      if ( IsVerticallyMaximized(v2) )
      {
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3537, 1);
      }
      else
      {
        v29 = *((_DWORD *)v2 + 5);
        if ( (*(_BYTE *)(v29 + 145) & 3) != 0 )
        {
          WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3529, 1);
        }
        else if ( (*(_BYTE *)(v29 + 23) & 0x20) == 0 )
        {
          if ( WasVerticallyMaximized((_DWORD *)a2) )
          {
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3535, 1);
          }
          else if ( WasMaximized((_DWORD *)a2) )
          {
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3530, 1);
          }
          else if ( WasSemiMaximized(v30) )
          {
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 5882, 1);
          }
        }
      }
    }
    if ( (*(_BYTE *)(*((_DWORD *)v2 + 5) + 23) & 0x20) != 0 )
      CkptRestore((int)v2, a2 + 12);
    goto LABEL_99;
  }
  if ( (*(_BYTE *)(*((_DWORD *)v2 + 5) + 23) & 1) == 0 || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 204) )
  {
    v20 = _gdwPUDFlags & 0x10000 | 6;
    if ( (*(_DWORD *)(a2 + 184) & 0x100000) != 0 )
      v20 = _gdwPUDFlags & 0x10000 | 0x16;
    xxxMinMaximizeEx(v2, (struct tagWND *)3, v20, *(_DWORD *)(a2 + 204), 0, 0);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x100000) != 0 )
  {
    if ( _gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532, 1);
LABEL_99:
    if ( (*(_DWORD *)(a2 + 184) & 0x100000) != 0 )
    {
      if ( _gSqmIsOptedIn )
      {
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3531, *(_DWORD *)(a2 + 284));
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3528, *(_DWORD *)(a2 + 288));
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3536, *(_DWORD *)(a2 + 292));
      }
    }
  }
}
