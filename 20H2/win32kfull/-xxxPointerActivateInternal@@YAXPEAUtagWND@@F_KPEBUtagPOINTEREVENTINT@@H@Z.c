/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1420
 * Callers:
 *     EditionPointerActivate @ 0x1C01F1C10 (EditionPointerActivate.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0012B08 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0012B48 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C0012C50 (IsMessageOnlyWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F94D8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1E08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E535C (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F0718 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F17E4 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F1D38 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0237C24 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        __int16 a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v5; // rdi
  __int16 v6; // bx
  char v8; // r12
  __int64 v9; // r15
  __int64 *TopLevelWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rbx
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KTHREAD *CurrentThread; // r15
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v37; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v39; // rax
  _QWORD *v40; // rax
  __int64 LegacyActivation; // rax
  __int64 v42; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v43[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v44[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v47; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a3;
  v6 = a2;
  v43[2] = 0LL;
  if ( *((_DWORD *)a4 + 44) )
  {
    v8 = 1;
LABEL_3:
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) )
    {
      TopLevelWindow = (__int64 *)GetTopLevelWindow((__int64)a1);
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v9 + 120) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v43[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v43;
          v43[1] = TopLevelWindow;
          HMLockObject(TopLevelWindow);
          v14 = *(_QWORD *)(v9 + 104);
          if ( v14 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v14 + 16)) )
          {
            v15 = *((_QWORD *)a4 + 5);
            v44[2] = 0LL;
            v47 = v15;
            v16 = *(__int64 **)(v14 + 608);
            if ( v16 )
              v17 = *v16;
            else
              v17 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(&v42, v17);
            v22 = *(_QWORD *)(v9 + 104);
            if ( (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v42
                && *(_QWORD *)(*(_QWORD *)v42 + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 16LL) + 216LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(*(struct tagWND **)(*(_QWORD *)v42 + 16LL), (int *)&v47, 0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v47, &v47, 0LL, v22);
            }
            v23 = *(_QWORD *)(v9 + 104);
            v24 = (unsigned __int16)v47 | (WORD2(v47) << 16);
            v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v44[0] = *(_QWORD *)(v25 + 416);
            *(_QWORD *)(v25 + 416) = v44;
            v44[1] = v23;
            HMLockObject(v23);
            xxxMNDismissIfOffMenu(*(_QWORD *)(v9 + 104), v24);
            ThreadUnlock1(v27, v26, v28);
            CurrentThread = KeGetCurrentThread();
            v30 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess(v31)
              || (CurrentProcess = PsGetCurrentProcess(v33, v32, v34),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v37),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              v39 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( v39 )
                v30 = *v39;
            }
            if ( v42 != gSmartObjNullRef && !--*(_DWORD *)(v42 + 8) )
            {
              if ( *(_BYTE *)(v42 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v42);
            }
            v40 = *(_QWORD **)(v30 + 1472);
            v6 = a2;
            if ( v40 )
              *(_QWORD *)(v30 + 1472) = *v40;
            v5 = a3;
          }
          if ( !v8 )
          {
            LegacyActivation = xxxSendPointerMessageWorker((__int64)a1, 587LL, v5, *TopLevelWindow, 0LL, 177);
            if ( LegacyActivation == 1 )
              goto LABEL_39;
            if ( LegacyActivation != 3 )
              LegacyActivation = xxxQueryLegacyActivation(a1, (struct tagWND *)TopLevelWindow, v6, a4);
            if ( LegacyActivation == 1 )
LABEL_39:
              xxxActivateWindowWithOptions((__int64)TopLevelWindow, 3LL, 49LL, 1LL);
          }
          ThreadUnlock1(v12, v14, v13);
        }
      }
    }
    return;
  }
  v8 = 0;
  if ( !(unsigned int)IsIndependentInputWindow(a1) )
    goto LABEL_3;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
  v19 = (__int64)CompositionInputWindowUIOwner;
  if ( CompositionInputWindowUIOwner )
  {
    LOBYTE(v20) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
    if ( !v20 )
    {
      v21 = GetTopLevelWindow(v19);
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(v21 + 16),
        *(struct tagQ **)(*(_QWORD *)(v21 + 16) + 432LL),
        6u,
        0LL,
        0,
        0LL,
        *(_QWORD *)v21,
        0LL);
    }
  }
}
