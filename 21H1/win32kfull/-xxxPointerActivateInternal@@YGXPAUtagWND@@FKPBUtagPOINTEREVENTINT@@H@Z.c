/*
 * XREFs of ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536
 * Callers:
 *     _EditionPointerActivate@120 @ 0xF1D98 (_EditionPointerActivate@120.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _IsMessageOnlyWindow@4 @ 0xADBD2 (_IsMessageOnlyWindow@4.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     _PhysicalToLogicalDPIPointWithHitTest@16 @ 0x1514B5 (_PhysicalToLogicalDPIPointWithHitTest@16.c)
 *     _PhysicalToLogicalInPlacePointWithParent@12 @ 0x15156E (_PhysicalToLogicalInPlacePointWithParent@12.c)
 *     _xxxSendPointerMessageWorker@24 @ 0x15ABD3 (_xxxSendPointerMessageWorker@24.c)
 *     ?xxxQueryLegacyActivation@@YGJPAUtagWND@@0FPBUtagPOINTEREVENTINT@@@Z @ 0x15B7A9 (-xxxQueryLegacyActivation@@YGJPAUtagWND@@0FPBUtagPOINTEREVENTINT@@@Z.c)
 *     _IsModalMenuStarted@4 @ 0x15BA82 (_IsModalMenuStarted@4.c)
 *     _xxxMNDismissIfOffMenu@8 @ 0x1984BA (_xxxMNDismissIfOffMenu@8.c)
 */

void __userpurge xxxPointerActivateInternal(
        struct tagWND *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        struct tagWND *a4,
        unsigned int a5,
        const struct tagPOINTEREVENTINT *a6,
        int a7)
{
  struct tagWND *v7; // edi
  struct tagWND *v9; // ecx
  int *TopLevelWindow; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int *v16; // eax
  int v17; // eax
  struct tagWND *CompositionInputWindowUIOwner; // eax
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // edi
  PKTHREAD v23; // eax
  int v24; // eax
  int LegacyActivation; // eax
  int v26; // [esp+0h] [ebp-48h]
  const struct tagPOINTEREVENTINT *v27; // [esp+4h] [ebp-44h]
  char v28; // [esp+13h] [ebp-35h]
  int v29; // [esp+14h] [ebp-34h]
  int *v30; // [esp+18h] [ebp-30h]
  int v32; // [esp+20h] [ebp-28h] BYREF
  int v33; // [esp+24h] [ebp-24h]
  _DWORD v34[2]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v35[3]; // [esp+30h] [ebp-18h] BYREF
  _DWORD v36[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v7 = a4;
  v35[2] = 0;
  if ( *((_DWORD *)a4 + 42) )
  {
    v28 = 1;
LABEL_3:
    v29 = *(_DWORD *)(a2[2] + 236);
    if ( a2 != (_DWORD *)_GetDesktopWindow(a2) && !CoreWindowProp::IsCompositeAppOrSelfDisabled(v9) )
    {
      TopLevelWindow = (int *)_GetTopLevelWindow((int)a2);
      v30 = TopLevelWindow;
      if ( TopLevelWindow )
      {
        if ( a2 != *(_DWORD **)(v29 + 64) )
        {
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v35[0] = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = v35;
          v35[1] = TopLevelWindow;
          HMLockObject(TopLevelWindow);
          v13 = *(_DWORD *)(v29 + 56);
          if ( v13 && IsModalMenuStarted(*(_DWORD *)(v13 + 8)) )
          {
            v15 = *((_DWORD *)a4 + 8);
            v36[2] = 0;
            v32 = v15;
            v33 = *((_DWORD *)a4 + 9);
            v16 = *(int **)(v14 + 328);
            if ( v16 )
              v17 = *v16;
            else
              v17 = 0;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, v17);
            if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v29 + 56) + 20) + 184) & 0xF) == 2 )
            {
              if ( *(_DWORD *)v34[0]
                && *(_DWORD *)(*(_DWORD *)v34[0] + 8)
                && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 8) + 20) + 184) & 0xF) != 2
                && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 8) + 120) )
              {
                PhysicalToLogicalInPlacePointWithParent(*(_DWORD **)(*(_DWORD *)v34[0] + 8), &v32, 0);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v32, &v32, 0, *(_DWORD **)(v29 + 56));
            }
            v21 = *(_DWORD *)(v29 + 56);
            v22 = (unsigned __int16)v32 | ((unsigned __int16)v33 << 16);
            v23 = KeGetCurrentThread();
            v24 = W32GetThreadWin32Thread(v23);
            v36[0] = *(_DWORD *)(v24 + 228);
            *(_DWORD *)(v24 + 228) = v36;
            v36[1] = v21;
            HMLockObject(v21);
            xxxMNDismissIfOffMenu(v22);
            ThreadUnlock1();
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34);
            TopLevelWindow = v30;
            v7 = a4;
          }
          if ( !v28 )
          {
            LegacyActivation = xxxSendPointerMessageWorker((int)a2, 587, (int)a3, *TopLevelWindow, 0, 177);
            if ( LegacyActivation == 1 )
              goto LABEL_29;
            if ( LegacyActivation != 3 )
              LegacyActivation = xxxQueryLegacyActivation(a1, v7, v26, v27);
            if ( LegacyActivation == 1 )
LABEL_29:
              xxxActivateWindowWithOptions(TopLevelWindow, 3, 49, 1);
          }
          ThreadUnlock1();
        }
      }
    }
    return;
  }
  v28 = 0;
  if ( !IsIndependentInputWindow(a2) )
    goto LABEL_3;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
  v19 = (int)CompositionInputWindowUIOwner;
  if ( CompositionInputWindowUIOwner && !IsMessageOnlyWindow((int)CompositionInputWindowUIOwner) )
  {
    v20 = _GetTopLevelWindow(v19);
    PostEventMessageEx(
      *(tagDomLock **)(*(_DWORD *)(v20 + 8) + 236),
      *(_DWORD *)(v20 + 8),
      (struct tagTHREADINFO *)6,
      0,
      0,
      0,
      *(_DWORD *)v20,
      0,
      v26,
      v27);
  }
}
