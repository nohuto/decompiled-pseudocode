/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000B514
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000B428 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x18000B7BC (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000C058 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180030E44 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180031484 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000B050 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000B6F0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x18000B7BC (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018360 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180028AD4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002A5AC (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002C554 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180095010 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

void __fastcall CTransitionVisualController::RestoreWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r8
  int v9; // r14d
  struct CTopLevelWindow *v10; // rbx
  CVisual *v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rcx
  char v14; // bp
  __int64 v15; // rax
  unsigned int Clone; // eax
  char v17; // r8
  __int64 v18; // rcx
  CTransitionVisualController *v19; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = *((_QWORD *)a2 + 48);
    if ( v6 )
      *(_BYTE *)(v6 + 240) &= ~0x80u;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = CWindowList::SyncWindowData(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
           *((struct IDwmWindow **)a2 + 3),
           a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v7 >= 0 )
    {
      v9 = *((_DWORD *)a2 + 154);
      v10 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 48);
      *((_DWORD *)a2 + 154) = v9 & 0xFFEFFFFF;
      if ( v10 && (*((_BYTE *)v10 + 241) & 1) != 0 )
      {
        v12 = *((_DWORD *)this + 34);
        v13 = 0LL;
        v14 = 1;
        if ( v12 )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v13);
            if ( *(_QWORD *)(v15 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v15 + 128) + 24LL) == 3 )
              break;
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= v12 )
              goto LABEL_17;
          }
          v14 = 0;
        }
LABEL_17:
        Clone = CTransitionVisualController::_FindClone(this, a2, 1);
        v17 = 0;
        if ( Clone >= *((_DWORD *)this + 12) )
          v17 = v14;
        if ( v17 )
        {
          CTransitionVisualController::_MoveWindowOffscreen(v10, 0);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0p_EtwEventWriteTransfer(v18, &UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
        }
      }
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), a2, 0);
      CWindowList::UpdateWindowScale(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), a2, 0);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      v11 = (CVisual *)*((_QWORD *)a2 + 48);
      if ( v11 )
        CVisual::SetDirtyFlags(v11, 0x4000000u);
      *((_DWORD *)a2 + 154) = v9;
    }
    if ( a3 )
    {
      LOBYTE(v8) = 1;
      v19 = this;
      CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___(a2, &v19, v8);
    }
  }
}
