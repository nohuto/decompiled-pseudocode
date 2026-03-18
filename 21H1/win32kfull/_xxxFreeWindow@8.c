/*
 * XREFs of _xxxFreeWindow@8 @ 0x70780
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     ?WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z @ 0x12CEE (-WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z.c)
 *     _xxxResetTooltip@4 @ 0x12D36 (_xxxResetTooltip@4.c)
 *     _safe_cast_fnid_to_PTOOLTIPWND@4 @ 0x12DE2 (_safe_cast_fnid_to_PTOOLTIPWND@4.c)
 *     _zzzInputFocusLostWindowEvent@8 @ 0x1768E (_zzzInputFocusLostWindowEvent@8.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PAX@Z @ 0x1A038 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagW.c)
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PAX@Z @ 0x2FEAE (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@.c)
 *     _InvalidateDCE@4 @ 0x3277C (_InvalidateDCE@4.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _SfnDWORD@32 @ 0x40E50 (_SfnDWORD@32.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _GetClassPtr@12 @ 0x4741E (_GetClassPtr@12.c)
 *     _DereferenceClass@8 @ 0x48042 (_DereferenceClass@8.c)
 *     _FindQMsg@24 @ 0x6A480 (_FindQMsg@24.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 *     _FreeWindowGCData@4 @ 0x717D2 (_FreeWindowGCData@4.c)
 *     _FreeWindowMessageFilter@4 @ 0x71856 (_FreeWindowMessageFilter@4.c)
 *     _UpdatePointerRedirIsAlive@4 @ 0x7188C (_UpdatePointerRedirIsAlive@4.c)
 *     __FindActivationFilterWindow@4 @ 0x718AC (__FindActivationFilterWindow@4.c)
 *     _FreeClientOnWindowDestruction@4 @ 0x718DA (_FreeClientOnWindowDestruction@4.c)
 *     _GreDeleteSpriteOverlapPresent@8 @ 0x7193A (_GreDeleteSpriteOverlapPresent@8.c)
 *     _ClearSendMessages@4 @ 0x719D2 (_ClearSendMessages@4.c)
 *     _DestroyWindowsTimers@4 @ 0x71B30 (_DestroyWindowsTimers@4.c)
 *     _DestroyWindowSmIcon@4 @ 0x71B5C (_DestroyWindowSmIcon@4.c)
 *     _xxxRemoveShadow@4 @ 0x71BB2 (_xxxRemoveShadow@4.c)
 *     _IsSysShadow@4 @ 0x71BD0 (_IsSysShadow@4.c)
 *     _xxxRemoveFullScreen@4 @ 0x7202E (_xxxRemoveFullScreen@4.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _DwmAsyncOwnerChange@12 @ 0x732BC (_DwmAsyncOwnerChange@12.c)
 *     _DwmAsyncChildDestroy@8 @ 0x73C16 (_DwmAsyncChildDestroy@8.c)
 *     __DeregisterShellHookWindow@4 @ 0x821A4 (__DeregisterShellHookWindow@4.c)
 *     ?HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x830D0 (-HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     _DeleteHrgnClip@4 @ 0x83A5C (_DeleteHrgnClip@4.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QAEPAUtagSBINFO@@PAU2@@Z @ 0x8E28C (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QAEPAUtagSBINFO@@PAU2@@Z.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QAEPAUtagCLS@@PAU2@@Z @ 0x9DB5C (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QAEPAUtagCLS@@PAU2@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxClientFreeWindowClassExtraBytes@8 @ 0xA270A (_xxxClientFreeWindowClassExtraBytes@8.c)
 *     _DecPaintCount@4 @ 0xAA80E (_DecPaintCount@4.c)
 *     ?UnlockWndMenuWorker@@YGPAXPAUtagWND@@_N@Z @ 0xAAF60 (-UnlockWndMenuWorker@@YGPAXPAUtagWND@@_N@Z.c)
 *     _IPostQuitMessage@8 @ 0xABFB2 (_IPostQuitMessage@8.c)
 *     _CleanupIAMAccess@4 @ 0xAC54A (_CleanupIAMAccess@4.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     ?_RemoveClipboardFormatListener@@YGXPAUtagWND@@@Z @ 0xD44B2 (-_RemoveClipboardFormatListener@@YGXPAUtagWND@@@Z.c)
 *     _DwmAsyncShellWindowChange@12 @ 0xE105C (_DwmAsyncShellWindowChange@12.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF42A0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z.c)
 *     ?IsManagementWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z @ 0xF4E8A (-IsManagementWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z.c)
 *     ?SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z @ 0xF4EA4 (-SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z.c)
 *     ?MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x13C834 (-MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CON.c)
 *     _ChangeComposableCursor@4 @ 0x143332 (_ChangeComposableCursor@4.c)
 *     _safe_cast_fnid_to_PSWITCHWND@4 @ 0x143725 (_safe_cast_fnid_to_PSWITCHWND@4.c)
 *     __NotifyOverlayWindow@8 @ 0x145F10 (__NotifyOverlayWindow@8.c)
 *     _RemoveSwitchWindowInfo@4 @ 0x15D02D (_RemoveSwitchWindowInfo@4.c)
 *     _FindSpb@4 @ 0x17E390 (_FindSpb@4.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 *     _xxxDDETrackWindowDying@8 @ 0x180709 (_xxxDDETrackWindowDying@8.c)
 *     _xxxDeferredDesktopRotation@0 @ 0x1815B6 (_xxxDeferredDesktopRotation@0.c)
 *     NullifyLookasideRef @ 0x184301 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YGXPAUtagMENU@@@Z @ 0x184FDD (-UnlockNotifyWindow@@YGXPAUtagMENU@@@Z.c)
 *     _CleanupShadow@4 @ 0x19D2E1 (_CleanupShadow@4.c)
 *     _DwmAsyncMagnDestroy@12 @ 0x1D1BC5 (_DwmAsyncMagnDestroy@12.c)
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagVWPL *__thiscall xxxFreeWindow(struct tagVWPL **this)
{
  struct tagVWPL *v2; // esi
  int v3; // edi
  struct tagVWPL ***v4; // ecx
  struct tagVWPL ***v5; // ecx
  struct tagVWPL ***v6; // ecx
  char *v7; // ecx
  _DWORD *ActivationFilterWindow; // eax
  _DWORD *v9; // esi
  struct tagVWPL *v10; // ecx
  struct tagVWPL ***v11; // ecx
  struct tagVWPL *v12; // eax
  struct tagVWPL *v13; // eax
  struct tagVWPL *v14; // ecx
  int v15; // eax
  struct tagVWPL *v16; // eax
  int v17; // esi
  struct tagVWPL *v18; // eax
  void (__fastcall *v19)(int *); // edi
  int v20; // esi
  struct tagVWPL ***v21; // eax
  int v22; // esi
  _DWORD *i; // edi
  struct tagVWPL *v24; // eax
  struct tagVWPL *v25; // eax
  struct tagVWPL *v26; // eax
  struct tagVWPL *v27; // esi
  struct tagVWPL *v28; // esi
  struct tagVWPL *v29; // eax
  int v30; // ecx
  int v31; // ecx
  int *v32; // edi
  int v33; // esi
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  void (__fastcall *v37)(struct tagVWPL **); // edi
  struct tagVWPL *v38; // eax
  int v39; // ecx
  struct tagVWPL *v40; // eax
  struct tagVWPL **v41; // edx
  int v42; // edx
  int v43; // ecx
  int v44; // eax
  int v45; // esi
  struct tagVWPL *result; // eax
  int v47; // eax
  int v48; // edi
  int v49; // eax
  struct tagVWPL *v50; // ecx
  _DWORD *QMsg; // eax
  int Prop; // esi
  int v53; // esi
  struct tagVWPL *v54; // eax
  int CurrentProcessWin32Process; // eax
  _DWORD *ClassPtr; // eax
  int v57; // ecx
  struct tagVWPL *v58; // esi
  int v59; // ecx
  void *v60; // eax
  int v61; // eax
  int v62; // ecx
  _DWORD *v63; // eax
  int v64; // eax
  _DWORD **v65; // esi
  _DWORD *v66; // eax
  int v67; // edx
  _DWORD *v68; // ecx
  struct tagVWPL *v69; // eax
  CompositionObject *v70; // ecx
  int v71; // edx
  int v72; // ecx
  _DWORD *v73; // eax
  _DWORD *v74; // edi
  struct tagVWPL *v75; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  TOKEN_TYPE v78; // eax
  void *v79; // ecx
  _DWORD *LensContext; // eax
  _DWORD *v81; // esi
  int v82; // ecx
  _DWORD *v83; // eax
  int v84; // eax
  _DWORD *v85; // eax
  void *v86; // eax
  int v87; // eax
  EWNDOBJ *v88; // esi
  int Spb; // eax
  int v90; // eax
  int v91; // eax
  int v92; // esi
  _DWORD *v93; // eax
  _DWORD *v94; // esi
  struct tagWND *v95; // [esp-8h] [ebp-50h]
  int v96; // [esp-4h] [ebp-4Ch]
  int v97; // [esp-4h] [ebp-4Ch]
  ShellWindowManagement *v98; // [esp+0h] [ebp-48h]
  struct tagWND *v99; // [esp+0h] [ebp-48h]
  struct tagWND *v100; // [esp+4h] [ebp-44h]
  int v101; // [esp+8h] [ebp-40h]
  int v102; // [esp+Ch] [ebp-3Ch] BYREF
  int v103; // [esp+10h] [ebp-38h]
  _DWORD *v104; // [esp+14h] [ebp-34h] BYREF
  int v105; // [esp+18h] [ebp-30h]
  _DWORD v106[3]; // [esp+24h] [ebp-24h] BYREF
  int v107; // [esp+30h] [ebp-18h] BYREF
  _DWORD v108[5]; // [esp+34h] [ebp-14h] BYREF

  v2 = this[3];
  memset(&v108[2], 0, 12);
  v103 = _gptiCurrent;
  v3 = 0;
  if ( !v2 )
    goto LABEL_21;
  if ( this == *(struct tagVWPL ***)(*((_DWORD *)v2 + 1) + 84) )
  {
    CleanupIAMAccess(v2);
    v3 = 0;
    v59 = *((_DWORD *)this[3] + 1);
    *(_DWORD *)(*(_DWORD *)v59 + 12) = 0;
    HMAssignmentUnlock(v59 + 84);
    if ( IsWindowDesktopComposed(this) )
    {
      v96 = ***((_DWORD ***)this[3] + 1);
      v60 = (void *)ReferenceDwmApiPort();
      DwmAsyncShellWindowChange(v60, v96);
    }
    v2 = this[3];
    if ( (*(_BYTE *)(**((_DWORD **)v2 + 1) + 32) & 2) != 0 )
      v3 = 1;
  }
  v4 = (struct tagVWPL ***)(*((_DWORD *)v2 + 1) + 92);
  if ( *v4 == this )
  {
    HMAssignmentUnlock(v4);
    v2 = this[3];
  }
  v5 = (struct tagVWPL ***)(*((_DWORD *)v2 + 1) + 96);
  if ( *v5 == this )
  {
    *(_DWORD *)(**((_DWORD **)v2 + 1) + 12) = 0;
    HMAssignmentUnlock(v5);
    v2 = this[3];
  }
  v6 = (struct tagVWPL ***)(*((_DWORD *)v2 + 1) + 100);
  if ( *v6 == this )
  {
    *(_DWORD *)(**((_DWORD **)v2 + 1) + 20) = 0;
    HMAssignmentUnlock(v6);
    v2 = this[3];
  }
  v7 = (char *)v2 + 188;
  if ( *((struct tagVWPL ***)v2 + 47) == this )
  {
LABEL_206:
    HMAssignmentUnlock(v7);
    goto LABEL_13;
  }
  if ( !ShellWindowManagement::IsManagementWindow(v98, v100) )
  {
    v7 = (char *)v2 + 184;
    if ( this != *((struct tagVWPL ***)v2 + 46) )
    {
      ActivationFilterWindow = (_DWORD *)_FindActivationFilterWindow(this);
      v9 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v62 = *ActivationFilterWindow;
        if ( *(_DWORD **)(*ActivationFilterWindow + 4) != ActivationFilterWindow )
          goto LABEL_249;
        v63 = (_DWORD *)ActivationFilterWindow[1];
        if ( (_DWORD *)*v63 != v9 )
          goto LABEL_249;
        *v63 = v62;
        *(_DWORD *)(v62 + 4) = v63;
        HMAssignmentUnlock(v9 + 2);
        Win32FreePool(v9);
      }
      goto LABEL_13;
    }
    goto LABEL_206;
  }
  ShellWindowManagement::SetWindow(v98, v100, (struct tagWND *)v101);
LABEL_13:
  v10 = this[3];
  if ( *((struct tagVWPL ***)v10 + 36) == this )
  {
    HMAssignmentUnlock((char *)v10 + 144);
    v10 = this[3];
  }
  UpdatePointerRedirIsAlive(*((_DWORD *)v10 + 1));
  v11 = (struct tagVWPL ***)(*((_DWORD *)this[3] + 1) + 116);
  if ( *v11 == this )
    HMAssignmentUnlock(v11);
  v12 = this[5];
  if ( (*((_BYTE *)v12 + 15) & 0x40) != 0 )
  {
    _DeregisterShellHookWindow(this);
    v12 = this[5];
  }
  if ( (*((_BYTE *)v12 + 8) & 0x20) != 0 )
  {
    v64 = **((_DWORD **)this[3] + 1);
    --*(_DWORD *)(v64 + 24);
    SetOrClrWF(0, (int)this, 0x20u, 1);
  }
LABEL_21:
  if ( this[38] )
    CleanupInputDelegation(this);
  v13 = this[40];
  if ( v13 )
  {
    v65 = (_DWORD **)((char *)v13 + 4);
    while ( 1 )
    {
      v66 = *v65;
      if ( *v65 == v65 )
        break;
      v67 = *v66;
      if ( *(_DWORD **)(*v66 + 4) != v66 )
        goto LABEL_249;
      v68 = (_DWORD *)v66[1];
      if ( (_DWORD *)*v68 != v66 )
        goto LABEL_249;
      *v68 = v67;
      *(_DWORD *)(v67 + 4) = v68;
      Win32FreePool(v66);
    }
    v69 = this[40];
    v70 = (CompositionObject *)*((_DWORD *)v69 + 20);
    if ( v70 )
    {
      CompositionObject::Release(v70);
      *((_DWORD *)this[40] + 20) = 0;
      v69 = this[40];
    }
    Win32FreePool(v69);
    this[40] = 0;
  }
  FreeWindowMessageFilter((int)this);
  FreeWindowGCData((unsigned int *)this);
  if ( (*(_BYTE *)(_HMPheFromObject(this) + 13) & 1) != 0 )
    HMChangeOwnerThread(this, v103);
  if ( v3 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(v98);
  xxxSendMessage(this, 0, 0);
  xxxRemoveFullScreen(this);
  v14 = this[5];
  v105 = 672;
  v15 = *((_WORD *)v14 + 15) & 0x3FFF;
  if ( (unsigned __int16)v15 >= 0x29Au && (*((_WORD *)v14 + 15) & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v15 <= (unsigned __int16)v105 )
    {
      ((void (__cdecl *)(struct tagVWPL **, int, _DWORD, _DWORD, _DWORD))mpFnidPfn[(*((_BYTE *)v14 + 30) + 6) & 0x1F])(
        this,
        112,
        0,
        0,
        0);
    }
    else if ( (unsigned __int16)v15 <= 0x2AAu && (*(_BYTE *)(v103 + 264) & 1) == 0 )
    {
      SfnDWORD((int *)this, 112, 0, 0, 0, *(_DWORD *)(_gpsi + 4 * v15 - 2272), 1, 0);
    }
    *((_WORD *)this[5] + 15) |= 0x4000u;
    v14 = this[5];
  }
  *((_WORD *)v14 + 15) |= 0x8000u;
  v16 = this[5];
  v17 = *((_DWORD *)v16 + 48);
  if ( v17 && v17 != -1 )
  {
    if ( (*((_DWORD *)v16 + 36) & 0x800) != 0 )
    {
      RtlFreeHeap(*((PVOID *)this[3] + 16), 0, (PVOID)(*((_DWORD *)this[3] + 16) + v17));
      *((_DWORD *)this[5] + 48) = 0;
    }
    else
    {
      *((_DWORD *)v16 + 48) = 0;
      if ( (*(_DWORD *)(PsGetCurrentProcess() + 252) & 0x40000008) == 0 && (*(_BYTE *)(v103 + 264) & 1) == 0 )
        xxxClientFreeWindowClassExtraBytes(this, v17);
    }
  }
  v18 = this[16];
  if ( v18 && *((struct tagVWPL ***)v18 + 27) == this )
  {
    HMAssignmentLock(*((_DWORD *)v18 + 5), (char *)v18 + 108);
    LockPointer((int)this[16] + 108, *((_DWORD *)this[16] + 27));
    HMAssignmentLock(v72, v71);
  }
  v19 = (void (__fastcall *)(int *))HMAssignmentUnlock;
  if ( (*_gpsi & 4) != 0 && this == *(struct tagVWPL ***)(v103 + 436) )
    HMAssignmentUnlock(v103 + 436);
  if ( *(struct tagVWPL ***)(v103 + 796) == this )
    HMAssignmentUnlock(v103 + 796);
  if ( *(struct tagVWPL ***)(v103 + 836) == this )
    HMAssignmentUnlock(v103 + 836);
  v20 = *(_DWORD *)(v103 + 236);
  if ( this == *(struct tagVWPL ***)(v20 + 60) )
  {
    HMAssignmentUnlock(v20 + 60);
    v20 = *(_DWORD *)(v103 + 236);
    if ( v20 == _gpqForeground )
    {
      zzzInputFocusLostWindowEvent((int)this, 10);
      v20 = *(_DWORD *)(v103 + 236);
    }
  }
  if ( this == *(struct tagVWPL ***)(v20 + 68) )
  {
    HMAssignmentUnlock(v20 + 68);
    v20 = *(_DWORD *)(v103 + 236);
  }
  if ( this == *(struct tagVWPL ***)(v20 + 64) )
  {
    HMAssignmentUnlock(v20 + 64);
    v20 = *(_DWORD *)(v103 + 236);
  }
  if ( this == *(struct tagVWPL ***)(v20 + 72) )
  {
    HMAssignmentUnlock(v20 + 72);
    *(_BYTE *)(v20 + 76) = 0;
  }
  if ( this == (struct tagVWPL **)gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( this == (struct tagVWPL **)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v21 = (struct tagVWPL ***)this[3];
  if ( v21 )
  {
    if ( this == v21[11] )
    {
      HMAssignmentUnlock(v21 + 11);
      v21 = (struct tagVWPL ***)this[3];
    }
    if ( this == v21[12] )
    {
      HMAssignmentUnlock(v21 + 12);
      v21 = (struct tagVWPL ***)this[3];
    }
    if ( this == v21[25] )
    {
      NotifyShell::WindowBorderExitIfEntered(this);
      v58 = this[3];
      if ( (*((_DWORD *)v58 + 6) & 0x200) != 0 )
      {
        v73 = (_DWORD *)safe_cast_fnid_to_PTOOLTIPWND(*((_DWORD **)v58 + 14));
        v74 = v73;
        v75 = v58;
        if ( v73 )
        {
          v104 = (_DWORD *)*v73;
          if ( v104 )
          {
            v106[2] = 0;
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            v106[0] = *(_DWORD *)(ThreadWin32Thread + 228);
            *(_DWORD *)(ThreadWin32Thread + 228) = v106;
            v106[1] = v104;
            HMLockObject(v104);
            xxxResetTooltip(v74);
            ThreadUnlock1();
            v75 = this[3];
          }
        }
        v19 = (void (__fastcall *)(int *))HMAssignmentUnlock;
        HMAssignmentUnlock((char *)v75 + 100);
      }
      else
      {
        HMAssignmentUnlock((char *)v58 + 100);
      }
      *((_DWORD *)this[3] + 6) &= 0xFFFFFA3F;
    }
  }
  v22 = v103;
  if ( this == *(struct tagVWPL ***)(*(_DWORD *)(v103 + 236) + 56) )
    xxxReleaseCapture();
  if ( IsSysShadow(this) )
    CleanupShadow(this);
  else
    xxxRemoveShadow(this);
  DestroyWindowSmIcon(this);
  *((_DWORD *)this[5] + 43) = 0;
  if ( this[20] )
  {
    v107 = 0;
    v108[0] = 0;
    v108[1] = 0;
    Prop = _GetProp((int)this, (unsigned __int16)atomDDETrack, 1);
    if ( Prop )
    {
      v108[0] = Prop;
      v107 = *(_DWORD *)(v103 + 228);
      *(_DWORD *)(v103 + 228) = &v107;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(this, Prop);
      ThreadUnlock1();
    }
    v53 = InternalRemoveProp(1);
    if ( v53 )
    {
      *(_WORD *)(v53 + 72) = 0;
      if ( !*(_WORD *)(v53 + 74) )
      {
        v78 = SeTokenType(*(PACCESS_TOKEN *)(v53 + 24));
        v79 = *(void **)(v53 + 24);
        if ( v78 == TokenPrimary || v79 )
          ObfDereferenceObject(v79);
        Win32FreePool(v53);
      }
    }
    InternalRemoveProp(1);
    v19 = (void (__fastcall *)(int *))HMAssignmentUnlock;
    v22 = v103;
  }
  if ( (*((_BYTE *)this[5] + 146) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 18, *this);
  HandleFullWindowDestruction(this);
  if ( this == (struct tagVWPL **)gspwndCursor )
    v19(&gspwndCursor);
  if ( this == (struct tagVWPL **)gspwndCursorNC )
    v19(&gspwndCursorNC);
  for ( i = (_DWORD *)_gMagnContext; i != (_DWORD *)_gMagnContext; i = (_DWORD *)*i )
  {
    if ( v22 == i[2] )
      goto LABEL_74;
  }
  i = 0;
LABEL_74:
  if ( i )
  {
    LensContext = (_DWORD *)MagpFindLensContext(i, this, 2);
    v81 = LensContext;
    if ( LensContext )
    {
      v82 = *LensContext;
      if ( *(_DWORD **)(*LensContext + 4) == LensContext )
      {
        v83 = (_DWORD *)LensContext[1];
        if ( (_DWORD *)*v83 == v81 )
        {
          *v83 = v82;
          *(_DWORD *)(v82 + 4) = v83;
          v84 = v81[2];
          if ( (v84 & 0x40) != 0 )
          {
            ChangeComposableCursor(0);
            v81[2] &= ~0x40u;
            v84 = v81[2];
          }
          if ( (v84 & 0x20) == 0 )
          {
            v85 = (_DWORD *)v81[3];
            if ( v85 )
              v85 = (_DWORD *)*v85;
            v104 = v85;
            v97 = ***(_DWORD ***)(*(_DWORD *)(i[2] + 248) + 4);
            v86 = (void *)ReferenceDwmApiPort();
            DwmAsyncMagnDestroy(v86, v97);
          }
          v87 = v81[3];
          if ( v87 && v87 != -1 )
            HMAssignmentUnlock(v81 + 3);
          if ( v81[53] )
            Win32FreePool(v81[53]);
          if ( v81[58] )
            Win32FreePool(v81[58]);
          Win32FreePool(v81);
          goto LABEL_75;
        }
      }
LABEL_249:
      __fastfail(3u);
    }
  }
LABEL_75:
  DestroyWindowsTimers(this);
  HKRemoveMatchingHotkeys(0, this, 0, 1);
  v24 = this[42];
  if ( v24 )
  {
    --*(_DWORD *)v24;
    if ( !*(_DWORD *)this[42] )
      Win32FreePool(this[42]);
    this[42] = 0;
  }
  v25 = this[43];
  if ( v25 )
  {
    --*(_DWORD *)v25;
    if ( !*(_DWORD *)this[43] )
      Win32FreePool(this[43]);
    this[43] = 0;
  }
  if ( !gbInSMSCleanup )
    ClearSendMessages(this);
  v26 = this[5];
  if ( (*((_BYTE *)v26 + 18) & 8) != 0 )
  {
    UnsetLayeredWindow(this, 1);
    v26 = this[5];
  }
  if ( (*((_BYTE *)v26 + 19) & 2) != 0 )
  {
    UnsetRedirectedWindow((int)this, 2);
    SetOrClrWF(0, (int)this, 0xB02u, 1);
    v26 = this[5];
  }
  if ( (*((_BYTE *)v26 + 144) & 4) != 0 )
  {
    UnsetRedirectedWindow((int)this, 8);
    *((_DWORD *)this[5] + 36) &= ~4u;
    v26 = this[5];
  }
  if ( *((_DWORD *)v26 + 23) || (*((_BYTE *)v26 + 9) & 0x10) != 0 )
  {
    DecPaintCount(this);
    DeleteMaybeSpecialRgn(*((_DWORD *)this[5] + 23));
    *((_DWORD *)this[5] + 23) = 0;
    SetOrClrWF(0, (int)this, 0x110u, 1);
    v26 = this[5];
  }
  if ( (*((_BYTE *)v26 + 9) & 0xA) != 0 )
  {
    SetOrClrWF(0, (int)this, 0x108u, 1);
    SetOrClrWF(0, (int)this, 0x102u, 1);
  }
  ClearHungFlag(this);
  ClearHungFlag(this);
  if ( *(_DWORD *)(v103 + 448) )
  {
    QMsg = FindQMsg(v103, (_DWORD *)(v103 + 448), this, 0x12u, 0x12u, 1);
    if ( QMsg )
      IPostQuitMessage(_gptiCurrent, QMsg[4]);
  }
  if ( (*((_BYTE *)this[5] + 23) & 0xC0) != 0x40 )
  {
    v27 = this[23];
    if ( v27 )
    {
      if ( UnlockWndMenuWorker(v99, (bool)v100) )
        _DestroyMenu((int)v27);
    }
  }
  v28 = this[22];
  if ( v28 )
  {
    if ( v28 == *((struct tagVWPL **)this[3] + 8) )
    {
      UnlockWndMenuWorker(v99, (bool)v100);
    }
    else if ( UnlockWndMenuWorker(v99, (bool)v100) )
    {
      _DestroyMenu((int)v28);
    }
  }
  v29 = this[3];
  if ( v29 )
  {
    if ( (v30 = *((_DWORD *)v29 + 7)) != 0 && this == *(struct tagVWPL ***)(v30 + 52)
      || (v31 = *((_DWORD *)v29 + 8)) != 0 && this == *(struct tagVWPL ***)(v31 + 52) )
    {
      UnlockNotifyWindow(v99);
    }
  }
  if ( gcountPWO )
  {
    v88 = (EWNDOBJ *)InternalRemoveProp(1);
    if ( v88 )
    {
      GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
      GreDeleteWnd(v88);
      --gcountPWO;
      GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    }
  }
  GreLockSprite(*(_DWORD *)(_gpDispInfo + 20));
  GreDeleteSpriteOverlapPresent(*(_DWORD *)(_gpDispInfo + 20), *this);
  GreUnlockSprite(*(_DWORD *)(_gpDispInfo + 20));
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  v32 = (int *)(_gpDispInfo + 12);
  v33 = *(_DWORD *)(_gpDispInfo + 12);
  if ( v33 )
  {
    do
    {
      v34 = *(_DWORD *)(v33 + 32);
      if ( (v34 & 0x400800) != 0 )
      {
LABEL_107:
        v36 = *(_DWORD *)v33;
        v32 = (int *)v33;
        goto LABEL_108;
      }
      v35 = *(_DWORD *)(v33 + 8);
      if ( (struct tagVWPL **)v35 == this
        || *(struct tagVWPL ***)(v33 + 12) == this
        || *(struct tagVWPL ***)(v33 + 16) == this )
      {
        if ( (v34 & 2) == 0 )
        {
          if ( v33 != *(_DWORD *)(*(_DWORD *)(v35 + 76) + 24) && v33 == *(_DWORD *)(v35 + 144) )
          {
            *(_DWORD *)(v35 + 144) = 0;
LABEL_174:
            DestroyCacheDC(v32, *(_DWORD *)(v33 + 4));
            goto LABEL_106;
          }
          if ( (v34 & 0xC0) != 0 )
            DeleteHrgnClip(v33);
          goto LABEL_184;
        }
        if ( (v34 & 0x1000) != 0 )
        {
          if ( *(_DWORD *)(v33 + 36) == v103 )
          {
            v61 = ReleaseCacheDC(*(_DWORD *)(v33 + 4), 0);
          }
          else
          {
            DestroyCacheDC(v32, *(_DWORD *)(v33 + 4));
            v61 = 1;
          }
        }
        else
        {
          if ( GreSetDCOwnerEx(*(_DWORD *)(v33 + 4), -2147483630, 0, 0) )
            goto LABEL_184;
          v61 = 2;
        }
        if ( v61 != 1 )
        {
          if ( v61 == 2 )
            goto LABEL_174;
LABEL_184:
          InvalidateDCE((int *)v33);
        }
      }
LABEL_106:
      v36 = *v32;
      if ( v33 == *v32 )
        goto LABEL_107;
LABEL_108:
      v33 = v36;
    }
    while ( v36 );
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  if ( this == (struct tagVWPL **)gspwndLockUpdate )
  {
    Spb = FindSpb(this);
    FreeSpb(Spb);
    v37 = (void (__fastcall *)(struct tagVWPL **))HMAssignmentUnlock;
    HMAssignmentUnlock(&gspwndLockUpdate);
    _gptiLockUpdate = 0;
  }
  else
  {
    v37 = (void (__fastcall *)(struct tagVWPL **))HMAssignmentUnlock;
  }
  v38 = this[5];
  if ( *((char *)v38 + 8) < 0 )
  {
    v90 = FindSpb(this);
    FreeSpb(v90);
    v38 = this[5];
  }
  v39 = *((_DWORD *)v38 + 27);
  if ( v39 && (*((_BYTE *)v38 + 13) & 8) == 0 && (*((_WORD *)v38 + 15) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(v39);
    *((_DWORD *)this[5] + 27) = 0;
  }
  if ( this[21] )
  {
    RtlFreeHeap(*((PVOID *)this[3] + 16), 0, this[21]);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(0);
  }
  if ( (*((_DWORD *)this[5] + 36) & 0x400) != 0 )
    _NotifyOverlayWindow(this, 0);
  if ( this[25] )
  {
    RtlFreeHeap(*((PVOID *)this[3] + 16), 0, this[25]);
    *((_DWORD *)this[5] + 31) = 0;
    this[25] = 0;
    *((_DWORD *)this[5] + 29) = 0;
  }
  if ( this[30] )
  {
    Win32FreePool(this[30]);
    this[30] = 0;
  }
  v40 = this[3];
  if ( !v40 || (v41 = *(struct tagVWPL ***)(*((_DWORD *)v40 + 1) + 12), this == v41) )
  {
    *((_DWORD *)this[5] + 8) = 0;
    v37(this + 14);
  }
  else
  {
    v95 = (struct tagWND *)LockPointer((int)(this + 14), (int)v41);
    HMAssignmentLock(v43, v42);
  }
  *((_DWORD *)this[5] + 9) = 0;
  v37(this + 15);
  *((_DWORD *)this[5] + 10) = 0;
  v37(this + 16);
  *((_DWORD *)this[5] + 28) = 0;
  v37(this + 27);
  if ( IsWindowDesktopComposed(this) )
  {
    ReferenceDwmApiPort();
    DwmAsyncOwnerChange(0);
  }
  DereferenceClass(*(_DWORD *)(v101 + 232), (int)this);
  HMMarkObjectDestroy(this);
  v44 = _HMPheFromObject(this);
  *(_BYTE *)(v44 + 13) |= 2u;
  v45 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 356);
  if ( v45 )
  {
    if ( *(struct tagVWPL ***)(v45 + 48) == this )
    {
      HMAssignmentUnlock(v45 + 48);
      *(_DWORD *)(v45 + 40) = 0;
    }
    if ( *(struct tagVWPL ***)(v45 + 56) == this )
      HMAssignmentUnlock(v45 + 56);
    if ( *(struct tagVWPL ***)(v45 + 52) == this )
      HMAssignmentUnlock(v45 + 52);
  }
  if ( (*((_BYTE *)this[5] + 144) & 1) != 0 )
    _RemoveClipboardFormatListener(v95);
  result = (struct tagVWPL *)ThreadUnlock1();
  if ( result )
  {
    FreeClientOnWindowDestruction(this);
    if ( HMMarkObjectDestroy(this) )
    {
      if ( this[20] )
        DeleteProperties(this);
      if ( (*((_WORD *)this[5] + 15) & 0x3FFF) == v103 )
      {
        v91 = safe_cast_fnid_to_PSWITCHWND(this);
        v92 = v91;
        if ( v91 )
        {
          v102 = *(_DWORD *)(v91 + 4);
          if ( v102 )
          {
            RemoveSwitchWindowInfo(&v102);
            *(_DWORD *)(v92 + 4) = 0;
          }
        }
      }
      v47 = safe_cast_fnid_to_PMENUWND(this);
      v48 = v47;
      if ( v47 && *(_DWORD *)(v47 + 8) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(*(_DWORD *)(v47 + 8));
        v93 = (_DWORD *)*v104;
        if ( (*(_DWORD *)*v104 & 0x20000000) != 0 )
        {
          *v93 &= ~0x40000000u;
        }
        else if ( v93 == _gpopupMenu )
        {
          _gdwPUDFlags &= ~0x800000u;
          NullifyLookasideRef(*((_DWORD *)&_gpopupMenu + 12));
        }
        else
        {
          v94 = (_DWORD *)*v104;
          NullifyLookasideRef(*(_DWORD *)(*v104 + 48));
          UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<16384,56>>(v94);
          *(_DWORD *)(v48 + 8) = 0;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v104);
      }
      if ( this[41] )
      {
        Win32FreePool(this[41]);
        this[41] = 0;
      }
      --*(_DWORD *)(v101 + 504);
      if ( IsWindowDesktopComposed(this) )
      {
        v49 = ReferenceDwmApiPort();
        DwmAsyncChildDestroy(v49, *this);
      }
      *((_DWORD *)this[5] + 8) = 0;
      HMAssignmentUnlock(this + 14);
      PushW32ThreadLock((int)this[3], v108, (int)UserDereferenceObject);
      v50 = this[3];
      if ( v50 )
        ObfReferenceObject(v50);
      tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(this + 7));
      HMFreeObject(this);
      return (struct tagVWPL *)PopAndFreeW32ThreadLock((int)v108);
    }
    else
    {
      *((_DWORD *)this[5] + 21) = 0;
      v54 = this[3];
      if ( v54 )
        CurrentProcessWin32Process = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v54 + 5) + 28) + 8) + 232);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      ClassPtr = (_DWORD *)GetClassPtr(*(unsigned __int16 *)(_gpsi + 510), CurrentProcessWin32Process, _hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(*ClassPtr);
      ++*(_DWORD *)(*(_DWORD *)v57 + 40);
      SetOrClrWF(1, (int)this, 0x204u, 1);
      SetOrClrWF(0, (int)this, 0x220u, 1);
      SetOrClrWF(0, (int)this, 0xFC0u, 1);
      SetOrClrWF(1, (int)this, 0xF00u, 1);
      result = this[5];
      *((_DWORD *)result + 25) = 0;
      this[23] = 0;
    }
  }
  return result;
}
