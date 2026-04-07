/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180030E44
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002F9E8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180030BE4 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180034650 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000B514 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000CAC0 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018A6C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002FD2C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18003370C (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180033738 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180033CE8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  struct CStoryboard *v4; // r14
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  char v7; // bp
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // r14
  CTransitionVisualController *Blink_low; // rcx
  HWND v16; // rdx
  int SnapshotIndex; // eax
  CTransitionVisualController *v18; // rcx
  int StoredSnapshotNoRefByIndex; // eax
  struct CVisual *v20; // rbp
  int v21; // eax
  int v22; // eax
  int inserted; // eax
  struct CTransitionWindowSnapshot *v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 i; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+90h] [rbp+8h] BYREF
  struct CStoryboard *v27; // [rsp+98h] [rbp+10h]
  char v28; // [rsp+A0h] [rbp+18h]
  int v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v4 = a2;
  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = a3;
  v26 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v26) )
      return (unsigned int)-2147467259;
    v6 = v26;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v6);
  Blink = WindowListForDesktop->Blink;
  if ( Blink != WindowListForDesktop )
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v4 + 16LL))(v4);
      v12 = (int)Blink[38].Blink;
      v13 = 0LL;
      for ( i = v11; (unsigned int)v13 < *(_DWORD *)(i + 4); v13 = (unsigned int)(v13 + 1) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 4 * v13) & 0xFFF) == (v12 & 0xFFF) )
        {
          Blink_low = (CTransitionVisualController *)LODWORD(Blink[38].Blink);
          if ( ((unsigned int)Blink_low & 0x40000000) == 0 )
            LODWORD(Blink[38].Blink) = (unsigned int)Blink_low & (v29 | 0x2000000) | 0xFFF;
          if ( v7 )
          {
            CTransitionVisualController::_StopAnimations(Blink_low, (struct CWindowData *)Blink);
            if ( (v12 & 0x20100000) == 0x20100000 )
            {
              v16 = (HWND)Blink[2].Blink;
              v24 = 0LL;
              SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, v16);
              StoredSnapshotNoRefByIndex = CTransitionVisualController::GetStoredSnapshotNoRefByIndex(
                                             v18,
                                             SnapshotIndex,
                                             &v24);
              if ( StoredSnapshotNoRefByIndex >= 0 )
              {
                if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
                        (HWND)Blink[2].Blink,
                        -1,
                        0) )
                  CTransitionVisualController::RestoreWindow(this, (struct CWindowData *)Blink, (v12 & 0x10000000) != 0);
                v20 = v24;
                v21 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v24 + 3) + 32LL), v24);
                v5 = v21;
                if ( v21 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v21,
                    0x23Fu);
                  return v5;
                }
                v22 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
                v5 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v22,
                    0x240u);
                  return v5;
                }
                inserted = VisualCollection::InsertRelative(
                             (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                             v20,
                             0LL,
                             0,
                             1);
                v5 = inserted;
                if ( inserted < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    inserted,
                    0x241u);
                  return v5;
                }
                v7 = v28;
              }
            }
          }
        }
        v11 = i;
      }
      Blink = Blink->Blink;
      if ( Blink == WindowListForDesktop )
        break;
      v4 = v27;
    }
  }
  return v5;
}
