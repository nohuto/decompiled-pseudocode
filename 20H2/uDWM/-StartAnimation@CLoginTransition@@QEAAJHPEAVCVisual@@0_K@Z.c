/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000A8A8
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180035960 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18000A314 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000A3DC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000AD58 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000AEC4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800198C8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026600 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A918 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x1800337B4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180034218 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180034CD0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180034E80 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180035330 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800355B4 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180038A68 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180038C58 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180039404 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084818 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct CVisual *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  CAnimationEngine *v9; // rsi
  int v10; // eax
  int v11; // ebx
  CCachedVisualImageProxy ***v12; // rsi
  __int64 v13; // rcx
  CAnimatedTransitionVisual **v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  CVisual **v17; // r12
  CBaseObject *v18; // rcx
  int inserted; // eax
  CAnimatedTransitionVisual *v20; // rcx
  int v21; // eax
  int v22; // eax
  CCachedVisualImageProxy **v23; // r8
  int v24; // eax
  int v25; // eax
  CAnimatedTransitionVisual *v26; // r8
  int v27; // eax
  CCachedVisualImageProxy **v28; // rax
  int v29; // r14d
  CAnimatedTransitionVisual *v30; // rax
  CCachedVisualImageProxy **v31; // rcx
  CAnimatedTransitionVisual *v32; // rcx
  int v33; // eax
  CAnimatedTransitionVisual *v34; // rcx
  int v35; // eax
  CCachedVisualImageProxy *v36; // rax
  struct CVisual *v37; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v39; // eax
  CAnimatedTransitionVisual *v40; // r8
  int v41; // eax
  int v42; // eax
  int started; // eax
  int v44; // eax
  __int64 v46; // rcx
  int v47; // r9d
  unsigned int v48; // [rsp+20h] [rbp-81h]
  struct CAnimationEngine *v49; // [rsp+30h] [rbp-71h]
  CCachedVisualImageProxy *v50; // [rsp+38h] [rbp-69h] BYREF
  int v51; // [rsp+40h] [rbp-61h]
  struct tagPOINT v52; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v53[2]; // [rsp+50h] [rbp-51h] BYREF
  __int128 v54; // [rsp+58h] [rbp-49h] BYREF
  __int64 v55; // [rsp+68h] [rbp-39h]
  unsigned int v56; // [rsp+70h] [rbp-31h]
  CCachedVisualImageProxy **v57; // [rsp+78h] [rbp-29h] BYREF
  CAnimatedTransitionVisual *v58; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT v59; // [rsp+88h] [rbp-19h] BYREF
  char v60[16]; // [rsp+98h] [rbp-9h] BYREF

  v51 = a2;
  v55 = 0LL;
  v56 = 0;
  v54 = 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoginTransition_Start,
      (_DWORD)a3,
      1,
      (__int64)v60);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = a2;
  v49 = CDesktopManager::AcquireAnimationEngine();
  v9 = v49;
  if ( v49 )
  {
    v10 = CLoginTransition::StopAnimation(this);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x31u);
      goto LABEL_51;
    }
    *((_QWORD *)this + 4) = a3;
    if ( a3 )
      _InterlockedAdd((volatile signed __int32 *)a3 + 2, 1u);
    *((_QWORD *)this + 5) = a4;
    if ( a4 )
      _InterlockedAdd((volatile signed __int32 *)a4 + 2, 1u);
    v12 = (CCachedVisualImageProxy ***)((char *)this + 8);
    v13 = *((_QWORD *)this + 1);
    if ( v13 )
    {
      CBaseObject::Release((CBaseObject *)(v13 + 8));
      *v12 = 0LL;
    }
    v14 = (CAnimatedTransitionVisual **)((char *)this + 16);
    v15 = *((_QWORD *)this + 2);
    if ( v15 )
    {
      CBaseObject::Release((CBaseObject *)(v15 + 8));
      *v14 = 0LL;
    }
    v16 = *((_QWORD *)this + 3);
    if ( v16 )
    {
      CBaseObject::Release((CBaseObject *)(v16 + 8));
      *((_QWORD *)this + 3) = 0LL;
    }
    v17 = (CVisual **)((char *)this + 48);
    v18 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v18 )
    {
      CBaseObject::Release(v18);
      *v17 = 0LL;
    }
    inserted = CVisual::Create((struct CVisual **)this + 6);
    v11 = inserted;
    if ( inserted < 0 )
    {
      v48 = 67;
    }
    else
    {
      inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 1);
      v11 = inserted;
      if ( inserted < 0 )
      {
        v48 = 68;
      }
      else
      {
        inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 2);
        v11 = inserted;
        if ( inserted < 0 )
        {
          v48 = 69;
        }
        else
        {
          v52.x = -32000;
          v52.y = -32000;
          CVisual::SetOffset(a3, &v52);
          CVisual::SetOffset(a4, &v52);
          v20 = (CAnimatedTransitionVisual *)*v12;
          v59 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 460);
          v21 = CAnimatedTransitionVisual::SetVisual(v20, a3, 1, &v59);
          v11 = v21;
          if ( v21 < 0 )
          {
            v48 = 83;
            v47 = v21;
            goto LABEL_66;
          }
          inserted = CAnimatedTransitionVisual::SetVisual(*v14, a4, 0, &v59);
          v11 = inserted;
          if ( inserted < 0 )
          {
            v48 = 84;
          }
          else
          {
            inserted = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*v12, a3, &v59);
            v11 = inserted;
            if ( inserted < 0 )
            {
              v48 = 87;
            }
            else
            {
              v22 = 0;
              v23 = *v12;
              if ( v59.right - v59.left >= 0 )
                v22 = v59.right - v59.left;
              v53[0] = v22;
              v24 = 0;
              if ( v59.bottom - v59.top >= 0 )
                v24 = v59.bottom - v59.top;
              v53[1] = v24;
              (*((void (__fastcall **)(CCachedVisualImageProxy **, _DWORD *))v23[1] + 12))(v23 + 1, v53);
              v25 = 0;
              v26 = *v14;
              if ( v59.right - v59.left >= 0 )
                v25 = v59.right - v59.left;
              LODWORD(v50) = v25;
              v27 = 0;
              if ( v59.bottom - v59.top >= 0 )
                v27 = v59.bottom - v59.top;
              HIDWORD(v50) = v27;
              (*(void (__fastcall **)(__int64, CCachedVisualImageProxy **))(*((_QWORD *)v26 + 1) + 96LL))(
                (__int64)v26 + 8,
                &v50);
              v28 = *v12;
              v29 = v51;
              *((_DWORD *)v28 + 182) = v51;
              *((_DWORD *)v28 + 183) = 2;
              v30 = *v14;
              *((_DWORD *)v30 + 182) = v29;
              *((_DWORD *)v30 + 183) = 1;
              CAnimatedTransitionVisual::SetBeginRect((CAnimatedTransitionVisual *)*v12, &v59);
              CAnimatedTransitionVisual::SetBeginRect(*v14, &v59);
              v31 = *v12;
              *((struct tagRECT *)v31 + 54) = v59;
              CVisual::SetDirtyFlags((CVisual *)(v31 + 1), 0x1000u);
              v32 = *v14;
              *((struct tagRECT *)v32 + 54) = v59;
              CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v32 + 8), 0x1000u);
              CAnimatedTransitionVisual::SetBeginAlpha(*v14, 0.0);
              v33 = v59.right - v59.left;
              v34 = *v14;
              if ( v59.right - v59.left < 0 )
                v33 = 0;
              LODWORD(v50) = v33;
              v35 = v59.bottom - v59.top;
              if ( v59.bottom - v59.top < 0 )
                v35 = 0;
              HIDWORD(v50) = v35;
              v36 = v50;
              *((_QWORD *)v34 + 118) = v50;
              (*v12)[118] = v36;
              v37 = *v17;
              RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                                   *((_QWORD *)this + 10));
              inserted = VisualCollection::InsertRelative(
                           (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                           v37,
                           0LL,
                           0,
                           1);
              v11 = inserted;
              if ( inserted < 0 )
              {
                v48 = 108;
              }
              else
              {
                inserted = VisualCollection::InsertRelative(
                             (CVisual *)((char *)*v17 + 32),
                             (struct CVisual *)((unsigned __int64)(*v12 + 1) & -(__int64)(*v12 != 0LL)),
                             0LL,
                             0,
                             1);
                v11 = inserted;
                if ( inserted < 0 )
                {
                  v48 = 109;
                }
                else
                {
                  inserted = VisualCollection::InsertRelative(
                               (CVisual *)((char *)*v17 + 32),
                               (struct CVisual *)(((unsigned __int64)*v14 + 8) & -(__int64)(*v14 != 0LL)),
                               0LL,
                               0,
                               1);
                  v11 = inserted;
                  if ( inserted < 0 )
                  {
                    v48 = 110;
                  }
                  else
                  {
                    inserted = CVisual::MoveToFront(*v17, 0);
                    v11 = inserted;
                    if ( inserted >= 0 )
                    {
                      v57 = *v12;
                      v39 = DynArrayImpl<0>::AddMultipleAndSet(&v54, 8LL, 1LL, &v57);
                      v11 = v39;
                      if ( v39 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0xC0u);
                      if ( v11 < 0 )
                      {
                        v48 = 115;
                      }
                      else
                      {
                        v40 = *v14;
                        v58 = *v14;
                        if ( v56 + 1 < v56 )
                        {
                          v11 = -2147024362;
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
                        }
                        else
                        {
                          if ( v56 + 1 <= HIDWORD(v55) )
                          {
                            v46 = v56++;
                            *(_QWORD *)(v54 + 8 * v46) = v40;
LABEL_47:
                            v9 = v49;
                            v42 = CAnimationEngine::RegisterForAnimationCompleteNotification(v49, this);
                            v11 = v42;
                            if ( v42 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x78u);
                            }
                            else
                            {
                              started = CAnimationEngine::ScheduleStartAnimation(v49, v29);
                              v11 = started;
                              if ( started < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x7Bu);
                              }
                              else
                              {
                                v44 = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
                                v11 = v44;
                                if ( v44 < 0 )
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x7Fu);
                                else
                                  *((_BYTE *)this + 68) = 1;
                              }
                            }
LABEL_51:
                            if ( v11 >= 0 )
                              goto LABEL_52;
                            goto LABEL_57;
                          }
                          v41 = DynArrayImpl<0>::AddMultipleAndSet(&v54, 8LL, 1LL, &v58);
                          v11 = v41;
                          if ( v41 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0xC0u);
                          if ( v11 >= 0 )
                            goto LABEL_47;
                        }
                        v48 = 116;
                      }
                      v47 = v11;
LABEL_66:
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, v48);
                      v9 = v49;
                      goto LABEL_51;
                    }
                    v48 = 113;
                  }
                }
              }
            }
          }
        }
      }
    }
    v47 = inserted;
    goto LABEL_66;
  }
  v11 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2Eu);
LABEL_57:
  CLoginTransition::_CleanupAnimation(this);
LABEL_52:
  if ( v9 )
    CAnimationEngine::Release(v9);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v54);
  return (unsigned int)v11;
}
