/*
 * XREFs of ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0
 * Callers:
 *     _xxxResetTooltip@4 @ 0x12D36 (_xxxResetTooltip@4.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     _NtUserSetParent@8 @ 0xCB854 (_NtUserSetParent@8.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z @ 0x16F307 (-xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z.c)
 *     _xxxSetBridgeWindowChild@8 @ 0x16F43B (_xxxSetBridgeWindowChild@8.c)
 *     ?xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z @ 0x1A0F63 (-xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _DecomposeWindowIfNeeded@4 @ 0x1B7B8 (_DecomposeWindowIfNeeded@4.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UnredirectDCEs@4 @ 0x1BEB2 (_UnredirectDCEs@4.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48 (__SetDeferredDpiStateForWindowAndChildren@12.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _BuildWindowListWithDpiBoundaryInfo@16 @ 0x2AC94 (_BuildWindowListWithDpiBoundaryInfo@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PAX@Z @ 0x2FEAE (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@.c)
 *     _ValidateNewParent@8 @ 0x2FEC8 (_ValidateNewParent@8.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 *     _ChangeRedirectionParentInDCEs@8 @ 0x7324A (_ChangeRedirectionParentInDCEs@8.c)
 *     _RedirectDCEs@4 @ 0x73D3A (_RedirectDCEs@4.c)
 *     _IsImmersiveAppIORestricted@4 @ 0x7C2DE (_IsImmersiveAppIORestricted@4.c)
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CalcForegroundInsertAfter@4 @ 0x932A2 (_CalcForegroundInsertAfter@4.c)
 *     _SetWindowSubtreeCoreWindowStatus@8 @ 0xA2352 (_SetWindowSubtreeCoreWindowStatus@8.c)
 *     _IsChildWindowDpiIsolationEnabled@8 @ 0xA8DE2 (_IsChildWindowDpiIsolationEnabled@8.c)
 *     _FreeWindowListWithDpiBoundaryInfo@4 @ 0xA9700 (_FreeWindowListWithDpiBoundaryInfo@4.c)
 *     _IsWindowShellCloaked@8 @ 0xC3F32 (_IsWindowShellCloaked@8.c)
 *     __ScreenToClient@8 @ 0xC76AE (__ScreenToClient@8.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 *     _TraceChildWindowDpiTelemetry@12 @ 0x1519C8 (_TraceChildWindowDpiTelemetry@12.c)
 *     _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE (_xxxForceUpdateProcessDpiAwarenessContext@8.c)
 *     _xxxUpdateWindowPositionsForDpiBoundaryChange@4 @ 0x152694 (_xxxUpdateWindowPositionsForDpiBoundaryChange@4.c)
 *     _xxxTurnOffCompositing@8 @ 0x153D74 (_xxxTurnOffCompositing@8.c)
 *     _HasMessageRootWindow@4 @ 0x16F3D4 (_HasMessageRootWindow@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__userpurge xxxSetParentWorker@<eax>(
        int a1@<edx>,
        struct tagWND *a2@<ecx>,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagWND *a5,
        int a6)
{
  _DWORD *v7; // edi
  int DesktopWindow; // ebx
  int v9; // ecx
  int v10; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v13; // ebx
  int v14; // eax
  int StyleWindow; // eax
  unsigned int v16; // ebx
  PKTHREAD v17; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  int v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  unsigned int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  _DWORD *v28; // ecx
  struct tagWND *v29; // eax
  int v30; // eax
  int v31; // ebx
  int v32; // ecx
  int v33; // edx
  int v34; // ebx
  int v35; // ebx
  int v36; // edx
  _DWORD *v37; // ebx
  int v38; // esi
  _DWORD *CurrentProcessWin32Process; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  struct tagWND *v45; // [esp-8h] [ebp-78h]
  unsigned int v46; // [esp-4h] [ebp-74h]
  struct tagWND *v47; // [esp+0h] [ebp-70h]
  struct tagWND *v48; // [esp+0h] [ebp-70h]
  unsigned int v49; // [esp+4h] [ebp-6Ch]
  unsigned int v50; // [esp+4h] [ebp-6Ch]
  unsigned int v51; // [esp+8h] [ebp-68h]
  _DWORD *v52; // [esp+Ch] [ebp-64h]
  unsigned int v53; // [esp+10h] [ebp-60h]
  int v54; // [esp+14h] [ebp-5Ch]
  _DWORD *v55; // [esp+18h] [ebp-58h] BYREF
  int v56; // [esp+1Ch] [ebp-54h]
  int v57; // [esp+20h] [ebp-50h]
  int v58; // [esp+24h] [ebp-4Ch]
  int v59; // [esp+28h] [ebp-48h]
  int v60; // [esp+2Ch] [ebp-44h]
  int v61; // [esp+30h] [ebp-40h]
  _DWORD v62[2]; // [esp+34h] [ebp-3Ch] BYREF
  char v63[8]; // [esp+3Ch] [ebp-34h] BYREF
  _DWORD v64[3]; // [esp+44h] [ebp-2Ch] BYREF
  int v65; // [esp+50h] [ebp-20h] BYREF
  _DWORD v66[2]; // [esp+54h] [ebp-1Ch] BYREF
  _DWORD v67[5]; // [esp+5Ch] [ebp-14h] BYREF

  v59 = a1;
  v56 = 5;
  memset(v67, 0, sizeof(v67));
  v66[1] = 0;
  v64[2] = 0;
  v58 = 0;
  v57 = 0;
  v7 = a1 != -3 ? (_DWORD *)a1 : 0;
  DesktopWindow = _GetDesktopWindow(a2);
  v9 = 0;
  v10 = *((_DWORD *)a2 + 3);
  v54 = DesktopWindow;
  v55 = 0;
  if ( v10 )
  {
    v9 = *(_DWORD *)(v10 + 52);
    v55 = (_DWORD *)v9;
  }
  if ( a2 == (struct tagWND *)DesktopWindow || a2 == (struct tagWND *)v9 )
    goto LABEL_100;
  if ( !v7 )
    v7 = (_DWORD *)DesktopWindow;
  if ( a3 && (*((_DWORD **)a3 + 14) != v7 || a3 == a2) )
    return 0;
  if ( IsImmersiveAppIORestricted(*(void **)(_gptiCurrent + 232))
    && HasMessageRootWindow(a2)
    && !HasMessageRootWindow(v7) )
  {
LABEL_100:
    v43 = 5;
LABEL_101:
    UserSetLastError((struct _NT_TIB *)v43);
    return 0;
  }
  if ( v7 != (_DWORD *)DesktopWindow
    && v7 != v55
    && *(_DWORD *)(*((_DWORD *)a2 + 2) + 232) == *(_DWORD *)(v7[2] + 232)
    && ((*(_BYTE *)(v7[5] + 184) ^ *(_BYTE *)(*((_DWORD *)a2 + 5) + 184)) & 0xF) != 0
    && !IsChildWindowDpiIsolationEnabled((int)a2, (int)v7) )
  {
    TraceChildWindowDpiTelemetry(1);
    v43 = 5023;
    goto LABEL_101;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v64[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v64;
  v64[1] = v7;
  if ( v7 )
    HMLockObject(v7);
  if ( !ValidateNewParent(a2, v7)
    || (v13 = xxxShowWindow(v47, v49), v14 = *((_DWORD *)a2 + 5), v61 = v13, (*(_BYTE *)(v14 + 23) & 0x10) != 0) )
  {
LABEL_108:
    ThreadUnlock1();
    return 0;
  }
  if ( (*(_BYTE *)(v14 + 144) & 0x20) != 0 )
    DecomposeWindowIfNeeded((int)a2);
  if ( !ValidateNewParent(a2, v7) )
  {
    if ( v13 && *(char *)(*((_DWORD *)a2 + 5) + 11) >= 0 )
      xxxShowWindow(v48, v50);
    goto LABEL_108;
  }
  ++_gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v63);
  StyleWindow = GetStyleWindow((int)a2, 2848);
  v16 = *((_DWORD *)a2 + 14);
  v60 = StyleWindow;
  v53 = v16;
  v17 = KeGetCurrentThread();
  v18 = W32GetThreadWin32Thread(v17);
  v65 = *(_DWORD *)(v18 + 228);
  *(_DWORD *)(v18 + 228) = &v65;
  v66[0] = v16;
  if ( v16 )
    HMLockObject(v16);
  v19 = (_DWORD *)*((_DWORD *)a2 + 5);
  if ( (*(_BYTE *)(*(_DWORD *)(v53 + 20) + 18) & 0x40) != 0 )
    v20 = v19[15];
  else
    v20 = v19[13];
  v62[0] = v20;
  v62[1] = v19[14];
  _ScreenToClient();
  v21 = (_DWORD *)v54;
  if ( v19[37] != 1 && (v7 == (_DWORD *)v54 || v7 == v55) )
  {
    SetOrClrWF(1, (int)a2, 0x808u, 1);
    v21 = (_DWORD *)v54;
  }
  v22 = v53;
  if ( v7 == v21 )
  {
    if ( (_DWORD *)v53 != v21 )
    {
      if ( IsWindowShellCloaked((struct tagWND *)v53, 0) )
      {
        v67[0] = 1;
        zzzSetWindowCompositionCloak(a2, v67, 2);
      }
      CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
      if ( HasImmersiveAppRight(CurrentProcessWin32Process) && (GetWindowCloakState(a2) & 1) != 0 )
      {
        v67[0] = 0;
        zzzSetWindowCompositionCloak(a2, v67, 1);
      }
      v41 = *((_DWORD *)a2 + 5);
      v42 = *(_DWORD *)(v41 + 144);
      if ( (v42 & 0x8000) != 0 )
      {
        *(_DWORD *)(v41 + 144) = v42 & 0xFFFF7FFF;
        PostShellHookMessages();
      }
    }
  }
  else if ( (_DWORD *)v53 == v21 )
  {
    if ( IsWindowShellCloaked(a2, 1) )
      zzzSetWindowCompositionCloak(a2, v67, 2);
    if ( *((_DWORD *)a2 + 30) )
    {
      Win32FreePool(*((_DWORD *)a2 + 30));
      *((_DWORD *)a2 + 30) = 0;
    }
  }
  UnlinkWindow(a2, (int *)v53);
  v23 = LockPointer((int)a2 + 56, (int)v7);
  v46 = v24;
  v45 = (struct tagWND *)v23;
  HMAssignmentLock(v25, v24);
  if ( v7 )
    v26 = (int)(*(_DWORD *)(v7[5] + 144) << 7) >> 31;
  else
    v26 = 0;
  SetWindowSubtreeCoreWindowStatus((int)a2, v26);
  if ( (*(_BYTE *)(*((_DWORD *)a2 + 5) + 23) & 0x40) != 0 )
  {
    v27 = *((_DWORD *)a2 + 16);
    if ( v27 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(v27 + 20) + 16) & 8) != 0 )
        SetOrClrWF(1, (int)a2, 0x808u, 1);
    }
  }
  if ( v7 != (_DWORD *)_GetDesktopWindow(a2) || (*(_BYTE *)(*((_DWORD *)a2 + 5) + 16) & 8) != 0 )
  {
    v29 = a3;
  }
  else
  {
    CalcWindowFullScreen(v28);
    v29 = CalcForegroundInsertAfter(a2);
  }
  LinkWindow(a2, v29, v7);
  if ( v57 == -3 && !IsWindowShellCloaked(a2, 1) )
  {
    v66[0] = 1;
    zzzSetWindowCompositionCloak(a2, v66, 2);
  }
  v30 = GetStyleWindow((int)a2, 2848);
  if ( v58 )
  {
    if ( v30 )
    {
      if ( v58 != v30 )
        ChangeRedirectionParentInDCEs((int)a2, 1);
    }
    else
    {
      UnredirectDCEs(a2);
    }
  }
  else if ( v30 )
  {
    RedirectDCEs(a2);
  }
  if ( v7 == (_DWORD *)_GetDesktopWindow(a2) && (*(_BYTE *)(*((_DWORD *)a2 + 5) + 23) & 4) == 0 )
  {
    SetOrClrWF(1, (int)a2, 0xF04u, 1);
    zzzLockDisplayAreaAndInvalidateDCCache((int)a2, 1, 0);
  }
  if ( (*(_BYTE *)(*((_DWORD *)a2 + 5) + 23) & 0xC0) != 0x40 )
    goto LABEL_46;
  if ( *((_DWORD *)a2 + 14) != _GetDesktopWindow(a2) && *((_DWORD *)a2 + 2) != *(_DWORD *)(v53 + 8) )
    zzzAttachThreadInput(0);
  if ( v7 == (_DWORD *)_GetDesktopWindow(a2) )
    goto LABEL_46;
  v31 = v7[2];
  if ( *((_DWORD *)a2 + 2) == v31 )
  {
    if ( (*(_BYTE *)(*((_DWORD *)a2 + 5) + 147) & 1) != 0 && _IsTopLevelWindow(v7) )
    {
      v44 = IsDesktopApp(*(_DWORD *)(v31 + 232));
      v22 = v51;
      if ( v44 )
        v7[49] |= 8u;
      goto LABEL_46;
    }
  }
  else
  {
    zzzAttachThreadInput(a4 != 0 ? 32769 : 1);
  }
  v22 = v51;
LABEL_46:
  if ( v7 == (_DWORD *)v53 || v22 == v53 )
    v54 = 21;
  if ( (*(_DWORD *)(*(_DWORD *)(v22 + 20) + 144) & 0x10000000) != 0
    || (*(_DWORD *)(*((_DWORD *)a2 + 5) + 144) & 0x10000000) != 0 )
  {
    v32 = *((_DWORD *)a2 + 5);
    v33 = v32;
    v34 = *(_DWORD *)(v32 + 184);
    if ( (v34 & 0xF) == 2 && (v34 & 0xF0) == 0x10 )
    {
      *(_DWORD *)(v32 + 144) &= ~0x10000000u;
      v33 = *((_DWORD *)a2 + 5);
    }
    *(_DWORD *)(v33 + 144) &= ~0x8000000u;
    v54 |= 0x20u;
  }
  v35 = 0;
  if ( !_IsTopLevelWindow(a2) && v7 )
    LOBYTE(v35) = *(_WORD *)(v7[5] + 182) != 0;
  _SetDeferredDpiStateForWindowAndChildren((int)a2, v35, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v62);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*((_DWORD *)a2 + 14), 2818) )
    xxxTurnOffCompositing(a2, 0);
  xxxWindowEvent(0x800Fu, a2, 0, 0, 1);
  if ( !v7
    || (_DWORD *)v51 == v52
    || v7 == v52
    || *(_DWORD *)(*(_DWORD *)(v51 + 20) + 164) == *(_DWORD *)(v7[5] + 164)
    || (v56 = BuildWindowListWithDpiBoundaryInfo(a2, v51, 0, (int *)&v55), !v55) )
  {
    xxxSetWindowPos((int)a2, 0, v60, v61, 0, 0, v54);
  }
  v36 = *((_DWORD *)a2 + 14);
  if ( !v36
    || ((*(_BYTE *)(*((_DWORD *)a2 + 5) + 184) ^ *(_BYTE *)(*(_DWORD *)(v36 + 20) + 184)) & 0xF) == 0
    || (_DWORD *)v36 == v52
    || v36 == v53
    || IsChildWindowDpiIsolationEnabled((int)a2, v36) )
  {
    xxxInheritWindowMonitor(a2, 0, 0);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a2, *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 14) + 20) + 184));
  }
  v37 = (_DWORD *)v56;
  if ( v56 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v56, v45, v46);
    FreeWindowListWithDpiBoundaryInfo(v37);
  }
  if ( v59 )
    xxxShowWindow(v45, v46);
  v38 = ThreadUnlock1();
  ThreadUnlock1();
  return (struct tagWND *)v38;
}
