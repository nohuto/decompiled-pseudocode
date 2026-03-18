/*
 * XREFs of _xxxTrackMouseMove@12 @ 0x129D6
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     ?WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z @ 0x12CEE (-WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z.c)
 *     _xxxResetTooltip@4 @ 0x12D36 (_xxxResetTooltip@4.c)
 *     ?IsTooltipHittest@@YGPAGPAUtagWND@@I@Z @ 0x12D84 (-IsTooltipHittest@@YGPAGPAUtagWND@@I@Z.c)
 *     _safe_cast_fnid_to_PTOOLTIPWND@4 @ 0x12DE2 (_safe_cast_fnid_to_PTOOLTIPWND@4.c)
 *     _xxxCancelMouseMoveTracking@16 @ 0x15E12 (_xxxCancelMouseMoveTracking@16.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 *     ?WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z @ 0xB5830 (-WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     _GetActiveTrackPwnd@4 @ 0x14E1E4 (_GetActiveTrackPwnd@4.c)
 *     ?xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z @ 0x1A0A7C (-xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 */

int __fastcall xxxTrackMouseMove(struct tagWND *a1, int a2, int a3)
{
  int v3; // esi
  int v5; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  unsigned int v8; // edx
  struct tagWND *v9; // ecx
  int v10; // edx
  int v11; // ecx
  _DWORD *v13; // eax
  PKTHREAD v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // esi
  PKTHREAD v18; // eax
  int v19; // eax
  struct tagWND *CompositionInputWindowUIOwner; // eax
  PKTHREAD v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  const struct tagWND *v24; // [esp+0h] [ebp-48h]
  ShellWindowManagement *v25; // [esp+0h] [ebp-48h]
  NotifyShell *v26; // [esp+0h] [ebp-48h]
  unsigned __int16 *v27; // [esp+4h] [ebp-44h]
  const struct tagDESKTOP *v28; // [esp+4h] [ebp-44h]
  struct tagWND *v29; // [esp+4h] [ebp-44h]
  unsigned int v30; // [esp+8h] [ebp-40h]
  unsigned int v31; // [esp+8h] [ebp-40h]
  int v32; // [esp+8h] [ebp-40h]
  int v33; // [esp+10h] [ebp-38h]
  BOOL v34; // [esp+10h] [ebp-38h]
  struct tagWND *v35; // [esp+14h] [ebp-34h]
  _DWORD *v36; // [esp+18h] [ebp-30h]
  int v38; // [esp+1Ch] [ebp-2Ch]
  int v39; // [esp+24h] [ebp-24h] BYREF
  int v40; // [esp+28h] [ebp-20h]
  int v41; // [esp+2Ch] [ebp-1Ch]
  _DWORD v42[3]; // [esp+30h] [ebp-18h] BYREF
  _BYTE v43[12]; // [esp+3Ch] [ebp-Ch] BYREF

  v42[2] = 0;
  v33 = 0;
  v39 = 0;
  v3 = a2;
  v40 = 0;
  v41 = 0;
  memset(v43, 0, sizeof(v43));
  v5 = *(_DWORD *)(_gptiCurrent + 248);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v42[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v42;
  v42[1] = a1;
  HMLockObject(a1);
  if ( a3 == 512 && ((unsigned __int8)_gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( IsIndependentInputWindow(v24) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v24);
      if ( CompositionInputWindowUIOwner )
      {
        a1 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v42);
      }
    }
  }
  v8 = *(_DWORD *)(v5 + 24);
  v9 = *(struct tagWND **)(v5 + 100);
  v35 = v9;
  if ( (v8 & 0x5C0) != 0 && v9 )
  {
    if ( *(_DWORD *)(_gptiCurrent + 236) == *(_DWORD *)(*((_DWORD *)v9 + 2) + 236) )
    {
      v16 = 1024;
      v33 = 1024;
    }
    else
    {
      if ( (v8 & 0x500) != 0 )
      {
        PostEventMessage(
          (struct tagTHREADINFO *)0xB,
          v9,
          v8,
          *(struct tagWND **)(v5 + 104),
          0x400u,
          (unsigned int)v24,
          (int)v27);
        *(_DWORD *)(v5 + 24) &= 0xFFFFFAFF;
        v9 = v35;
      }
      v16 = 0;
    }
    if ( a2 == 1 || a3 != 512 )
    {
      v16 |= 0x100u;
      v33 = v16;
    }
    if ( v9 != a1 || (a2 == 1) != (*(_DWORD *)(v5 + 104) == 1) )
      v33 = v16 | 0xC0;
    PushW32ThreadLock(v5, v43, UserDereferenceObject);
    ObfReferenceObject((PVOID)v5);
    v17 = *(_DWORD *)(v5 + 100);
    v18 = KeGetCurrentThread();
    v19 = W32GetThreadWin32Thread(v18);
    v39 = *(_DWORD *)(v19 + 228);
    *(_DWORD *)(v19 + 228) = &v39;
    v40 = v17;
    HMLockObject(v17);
    xxxCancelMouseMoveTracking(*(_DWORD *)(v5 + 24), *(_DWORD *)(v5 + 100), *(_DWORD *)(v5 + 104), v33);
    ThreadUnlock1();
    *(_DWORD *)(v5 + 24) &= ~v33;
    v3 = a2;
  }
  else
  {
    PushW32ThreadLock(v5, v43, UserDereferenceObject);
    ObfReferenceObject((PVOID)v5);
  }
  if ( v3 != 1 && a3 == 512 && ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned __int16)v3 == 69 && xxxHotTrackMenu((struct tagWND *)1, (unsigned int)v24, (int)v27) )
      *(_DWORD *)(v5 + 24) |= 0x400u;
    v13 = (_DWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_DWORD *)(v5 + 56));
    v36 = v13;
    if ( v13 )
    {
      v38 = *v13;
      if ( *v13 )
      {
        if ( IsTooltipHittest(v24, (unsigned int)v27) )
        {
          v21 = KeGetCurrentThread();
          v22 = W32GetThreadWin32Thread(v21);
          v39 = *(_DWORD *)(v22 + 228);
          *(_DWORD *)(v22 + 228) = &v39;
          v40 = v38;
          HMLockObject(v38);
          if ( xxxCreateTooltip(v24, v27) )
            *(_DWORD *)(v5 + 24) |= 0x300u;
        }
        else
        {
          v14 = KeGetCurrentThread();
          v15 = W32GetThreadWin32Thread(v14);
          v39 = *(_DWORD *)(v15 + 228);
          *(_DWORD *)(v15 + 228) = &v39;
          v40 = v38;
          HMLockObject(v38);
          xxxResetTooltip(v36);
        }
        ThreadUnlock1();
      }
    }
  }
  if ( ShellWindowManagement::BehaviorEnabled(v24, (const struct tagDESKTOP *)v27, v30) )
  {
    v34 = v3 == 10 || v3 == 11;
    if ( v35 == a1 )
    {
      if ( *(_DWORD *)(v5 + 104) == v3 )
        goto LABEL_14;
    }
    else
    {
      v11 = *(_DWORD *)(v5 + 100);
      if ( !v11 )
      {
LABEL_13:
        if ( v34 && !ShellWindowManagement::BehaviorEnabled(v25, v28, v31) )
          NotifyShell::WindowBorderEnter(v26, v29, v32);
        goto LABEL_14;
      }
    }
    NotifyShell::WindowBorderExitIfEntered(v25, v28);
    goto LABEL_13;
  }
LABEL_14:
  if ( v35 != a1 )
  {
    HMAssignmentLock(v11, v10);
    if ( a3 == 512 && ((unsigned __int8)_gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194) )
      {
        if ( GetActiveTrackPwnd(a1) )
        {
          v23 = (_DWORD *)UPDWORDPointer(8194);
          _SetSystemTimer(*v23, xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) |= (unsigned int)&loc_1FFFFC + 4;
      }
    }
  }
  *(_DWORD *)(v5 + 104) = v3;
  PopAndFreeW32ThreadLock(v43);
  return ThreadUnlock1();
}
